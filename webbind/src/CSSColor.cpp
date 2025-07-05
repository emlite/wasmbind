#include <webbind/CSSColor.hpp>


CSSColor CSSColor::take_ownership(Handle h) noexcept {
        return CSSColor(h);
    }
CSSColor CSSColor::clone() const noexcept { return *this; }
CSSColor::CSSColor(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSColor::CSSColor(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSColor::CSSColor(const jsbind::Any& colorSpace, const jsbind::Sequence<jsbind::Any>& channels) : CSSColorValue(emlite::Val::global("CSSColor").new_(colorSpace, channels)) {}

CSSColor::CSSColor(const jsbind::Any& colorSpace, const jsbind::Sequence<jsbind::Any>& channels, const jsbind::Any& alpha) : CSSColorValue(emlite::Val::global("CSSColor").new_(colorSpace, channels, alpha)) {}

jsbind::Any CSSColor::colorSpace() const {
    return CSSColorValue::get("colorSpace").as<jsbind::Any>();
}

void CSSColor::colorSpace(const jsbind::Any& value) {
    CSSColorValue::set("colorSpace", value);
}

jsbind::ObservableArray<jsbind::Any> CSSColor::channels() const {
    return CSSColorValue::get("channels").as<jsbind::ObservableArray<jsbind::Any>>();
}

void CSSColor::channels(const jsbind::ObservableArray<jsbind::Any>& value) {
    CSSColorValue::set("channels", value);
}

jsbind::Any CSSColor::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSColor::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

