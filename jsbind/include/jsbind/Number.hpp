#pragma once

#include "Error.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class BigInt;

/// Wrapper for JavaScript Number objects
///
/// Number provides type-safe numeric conversions and validation operations,
/// corresponding to JavaScript's Number type. It handles NaN, infinity,
/// and range checking for safe conversions to native C++ numeric types.
class Number : public emlite::Val {
    explicit Number(Handle h) noexcept;

  public:
    /// Creates Number from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Number wrapper object
    static Number take_ownership(Handle h) noexcept;

    /// Creates Number from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit Number(const emlite::Val &val) noexcept;

    /// Creates Number(0)
    Number() noexcept;

    // Static factory methods for type-safe construction
    /// Creates Number from double value
    /// @param value double precision floating point value
    /// @returns Number representing the value
    static Number from(double value) noexcept;

    /// Creates Number from float value
    /// @param value single precision floating point value
    /// @returns Number representing the value
    static Number from(float value) noexcept;

    /// Creates Number from signed 32-bit integer
    /// @param value signed integer value
    /// @returns Number representing the value
    static Number from(int32_t value) noexcept;

    /// Creates Number from unsigned 32-bit integer
    /// @param value unsigned integer value
    /// @returns Number representing the value
    static Number from(uint32_t value) noexcept;

    /// Creates Number from signed 64-bit integer
    /// @param value signed long integer value
    /// @returns Number representing the value
    static Number from(int64_t value) noexcept;

    /// Creates Number from unsigned 64-bit integer
    /// @param value unsigned long integer value
    /// @returns Number representing the value
    static Number from(uint64_t value) noexcept;

    /// Gets the Number constructor function
    /// @returns emlite::Val representing the Number constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this Number
    /// @returns cloned Number
    [[nodiscard]] Number clone() const noexcept;

    // Validation methods
    /// Checks if value is NaN
    /// @returns true if value is Not-a-Number
    [[nodiscard]] bool isNaN() const noexcept;

    /// Checks if value is finite (not NaN, not ±infinity)
    /// @returns true if value is finite
    [[nodiscard]] bool isFinite() const noexcept;

    /// Checks if value is an integer
    /// @returns true if value is an integer
    [[nodiscard]] bool isInteger() const noexcept;

    /// Checks if value is a safe integer (within Number.MAX_SAFE_INTEGER)
    /// @returns true if value is a safe integer
    [[nodiscard]] bool isSafeInteger() const noexcept;

    // Safe conversion methods with error handling
    /// Converts to double with validation
    /// @returns Result containing double value or Error
    [[nodiscard]] Result<double, Error> toDouble() const noexcept;

    /// Converts to float with validation
    /// @returns Result containing float value or Error
    [[nodiscard]] Result<float, Error> toFloat() const noexcept;

    /// Converts to signed 32-bit integer with validation
    /// @returns Result containing int32_t value or Error
    [[nodiscard]] Result<int32_t, Error> toInt32() const noexcept;

    /// Converts to unsigned 32-bit integer with validation
    /// @returns Result containing uint32_t value or Error
    [[nodiscard]] Result<uint32_t, Error> toUint32() const noexcept;

    /// Converts to signed 64-bit integer with validation
    /// @returns Result containing int64_t value or Error
    [[nodiscard]] Result<int64_t, Error> toInt64() const noexcept;

    /// Converts to unsigned 64-bit integer with validation
    /// @returns Result containing uint64_t value or Error
    [[nodiscard]] Result<uint64_t, Error> toUint64() const noexcept;

    // Math operations
    /// Gets absolute value
    /// @returns absolute value as new Number
    [[nodiscard]] Number abs() const noexcept;

    /// Rounds down to nearest integer
    /// @returns floor value as new Number
    [[nodiscard]] Number floor() const noexcept;

    /// Rounds up to nearest integer
    /// @returns ceiling value as new Number
    [[nodiscard]] Number ceil() const noexcept;

    /// Rounds to nearest integer
    /// @returns rounded value as new Number
    [[nodiscard]] Number round() const noexcept;

    /// Truncates to integer (removes fractional part)
    /// @returns truncated value as new Number
    [[nodiscard]] Number trunc() const noexcept;

