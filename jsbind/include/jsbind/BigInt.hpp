#pragma once

#include "Error.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {

/// Wrapper for JavaScript BigInt objects
///
/// BigInt provides arbitrary precision integer arithmetic operations,
/// corresponding to JavaScript's BigInt type for handling integers
/// beyond the safe integer range of regular numbers.
class BigInt : public emlite::Val {
    explicit BigInt(Handle h) noexcept;

    explicit BigInt(const String &value) noexcept;

    explicit BigInt(const char *value) noexcept;

  public:
    /// Creates BigInt from a raw handle
    /// @param h raw JavaScript handle
    /// @returns BigInt wrapper object
    static BigInt take_ownership(Handle h) noexcept;

    /// Creates BigInt from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit BigInt(const emlite::Val &val) noexcept;

    /// Creates BigInt from C string
    /// @param value null-terminated string representation
    static Result<BigInt, Error> create(const char *value) noexcept;

    /// Creates BigInt from string
    /// @param value string representation of big integer
    static Result<BigInt, Error> create(const String &value) noexcept;

    /// Creates BigInt from signed integer
    /// @param value integer value (limited to safe integer range)
    explicit BigInt(int64_t value) noexcept;

    /// Creates BigInt from unsigned integer
    /// @param value unsigned integer value
    explicit BigInt(uint64_t value) noexcept;

    /// Creates BigInt(0)
    BigInt() noexcept;

    /// Gets the BigInt constructor function
    /// @returns emlite::Val representing the BigInt constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this BigInt
    /// @returns cloned BigInt
    [[nodiscard]] BigInt clone() const noexcept;

    // Conversion methods
    /// Converts BigInt to string with specified radix
    /// @param radix base for string conversion (2-36)
    /// @returns string representation
    [[nodiscard]] String toString(int radix = 10) const noexcept;

    /// Gets primitive BigInt value as string
    /// @returns string representation
    [[nodiscard]] String valueOf() const noexcept;

    /// Converts to locale-specific string
    /// @returns locale string representation
    [[nodiscard]] String toLocaleString() const noexcept;

    // Arithmetic operators
    /// Addition operator
    /// @param other BigInt to add
    /// @returns sum as new BigInt
    BigInt operator+(const BigInt &other) const noexcept;

    /// Subtraction operator
    /// @param other BigInt to subtract
    /// @returns difference as new BigInt
    BigInt operator-(const BigInt &other) const noexcept;

    /// Multiplication operator
    /// @param other BigInt to multiply
    /// @returns product as new BigInt
    BigInt operator*(const BigInt &other) const noexcept;

    /// Division operator
    /// @param other BigInt to divide by
    /// @returns quotient as new BigInt
    BigInt operator/(const BigInt &other) const noexcept;

    /// Modulo operator
    /// @param other BigInt divisor
    /// @returns remainder as new BigInt
    BigInt operator%(const BigInt &other) const noexcept;

    /// Power operation
    /// @param other BigInt exponent
    /// @returns result of base**exponent
    [[nodiscard]] BigInt pow(const BigInt &other) const noexcept;

    // Bitwise operators
    /// Bitwise AND operator
    /// @param other BigInt operand
    /// @returns AND result as new BigInt
    BigInt operator&(const BigInt &other) const noexcept;

    /// Bitwise OR operator
    /// @param other BigInt operand
    /// @returns OR result as new BigInt
    BigInt operator|(const BigInt &other) const noexcept;

    /// Bitwise XOR operator
    /// @param other BigInt operand
    /// @returns XOR result as new BigInt
    BigInt operator^(const BigInt &other) const noexcept;

    /// Left shift operator
    /// @param other BigInt shift amount
    /// @returns shifted value as new BigInt
    BigInt operator<<(const BigInt &other) const noexcept;

    /// Right shift operator
    /// @param other BigInt shift amount
    /// @returns shifted value as new BigInt
    BigInt operator>>(const BigInt &other) const noexcept;

    // Unary operators
    /// Unary minus operator
    /// @returns negated BigInt
    BigInt operator-() const noexcept;

    /// Bitwise NOT operator
    /// @returns bitwise complement as new BigInt
    BigInt operator~() const noexcept;

    // Assignment operators
    /// Addition assignment operator
    /// @param other BigInt to add
    /// @returns reference to this BigInt
    BigInt &operator+=(const BigInt &other) noexcept;

    /// Subtraction assignment operator
    /// @param other BigInt to subtract
    /// @returns reference to this BigInt
    BigInt &operator-=(const BigInt &other) noexcept;

