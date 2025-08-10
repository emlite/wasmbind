#include "webbind/BaseComputedKeyframe.hpp"

using emlite::Val;
namespace webbind {

BaseComputedKeyframe::BaseComputedKeyframe(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BaseComputedKeyframe BaseComputedKeyframe::take_ownership(Handle h) noexcept {
        return BaseComputedKeyframe(h);
    }
BaseComputedKeyframe::BaseComputedKeyframe(const emlite::Val &val) noexcept: emlite::Val(val) {}
BaseComputedKeyframe::BaseComputedKeyframe() noexcept: emlite::Val(emlite::Val::object()) {}
BaseComputedKeyframe BaseComputedKeyframe::clone() const noexcept { return *this; }

double BaseComputedKeyframe::offset() const {
    return emlite::Val::get("offset").as<double>();
}

void BaseComputedKeyframe::offset(double value) {
    emlite::Val::set("offset", value);
}

double BaseComputedKeyframe::computedOffset() const {
    return emlite::Val::get("computedOffset").as<double>();
}

void BaseComputedKeyframe::computedOffset(double value) {
    emlite::Val::set("computedOffset", value);
}

jsbind::String BaseComputedKeyframe::easing() const {
    return emlite::Val::get("easing").as<jsbind::String>();
}

void BaseComputedKeyframe::easing(const jsbind::String& value) {
    emlite::Val::set("easing", value);
}

CompositeOperationOrAuto BaseComputedKeyframe::composite() const {
    return emlite::Val::get("composite").as<CompositeOperationOrAuto>();
}

void BaseComputedKeyframe::composite(const CompositeOperationOrAuto& value) {
    emlite::Val::set("composite", value);
}


} // namespace webbind