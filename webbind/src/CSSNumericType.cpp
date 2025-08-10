#include "webbind/CSSNumericType.hpp"

using emlite::Val;
namespace webbind {

CSSNumericType::CSSNumericType(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSNumericType CSSNumericType::take_ownership(Handle h) noexcept {
        return CSSNumericType(h);
    }
CSSNumericType::CSSNumericType(const emlite::Val &val) noexcept: emlite::Val(val) {}
CSSNumericType::CSSNumericType() noexcept: emlite::Val(emlite::Val::object()) {}
CSSNumericType CSSNumericType::clone() const noexcept { return *this; }

long CSSNumericType::length() const {
    return emlite::Val::get("length").as<long>();
}

void CSSNumericType::length(long value) {
    emlite::Val::set("length", value);
}

long CSSNumericType::angle() const {
    return emlite::Val::get("angle").as<long>();
}

void CSSNumericType::angle(long value) {
    emlite::Val::set("angle", value);
}

long CSSNumericType::time() const {
    return emlite::Val::get("time").as<long>();
}

void CSSNumericType::time(long value) {
    emlite::Val::set("time", value);
}

long CSSNumericType::frequency() const {
    return emlite::Val::get("frequency").as<long>();
}

void CSSNumericType::frequency(long value) {
    emlite::Val::set("frequency", value);
}

long CSSNumericType::resolution() const {
    return emlite::Val::get("resolution").as<long>();
}

void CSSNumericType::resolution(long value) {
    emlite::Val::set("resolution", value);
}

long CSSNumericType::flex() const {
    return emlite::Val::get("flex").as<long>();
}

void CSSNumericType::flex(long value) {
    emlite::Val::set("flex", value);
}

long CSSNumericType::percent() const {
    return emlite::Val::get("percent").as<long>();
}

void CSSNumericType::percent(long value) {
    emlite::Val::set("percent", value);
}

CSSNumericBaseType CSSNumericType::percentHint() const {
    return emlite::Val::get("percentHint").as<CSSNumericBaseType>();
}

void CSSNumericType::percentHint(const CSSNumericBaseType& value) {
    emlite::Val::set("percentHint", value);
}


} // namespace webbind