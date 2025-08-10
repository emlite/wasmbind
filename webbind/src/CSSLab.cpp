#include "webbind/CSSLab.hpp"

namespace webbind {

CSSLab CSSLab::take_ownership(Handle h) noexcept {
        return CSSLab(h);
    }
CSSLab CSSLab::clone() const noexcept { return *this; }
emlite::Val CSSLab::instance() noexcept { return emlite::Val::global("CSSLab"); }
CSSLab::CSSLab(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSLab::CSSLab(const emlite::Val &val) noexcept: CSSColorValue(val) {}

CSSLab::CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b) : CSSColorValue(emlite::Val::global("CSSLab").new_(l, a, b)) {}

CSSLab::CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha) : CSSColorValue(emlite::Val::global("CSSLab").new_(l, a, b, alpha)) {}

jsbind::Any CSSLab::l() const {
    return CSSColorValue::get("l").as<jsbind::Any>();
}

void CSSLab::l(const jsbind::Any& value) {
    CSSColorValue::set("l", value);
}

jsbind::Any CSSLab::a() const {
    return CSSColorValue::get("a").as<jsbind::Any>();
}

void CSSLab::a(const jsbind::Any& value) {
    CSSColorValue::set("a", value);
}

jsbind::Any CSSLab::b() const {
    return CSSColorValue::get("b").as<jsbind::Any>();
}

void CSSLab::b(const jsbind::Any& value) {
    CSSColorValue::set("b", value);
}

jsbind::Any CSSLab::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSLab::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}


} // namespace webbind