    /// Multiplication assignment operator
    /// @param other BigInt to multiply
    /// @returns reference to this BigInt
    BigInt &operator*=(const BigInt &other) noexcept;

    /// Division assignment operator
    /// @param other BigInt to divide by
    /// @returns reference to this BigInt
    BigInt &operator/=(const BigInt &other) noexcept;

    /// Modulo assignment operator
    /// @param other BigInt divisor
    /// @returns reference to this BigInt
    BigInt &operator%=(const BigInt &other) noexcept;

    /// Bitwise AND assignment operator
    /// @param other BigInt operand
    /// @returns reference to this BigInt
    BigInt &operator&=(const BigInt &other) noexcept;

    /// Bitwise OR assignment operator
    /// @param other BigInt operand
    /// @returns reference to this BigInt
    BigInt &operator|=(const BigInt &other) noexcept;

    /// Bitwise XOR assignment operator
    /// @param other BigInt operand
    /// @returns reference to this BigInt
    BigInt &operator^=(const BigInt &other) noexcept;

    /// Left shift assignment operator
    /// @param other BigInt shift amount
    /// @returns reference to this BigInt
    BigInt &operator<<=(const BigInt &other) noexcept;

    /// Right shift assignment operator
    /// @param other BigInt shift amount
    /// @returns reference to this BigInt
    BigInt &operator>>=(const BigInt &other) noexcept;

    // Comparison operators
    /// Less than comparison
    /// @param other BigInt to compare with
    /// @returns true if this < other
    bool operator<(const BigInt &other) const noexcept;

    /// Greater than comparison
    /// @param other BigInt to compare with
    /// @returns true if this > other
    bool operator>(const BigInt &other) const noexcept;

    /// Less than or equal comparison
    /// @param other BigInt to compare with
    /// @returns true if this <= other
    bool operator<=(const BigInt &other) const noexcept;

    /// Greater than or equal comparison
    /// @param other BigInt to compare with
    /// @returns true if this >= other
    bool operator>=(const BigInt &other) const noexcept;

    // Static utility methods
    /// Returns signed n-bit BigInt value
    /// @param width bit width
    /// @param bigint input BigInt
    /// @returns n-bit signed result
    static BigInt asIntN(int width, const BigInt &bigint) noexcept;

    /// Returns unsigned n-bit BigInt value
    /// @param width bit width
    /// @param bigint input BigInt
    /// @returns n-bit unsigned result
    static BigInt asUintN(int width, const BigInt &bigint) noexcept;

    // Utility methods
    /// Gets hash code for BigInt
    /// @returns hash value
    [[nodiscard]] size_t hash() const noexcept;

    /// Checks if BigInt equals zero
    /// @returns true if value is zero
    [[nodiscard]] bool isZero() const noexcept;

    /// Checks if BigInt is positive
    /// @returns true if value is greater than zero
    [[nodiscard]] bool isPositive() const noexcept;

    /// Checks if BigInt is negative
    /// @returns true if value is less than zero
    [[nodiscard]] bool isNegative() const noexcept;

    /// Gets absolute value
    /// @returns absolute value as new BigInt
    [[nodiscard]] BigInt abs() const noexcept;

    /// Power operation (alias for pow)
    /// @param exponent BigInt exponent
    /// @returns result of base**exponent
    [[nodiscard]] BigInt power(const BigInt &exponent) const noexcept;

    // Factory methods for common values
    /// Creates BigInt(0)
    /// @returns BigInt representing zero
    static BigInt zero() noexcept;

    /// Creates BigInt(1)
    /// @returns BigInt representing one
    static BigInt one() noexcept;

    /// Creates BigInt(-1)
    /// @returns BigInt representing minus one
    static BigInt minusOne() noexcept;

    /// Parses BigInt from string with error checking
    /// @param str string to parse
    /// @returns Option containing BigInt or None if parsing failed
    static Result<BigInt, Error> parse(const String &str) noexcept;

  private:
    /// Helper to create BigInt from uint64_t
    /// @param value unsigned integer value
    /// @returns emlite::Val representing the BigInt
    static emlite::Val createFromUint64(uint64_t value);
};

/// Gets absolute value of BigInt
/// @param x BigInt value
/// @returns absolute value
BigInt abs(const BigInt &x) noexcept;

/// Raises BigInt to power
/// @param base BigInt base
/// @param exp BigInt exponent
/// @returns base raised to exp
BigInt pow(const BigInt &base, const BigInt &exp) noexcept;

} // namespace jsbind