    // String conversion
    /// Converts Number to string with specified radix
    /// @param radix base for string conversion (2-36, default 10)
    /// @returns string representation
    [[nodiscard]] String toString(int radix = 10) const noexcept;

    /// Gets primitive number value as string
    /// @returns string representation
    [[nodiscard]] String valueOf() const noexcept;

    /// Converts to locale-specific string
    /// @returns locale string representation
    [[nodiscard]] String toLocaleString() const noexcept;

    /// Converts to exponential notation
    /// @param fractionDigits number of digits after decimal point
    /// @returns exponential string representation
    [[nodiscard]] String toExponential(int fractionDigits = -1) const noexcept;

    /// Converts to fixed-point notation
    /// @param digits number of digits after decimal point
    /// @returns fixed-point string representation
    [[nodiscard]] String toFixed(int digits = 0) const noexcept;

    /// Converts to precision notation
    /// @param precision number of significant digits
    /// @returns precision string representation
    [[nodiscard]] String toPrecision(int precision = -1) const noexcept;

    // BigInt conversion
    /// Converts to BigInt with validation
    /// @returns Result containing BigInt value or Error
    [[nodiscard]] Result<BigInt, Error> toBigInt() const noexcept;

    /// Creates Number from BigInt (may lose precision)
    /// @param bigint BigInt to convert
    /// @returns Number representing BigInt value
    static Number fromBigInt(const BigInt &bigint) noexcept;

    // Range checking for typed arrays
    /// Checks if value fits in signed 64-bit integer range
    /// @returns true if value can be safely converted to int64_t
    [[nodiscard]] bool fitsInInt64() const noexcept;

    /// Checks if value fits in unsigned 64-bit integer range
    /// @returns true if value can be safely converted to uint64_t
    [[nodiscard]] bool fitsInUint64() const noexcept;

    // Static utility methods
    /// Parses Number from string with error checking
    /// @param str string to parse
    /// @returns Result containing Number or Error
    static Result<Number, Error> parse(const String &str) noexcept;

    /// Parses floating point number from string
    /// @param str string to parse
    /// @returns Result containing Number or Error
    static Result<Number, Error> parseFloat(const String &str) noexcept;

    /// Parses integer from string with radix
    /// @param str string to parse
    /// @param radix number base (2-36, default 10)
    /// @returns Result containing Number or Error
    static Result<Number, Error> parseInt(const String &str, int radix = 10) noexcept;

    // Constants
    /// Gets Number.EPSILON
    /// @returns smallest representable positive number
    static Number epsilon() noexcept;

    /// Gets Number.MAX_VALUE
    /// @returns largest representable positive number
    static Number maxValue() noexcept;

    /// Gets Number.MIN_VALUE
    /// @returns smallest representable positive number
    static Number minValue() noexcept;

    /// Gets Number.MAX_SAFE_INTEGER
    /// @returns largest safe integer
    static Number maxSafeInteger() noexcept;

    /// Gets Number.MIN_SAFE_INTEGER
    /// @returns smallest safe integer
    static Number minSafeInteger() noexcept;

    /// Gets Number.POSITIVE_INFINITY
    /// @returns positive infinity
    static Number positiveInfinity() noexcept;

    /// Gets Number.NEGATIVE_INFINITY
    /// @returns negative infinity
    static Number negativeInfinity() noexcept;

    /// Gets Number.NaN
    /// @returns Not-a-Number value
    static Number nan() noexcept;

  private:
    /// Helper to check if value is within range for integer conversion
    /// @param min minimum allowed value
    /// @param max maximum allowed value
    /// @returns true if value is within range
    [[nodiscard]] bool isInRange(double min, double max) const noexcept;
};

/// Global functions matching JavaScript Number functions
/// Checks if value is NaN
/// @param num Number to check
/// @returns true if value is NaN
bool isNaN(const Number &num) noexcept;

/// Checks if value is finite
/// @param num Number to check
/// @returns true if value is finite
bool isFinite(const Number &num) noexcept;

/// Parses floating point number from string
/// @param str string to parse
/// @returns Result containing Number or Error
Result<Number, Error> parseFloat(const String &str) noexcept;

/// Parses integer from string with radix
/// @param str string to parse
/// @param radix number base (2-36, default 10)
/// @returns Result containing Number or Error
Result<Number, Error> parseInt(const String &str, int radix = 10) noexcept;

} // namespace jsbind
