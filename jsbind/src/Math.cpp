#include <jsbind/Math.hpp>

using namespace jsbind;

emlite::Val MATHOBJ() { return emlite::Val::global("Math"); }

#define DEF_MATH_UNARY(cpp, js)                                                                    \
    double Math::cpp(double x) { return MATHOBJ().call(js, x).template as<double>(); }

DEF_MATH_UNARY(abs, "abs")
DEF_MATH_UNARY(acos, "acos")
DEF_MATH_UNARY(acosh, "acosh")
DEF_MATH_UNARY(asin, "asin")
DEF_MATH_UNARY(asinh, "asinh")
DEF_MATH_UNARY(atan, "atan")
DEF_MATH_UNARY(atanh, "atanh")
DEF_MATH_UNARY(cbrt, "cbrt")
DEF_MATH_UNARY(ceil, "ceil")
DEF_MATH_UNARY(clz32, "clz32")
DEF_MATH_UNARY(cos, "cos")
DEF_MATH_UNARY(cosh, "cosh")
DEF_MATH_UNARY(exp, "exp")
DEF_MATH_UNARY(expm1, "expm1")
DEF_MATH_UNARY(floor, "floor")
DEF_MATH_UNARY(fround, "fround")
DEF_MATH_UNARY(log, "log")
DEF_MATH_UNARY(log1p, "log1p")
DEF_MATH_UNARY(log2, "log2")
DEF_MATH_UNARY(log10, "log10")
DEF_MATH_UNARY(round, "round")
DEF_MATH_UNARY(sign, "sign")
DEF_MATH_UNARY(sin, "sin")
DEF_MATH_UNARY(sinh, "sinh")
DEF_MATH_UNARY(sqrt, "sqrt")
DEF_MATH_UNARY(tan, "tan")
DEF_MATH_UNARY(tanh, "tanh")
DEF_MATH_UNARY(trunc, "trunc")

#undef DEF_MATH_UNARY

double Math::atan2(double y, double x) {
    return MATHOBJ().call("atan2", emlite::Val(y), emlite::Val(x)).template as<double>();
}

double Math::pow(double x, double y) {
    return MATHOBJ().call("pow", emlite::Val(x), emlite::Val(y)).template as<double>();
}

int32_t Math::imul(int32_t a, int32_t b) {
    return MATHOBJ().call("imul", emlite::Val(a), emlite::Val(b)).template as<int32_t>();
}

double Math::max() { return MATHOBJ().call("max").template as<double>(); }
double Math::min() { return MATHOBJ().call("min").template as<double>(); }
double Math::hypot() { return MATHOBJ().call("hypot").template as<double>(); }

double Math::random() { return MATHOBJ().call("random").template as<double>(); }