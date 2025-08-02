#include <webbind/CSSOKLab.hpp>


CSSOKLab CSSOKLab::take_ownership(Handle h) noexcept {
        return CSSOKLab(h);
    }
CSSOKLab CSSOKLab::clone() const noexcept { return *this; }
emlite::Val CSSOKLab::instance() noexcept { return emlite::Val::global("CSSOKLab"); }
CSSOKLab::CSSOKLab(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSOKLab::CSSOKLab(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSOKLab::CSSOKLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b) : CSSColorValue(emlite::Val::global("CSSOKLab").new_(l, a, b)) {}

CSSOKLab::CSSOKLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha) : CSSColorValue(emlite::Val::global("CSSOKLab").new_(l, a, b, alpha)) {}

jsbind::Any CSSOKLab::l() const {
    return CSSColorValue::get("l").as<jsbind::Any>();
}

void CSSOKLab::l(const jsbind::Any& value) {
    CSSColorValue::set("l", value);
}

jsbind::Any CSSOKLab::a() const {
    return CSSColorValue::get("a").as<jsbind::Any>();
}

void CSSOKLab::a(const jsbind::Any& value) {
    CSSColorValue::set("a", value);
}

jsbind::Any CSSOKLab::b() const {
    return CSSColorValue::get("b").as<jsbind::Any>();
}

void CSSOKLab::b(const jsbind::Any& value) {
    CSSColorValue::set("b", value);
}

jsbind::Any CSSOKLab::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSOKLab::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

