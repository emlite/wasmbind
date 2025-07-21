#pragma once

#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind::Math {

emlite::Val MATHOBJ();

static constexpr double E      = 2.71828182845904523536;
static constexpr double LN2    = 0.69314718055994530942;
static constexpr double LN10   = 2.30258509299404568402;
static constexpr double LOG2E  = 1.44269504088896340736;
static constexpr double LOG10E = 0.43429448190325182765;
static constexpr double PI     = 3.14159265358979323846;
static constexpr double SQRT1_2 =
    0.70710678118654752440; // 1/√2
static constexpr double SQRT2 = 1.41421356237309504880;

#define DECL_MATH_UNARY(cpp, js) double cpp(double x);

/// `Math.abs`
DECL_MATH_UNARY(abs, "abs")
/// `Math.acos`
DECL_MATH_UNARY(acos, "acos")
/// `Math.acosh`
DECL_MATH_UNARY(acosh, "acosh")
/// `Math.asin`
DECL_MATH_UNARY(asin, "asin")
/// `Math.asinh`
DECL_MATH_UNARY(asinh, "asinh")
/// `Math.atan`
DECL_MATH_UNARY(atan, "atan")
/// `Math.atanh`
DECL_MATH_UNARY(atanh, "atanh")
/// `Math.cbrt`
DECL_MATH_UNARY(cbrt, "cbrt")
/// `Math.ceil`
DECL_MATH_UNARY(ceil, "ceil")
/// `Math.clz32`
DECL_MATH_UNARY(clz32, "clz32")
/// `Math.cos`
DECL_MATH_UNARY(cos, "cos")
/// `Math.cosh`
DECL_MATH_UNARY(cosh, "cosh")
/// `Math.exp`
DECL_MATH_UNARY(exp, "exp")
/// `Math.expm1`
DECL_MATH_UNARY(expm1, "expm1")
/// `Math.floor`
DECL_MATH_UNARY(floor, "floor")
/// `Math.fround`
DECL_MATH_UNARY(fround, "fround")
/// `Math.log`
DECL_MATH_UNARY(log, "log")
/// `Math.log1p`
DECL_MATH_UNARY(log1p, "log1p")
/// `Math.log2`
DECL_MATH_UNARY(log2, "log2")
/// `Math.log10`
DECL_MATH_UNARY(log10, "log10")
/// `Math.round`
DECL_MATH_UNARY(round, "round")
/// `Math.sign`
DECL_MATH_UNARY(sign, "sign")
/// `Math.sin`
DECL_MATH_UNARY(sin, "sin")
/// `Math.sinh`
DECL_MATH_UNARY(sinh, "sinh")
/// `Math.sqrt`
DECL_MATH_UNARY(sqrt, "sqrt")
/// `Math.tan`
DECL_MATH_UNARY(tan, "tan")
/// `Math.tanh`
DECL_MATH_UNARY(tanh, "tanh")
/// `Math.trunc`
DECL_MATH_UNARY(trunc, "trunc")

#undef DECL_MATH_UNARY

double atan2(double y, double x);

double pow(double x, double y);

int32_t imul(int32_t a, int32_t b);

double max();

double min();

double hypot();

double random();

template <typename... Rest>
double max(double first, Rest... rest) {
    return MATHOBJ()
        .call(
            "max", emlite::Val(first), emlite::Val(rest)...
        )
        .template as<double>();
}

template <typename... Rest>
double min(double first, Rest... rest) {
    return MATHOBJ()
        .call(
            "min", emlite::Val(first), emlite::Val(rest)...
        )
        .template as<double>();
}

template <typename... Rest>
double hypot(double first, Rest... rest) {
    return MATHOBJ()
        .call(
            "hypot",
            emlite::Val(first),
            emlite::Val(rest)...
        )
        .template as<double>();
}

} // namespace jsbind::Math