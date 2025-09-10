#include <jsbind/BigInt.hpp>
#include <jsbind/Number.hpp>

using namespace jsbind;

Number::Number(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Number Number::take_ownership(Handle h) noexcept { return Number(h); }

Number::Number(const emlite::Val &val) noexcept : emlite::Val(val) {}

Number Number::from(double value) noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val(value));
    return num;
}

Number Number::from(float value) noexcept {
    return from(static_cast<double>(value));
}

Number Number::from(int32_t value) noexcept {
    return from(static_cast<double>(value));
}

Number Number::from(uint32_t value) noexcept {
    return from(static_cast<double>(value));
}

Number Number::from(int64_t value) noexcept {
    return from(static_cast<double>(value));
}

Number Number::from(uint64_t value) noexcept {
    return from(static_cast<double>(value));
}

Number::Number() noexcept : emlite::Val(0.0) {}

emlite::Val Number::instance() noexcept { return emlite::Val::global("Number"); }

Number Number::clone() const noexcept { return *this; }

bool Number::isNaN() const noexcept {
    return emlite::Val::global("Number").call("isNaN", *this).as<bool>();
}

bool Number::isFinite() const noexcept {
    return emlite::Val::global("Number").call("isFinite", *this).as<bool>();
}

bool Number::isInteger() const noexcept {
    return emlite::Val::global("Number").call("isInteger", *this).as<bool>();
}

bool Number::isSafeInteger() const noexcept {
    return emlite::Val::global("Number").call("isSafeInteger", *this).as<bool>();
}

Result<double, Error> Number::toDouble() const noexcept {
    if (isNaN()) {
        return err<double, Error>(Error("Value is NaN"));
    }
    if (!isFinite()) {
        return err<double, Error>(Error("Value is not finite"));
    }
    return ok<double, Error>(this->as<double>());
}

Result<float, Error> Number::toFloat() const noexcept {
    auto double_result = toDouble();
    if (!double_result.has_value()) {
        return err<float, Error>(Error(double_result.error()));
    }
    
    double val = double_result.unwrap();
    constexpr double float_max = 3.4028235e+38;
    if (val > float_max || val < -float_max) {
        return err<float, Error>(Error("Value out of float range"));
    }
    
    return ok<float, Error>(static_cast<float>(val));
}

Result<int32_t, Error> Number::toInt32() const noexcept {
    auto double_result = toDouble();
    if (!double_result.has_value()) {
        return err<int32_t, Error>(Error(double_result.error()));
    }
    
    double val = double_result.unwrap();
    constexpr double int32_min = -2147483648.0;
    constexpr double int32_max = 2147483647.0;
    if (!isInRange(int32_min, int32_max)) {
        return err<int32_t, Error>(Error("Value out of int32_t range"));
    }
    
    return ok<int32_t, Error>(static_cast<int32_t>(val));
}

Result<uint32_t, Error> Number::toUint32() const noexcept {
    auto double_result = toDouble();
    if (!double_result.has_value()) {
        return err<uint32_t, Error>(Error(double_result.error()));
    }
    
    double val = double_result.unwrap();
    constexpr double uint32_max = 4294967295.0;
    if (val < 0 || val > uint32_max) {
        return err<uint32_t, Error>(Error("Value out of uint32_t range"));
    }
    
    return ok<uint32_t, Error>(static_cast<uint32_t>(val));
}

Result<int64_t, Error> Number::toInt64() const noexcept {
    auto double_result = toDouble();
    if (!double_result.has_value()) {
        return err<int64_t, Error>(Error(double_result.error()));
    }
    
    if (!fitsInInt64()) {
        return err<int64_t, Error>(Error("Value out of int64_t range or not safe integer"));
    }
    
    return ok<int64_t, Error>(static_cast<int64_t>(double_result.unwrap()));
}

Result<uint64_t, Error> Number::toUint64() const noexcept {
    auto double_result = toDouble();
    if (!double_result.has_value()) {
        return err<uint64_t, Error>(Error(double_result.error()));
    }
    
    if (!fitsInUint64()) {
        return err<uint64_t, Error>(Error("Value out of uint64_t range or not safe integer"));
    }
    
    return ok<uint64_t, Error>(static_cast<uint64_t>(double_result.unwrap()));
}

// Math operations
Number Number::abs() const noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Math").call("abs", *this));
    return num;
}

Number Number::floor() const noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Math").call("floor", *this));
    return num;
}

Number Number::ceil() const noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Math").call("ceil", *this));
    return num;
}

Number Number::round() const noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Math").call("round", *this));
    return num;
}

Number Number::trunc() const noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Math").call("trunc", *this));
    return num;
}

