#include <webbind/BasePropertyIndexedKeyframe.hpp>

namespace webbind {

BasePropertyIndexedKeyframe::BasePropertyIndexedKeyframe(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BasePropertyIndexedKeyframe BasePropertyIndexedKeyframe::take_ownership(Handle h) noexcept {
    return BasePropertyIndexedKeyframe(h);
}

BasePropertyIndexedKeyframe::BasePropertyIndexedKeyframe(const emlite::Val &val) noexcept: emlite::Val(val) {}

BasePropertyIndexedKeyframe::BasePropertyIndexedKeyframe() noexcept: emlite::Val(emlite::Val::object()) {}

BasePropertyIndexedKeyframe BasePropertyIndexedKeyframe::clone() const noexcept { return *this; }

jsbind::Any BasePropertyIndexedKeyframe::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void BasePropertyIndexedKeyframe::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}

jsbind::Any BasePropertyIndexedKeyframe::easing() const {
    return emlite::Val::get("easing").as<jsbind::Any>();
}

void BasePropertyIndexedKeyframe::easing(const jsbind::Any& value) {
    emlite::Val::set("easing", value);
}

jsbind::Any BasePropertyIndexedKeyframe::composite() const {
    return emlite::Val::get("composite").as<jsbind::Any>();
}

void BasePropertyIndexedKeyframe::composite(const jsbind::Any& value) {
    emlite::Val::set("composite", value);
}


} // namespace webbind