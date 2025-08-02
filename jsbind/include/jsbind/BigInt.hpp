#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {

class BigInt : public emlite::Val {
    explicit BigInt(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static BigInt take_ownership(Handle h) noexcept {
        return BigInt(h);
    }

    explicit BigInt(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    /// Create BigInt from string
    explicit BigInt(const String &value) noexcept
        : emlite::Val(emlite::Val::global("BigInt")(value)) {}

    /// Create BigInt from C string
    explicit BigInt(const char *value) noexcept
        : emlite::Val(emlite::Val::global("BigInt")(String(value))) {}

    /// Create BigInt from integer (note: limited to safe integer range)
    explicit BigInt(int64_t value) noexcept
        : emlite::Val(emlite::Val::global("BigInt")(static_cast<double>(value))) {}

    /// Create BigInt from unsigned integer  
    explicit BigInt(uint64_t value) noexcept 
        : emlite::Val(createFromUint64(value)) {}
        
private:
    static emlite::Val createFromUint64(uint64_t value) {
        // Convert uint64_t to string manually (no std library)
        char buffer[32];
        size_t pos = 0;
        
        if (value == 0) {
            buffer[0] = '0';
            buffer[1] = '\0';
        } else {
            // Build string backwards
            uint64_t temp = value;
            while (temp > 0) {
                buffer[pos++] = '0' + (temp % 10);
                temp /= 10;
            }
            buffer[pos] = '\0';
            
            // Reverse the string
            for (size_t i = 0; i < pos / 2; i++) {
                char c = buffer[i];
                buffer[i] = buffer[pos - 1 - i];
                buffer[pos - 1 - i] = c;
            }
        }
        
        return emlite::Val::global("BigInt")(String(buffer));
    }

public:

    /// Default constructor creates BigInt(0)
    BigInt() noexcept
        : emlite::Val(emlite::Val::global("BigInt")(0)) {}

    [[nodiscard]] BigInt clone() const noexcept {
        return *this;
    }

    // Conversion methods
    [[nodiscard]] String toString(int radix = 10) const noexcept {
        return call("toString", radix).as<String>();
    }

    [[nodiscard]] String valueOf() const noexcept {
        return call("valueOf").as<String>();
    }

    [[nodiscard]] String toLocaleString() const noexcept {
        return call("toLocaleString").as<String>();
    }

    // Arithmetic operators
    BigInt operator+(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " + " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator-(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " - " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator*(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " * " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator/(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " / " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator%(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " % " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    [[nodiscard]] BigInt pow(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " ** " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    // Bitwise operators
    BigInt operator&(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " & " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator|(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " | " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator^(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " ^ " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator<<(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " << " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator>>(const BigInt &other) const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String((toString().toString() + " >> " + other.toString().toString()).as_str())
            ).as_handle()
        );
    }

    // Unary operators
    BigInt operator-() const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String(("-" + toString().toString()).as_str())
            ).as_handle()
        );
    }

    BigInt operator~() const noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("eval")(
                String(("~" + toString().toString()).as_str())
            ).as_handle()
        );
    }

    // Assignment operators
    BigInt& operator+=(const BigInt &other) noexcept {
        *this = *this + other;
        return *this;
    }

    BigInt& operator-=(const BigInt &other) noexcept {
        *this = *this - other;
        return *this;
    }

    BigInt& operator*=(const BigInt &other) noexcept {
        *this = *this * other;
        return *this;
    }

    BigInt& operator/=(const BigInt &other) noexcept {
        *this = *this / other;
        return *this;
    }

    BigInt& operator%=(const BigInt &other) noexcept {
        *this = *this % other;
        return *this;
    }

    BigInt& operator&=(const BigInt &other) noexcept {
        *this = *this & other;
        return *this;
    }

    BigInt& operator|=(const BigInt &other) noexcept {
        *this = *this | other;
        return *this;
    }

    BigInt& operator^=(const BigInt &other) noexcept {
        *this = *this ^ other;
        return *this;
    }

    BigInt& operator<<=(const BigInt &other) noexcept {
        *this = *this << other;
        return *this;
    }

    BigInt& operator>>=(const BigInt &other) noexcept {
        *this = *this >> other;
        return *this;
    }

    // Comparison operators
    bool operator<(const BigInt &other) const noexcept {
        return emlite::Val::global("eval")(
            String((toString().toString() + " < " + other.toString().toString()).as_str())
        ).as<bool>();
    }

    bool operator>(const BigInt &other) const noexcept {
        return emlite::Val::global("eval")(
            String((toString().toString() + " > " + other.toString().toString()).as_str())
        ).as<bool>();
    }

    bool operator<=(const BigInt &other) const noexcept {
        return emlite::Val::global("eval")(
            String((toString().toString() + " <= " + other.toString().toString()).as_str())
        ).as<bool>();
    }

    bool operator>=(const BigInt &other) const noexcept {
        return emlite::Val::global("eval")(
            String((toString().toString() + " >= " + other.toString().toString()).as_str())
        ).as<bool>();
    }

    // Static utility methods
    static BigInt asIntN(int width, const BigInt &bigint) noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("BigInt").call("asIntN", width, bigint).as_handle()
        );
    }

    static BigInt asUintN(int width, const BigInt &bigint) noexcept {
        return BigInt::take_ownership(
            emlite::Val::global("BigInt").call("asUintN", width, bigint).as_handle()
        );
    }

    // STL-like interface
    [[nodiscard]] size_t hash() const noexcept {
        // Simple hash based on handle value (no std library)
        return static_cast<size_t>(as_handle());
    }

    [[nodiscard]] bool isZero() const noexcept {
        return *this == BigInt(static_cast<int64_t>(0));
    }

    [[nodiscard]] bool isPositive() const noexcept {
        return *this > BigInt(static_cast<int64_t>(0));
    }

    [[nodiscard]] bool isNegative() const noexcept {
        return *this < BigInt(static_cast<int64_t>(0));
    }

    // Absolute value
    [[nodiscard]] BigInt abs() const noexcept {
        return isNegative() ? -*this : *this;
    }

    // Power function alias
    [[nodiscard]] BigInt power(const BigInt &exponent) const noexcept {
        return pow(exponent);
    }

    // Factory methods for common values
    static BigInt zero() noexcept {
        return BigInt(static_cast<int64_t>(0));
    }

    static BigInt one() noexcept {
        return BigInt(static_cast<int64_t>(1));
    }

    static BigInt minusOne() noexcept {
        return BigInt(static_cast<int64_t>(-1));
    }

    // Parse from string with error checking
    static Option<BigInt> tryParse(const String &str) noexcept {
        // Simplified version without exception handling (no std library)
        auto result = emlite::Val::global("BigInt")(str);
        if (result.is_error()) {
            return none<BigInt>();
        }
        return some(BigInt::take_ownership(result.as_handle()));
    }
};

// Free functions for STL compatibility
inline BigInt abs(const BigInt &x) noexcept {
    return x.abs();
}

inline BigInt pow(const BigInt &base, const BigInt &exp) noexcept {
    return base.pow(exp);
}

} // namespace jsbind

// Note: STL hash specialization removed for no-stdlib compatibility
// If needed, users can implement hash functions manually