// String conversion
String Number::toString(int radix) const noexcept {
    if (radix == 10) {
        return String(this->call("toString"));
    }
    return String(this->call("toString", radix));
}

String Number::valueOf() const noexcept {
    return String(this->call("valueOf"));
}

String Number::toLocaleString() const noexcept {
    return String(this->call("toLocaleString"));
}

String Number::toExponential(int fractionDigits) const noexcept {
    if (fractionDigits == -1) {
        return String(this->call("toExponential"));
    }
    return String(this->call("toExponential", fractionDigits));
}

String Number::toFixed(int digits) const noexcept {
    return String(this->call("toFixed", digits));
}

String Number::toPrecision(int precision) const noexcept {
    if (precision == -1) {
        return String(this->call("toPrecision"));
    }
    return String(this->call("toPrecision", precision));
}

// BigInt conversion
Result<BigInt, Error> Number::toBigInt() const noexcept {
    if (!isInteger()) {
        return err<BigInt, Error>(Error("Cannot convert non-integer to BigInt"));
    }
    if (!isFinite()) {
        return err<BigInt, Error>(Error("Cannot convert non-finite value to BigInt"));
    }
    return emlite::Val::global("BigInt")(*this).as<Result<BigInt, Error>>();
}

Number Number::fromBigInt(const BigInt &bigint) noexcept {
    Number num = emlite::Val::global("Number")(bigint).as<Number>();
    return num;
}

// Range checking
bool Number::fitsInInt64() const noexcept {
    if (!isInteger() || !isFinite()) {
        return false;
    }
    
    double val = this->as<double>();
    constexpr double int64_min = -9223372036854775808.0;
    constexpr double int64_max = 9223372036854775807.0;
    return val >= int64_min && val <= int64_max && isSafeInteger();
}

bool Number::fitsInUint64() const noexcept {
    if (!isInteger() || !isFinite()) {
        return false;
    }
    
    double val = this->as<double>();
    constexpr double uint64_max = 18446744073709551615.0;
    return val >= 0.0 && val <= uint64_max && isSafeInteger();
}

// Static utility methods
Result<Number, Error> Number::parse(const String &str) noexcept {
    auto result = emlite::Val::global("Number")(str);
    Number num(result);
    if (num.isNaN()) {
        return err<Number, Error>(Error("Failed to parse number from string"));
    }
    auto number = num.as<Number>();
    return ok<Number, Error>(emlite::detail::move(number));
}

Result<Number, Error> Number::parseFloat(const String &str) noexcept {
    auto result = emlite::Val::global("parseFloat").call("parseFloat", str);
    Number num(result);
    if (num.isNaN()) {
        return err<Number, Error>(Error("Failed to parse float from string"));
    }
    Number number;
    number.emlite::Val::operator=(num);
    return ok<Number, Error>(emlite::detail::move(number));
}

Result<Number, Error> Number::parseInt(const String &str, int radix) noexcept {
    auto result = emlite::Val::global("parseInt").call("parseInt", str, radix);
    Number num(result);
    if (num.isNaN()) {
        return err<Number, Error>(Error("Failed to parse integer from string"));
    }
    Number number;
    number.emlite::Val::operator=(num);
    return ok<Number, Error>(emlite::detail::move(number));
}

// Global helpers mirroring JavaScript parseFloat/parseInt returning Result
Result<Number, Error> jsbind::parseFloat(const String &str) noexcept { return Number::parseFloat(str); }

Result<Number, Error> jsbind::parseInt(const String &str, int radix) noexcept {
    return Number::parseInt(str, radix);
}

// Constants
Number Number::epsilon() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("EPSILON"));
    return num;
}

Number Number::maxValue() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("MAX_VALUE"));
    return num;
}

Number Number::minValue() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("MIN_VALUE"));
    return num;
}

Number Number::maxSafeInteger() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("MAX_SAFE_INTEGER"));
    return num;
}

Number Number::minSafeInteger() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("MIN_SAFE_INTEGER"));
    return num;
}

Number Number::positiveInfinity() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("POSITIVE_INFINITY"));
    return num;
}

Number Number::negativeInfinity() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("NEGATIVE_INFINITY"));
    return num;
}

Number Number::nan() noexcept {
    Number num;
    num.emlite::Val::operator=(emlite::Val::global("Number").get("NaN"));
    return num;
}

// Private helper
bool Number::isInRange(double min, double max) const noexcept {
    double val = this->as<double>();
    return val >= min && val <= max;
}

bool jsbind::isNaN(const Number &num) noexcept {
    return num.isNaN();
}

bool jsbind::isFinite(const Number &num) noexcept {
    return num.isFinite();
}
