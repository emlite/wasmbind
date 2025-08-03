#include <jsbind/BigInt.hpp>

using namespace jsbind;

BigInt::BigInt(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BigInt BigInt::take_ownership(Handle h) noexcept { return BigInt(h); }

BigInt::BigInt(const emlite::Val &val) noexcept : emlite::Val(val) {}

BigInt::BigInt(const String &value) noexcept : emlite::Val(emlite::Val::global("BigInt")(value)) {}

BigInt::BigInt(const char *value) noexcept
    : emlite::Val(emlite::Val::global("BigInt")(String(value))) {}

Result<BigInt, Error> BigInt::create(const String &value) noexcept {
    return BigInt(value).as<Result<BigInt, Error>>();
}

Result<BigInt, Error> BigInt::create(const char *value) noexcept {
    return BigInt(value).as<Result<BigInt, Error>>();
}

BigInt::BigInt(int64_t value) noexcept
    : emlite::Val(emlite::Val::global("BigInt")(static_cast<double>(value))) {}

BigInt::BigInt(uint64_t value) noexcept : emlite::Val(createFromUint64(value)) {}

BigInt::BigInt() noexcept : emlite::Val(emlite::Val::global("BigInt")(0)) {}

emlite::Val BigInt::instance() noexcept { return emlite::Val::global("BigInt"); }

BigInt BigInt::clone() const noexcept { return *this; }

emlite::Val BigInt::createFromUint64(uint64_t value) {
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
            char c              = buffer[i];
            buffer[i]           = buffer[pos - 1 - i];
            buffer[pos - 1 - i] = c;
        }
    }

    return emlite::Val::global("BigInt")(String(buffer));
}

String BigInt::toString(int radix) const noexcept { return call("toString", radix).as<String>(); }

String BigInt::valueOf() const noexcept { return call("valueOf").as<String>(); }

String BigInt::toLocaleString() const noexcept { return call("toLocaleString").as<String>(); }

BigInt BigInt::operator+(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " + " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator-(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " - " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator*(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " * " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator/(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " / " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator%(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " % " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::pow(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " ** " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator&(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " & " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator|(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " | " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator^(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " ^ " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator<<(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " << " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator>>(const BigInt &other) const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(
            String((toString().toString() + " >> " + other.toString().toString()).c_str())
        )
            .as_handle()
    );
}

BigInt BigInt::operator-() const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(String(("-" + toString().toString()).c_str())).as_handle()
    );
}

BigInt BigInt::operator~() const noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("eval")(String(("~" + toString().toString()).c_str())).as_handle()
    );
}

BigInt &BigInt::operator+=(const BigInt &other) noexcept {
    *this = *this + other;
    return *this;
}

BigInt &BigInt::operator-=(const BigInt &other) noexcept {
    *this = *this - other;
    return *this;
}

BigInt &BigInt::operator*=(const BigInt &other) noexcept {
    *this = *this * other;
    return *this;
}

BigInt &BigInt::operator/=(const BigInt &other) noexcept {
    *this = *this / other;
    return *this;
}

BigInt &BigInt::operator%=(const BigInt &other) noexcept {
    *this = *this % other;
    return *this;
}

BigInt &BigInt::operator&=(const BigInt &other) noexcept {
    *this = *this & other;
    return *this;
}

BigInt &BigInt::operator|=(const BigInt &other) noexcept {
    *this = *this | other;
    return *this;
}

BigInt &BigInt::operator^=(const BigInt &other) noexcept {
    *this = *this ^ other;
    return *this;
}

BigInt &BigInt::operator<<=(const BigInt &other) noexcept {
    *this = *this << other;
    return *this;
}

BigInt &BigInt::operator>>=(const BigInt &other) noexcept {
    *this = *this >> other;
    return *this;
}

bool BigInt::operator<(const BigInt &other) const noexcept {
    return emlite::Val::global("eval")(
               String((toString().toString() + " < " + other.toString().toString()).c_str())
    )
        .as<bool>();
}

bool BigInt::operator>(const BigInt &other) const noexcept {
    return emlite::Val::global("eval")(
               String((toString().toString() + " > " + other.toString().toString()).c_str())
    )
        .as<bool>();
}

bool BigInt::operator<=(const BigInt &other) const noexcept {
    return emlite::Val::global("eval")(
               String((toString().toString() + " <= " + other.toString().toString()).c_str())
    )
        .as<bool>();
}

bool BigInt::operator>=(const BigInt &other) const noexcept {
    return emlite::Val::global("eval")(
               String((toString().toString() + " >= " + other.toString().toString()).c_str())
    )
        .as<bool>();
}

BigInt BigInt::asIntN(int width, const BigInt &bigint) noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("BigInt").call("asIntN", width, bigint).as_handle()
    );
}

BigInt BigInt::asUintN(int width, const BigInt &bigint) noexcept {
    return BigInt::take_ownership(
        emlite::Val::global("BigInt").call("asUintN", width, bigint).as_handle()
    );
}

size_t BigInt::hash() const noexcept {
    // Simple hash based on handle value (no std library)
    return static_cast<size_t>(as_handle());
}

bool BigInt::isZero() const noexcept { return *this == BigInt(static_cast<int64_t>(0)); }

bool BigInt::isPositive() const noexcept { return *this > BigInt(static_cast<int64_t>(0)); }

bool BigInt::isNegative() const noexcept { return *this < BigInt(static_cast<int64_t>(0)); }

BigInt BigInt::abs() const noexcept { return isNegative() ? -*this : *this; }

BigInt BigInt::power(const BigInt &exponent) const noexcept { return pow(exponent); }

BigInt BigInt::zero() noexcept { return BigInt(static_cast<int64_t>(0)); }

BigInt BigInt::one() noexcept { return BigInt(static_cast<int64_t>(1)); }

BigInt BigInt::minusOne() noexcept { return BigInt(static_cast<int64_t>(-1)); }

Result<BigInt, Error> BigInt::parse(const String &str) noexcept {
    return emlite::Val::global("BigInt")(str).as<Result<BigInt, Error>>();
}

// Free functions for STL compatibility
BigInt abs(const BigInt &x) noexcept { return x.abs(); }

BigInt pow(const BigInt &base, const BigInt &exp) noexcept { return base.pow(exp); }