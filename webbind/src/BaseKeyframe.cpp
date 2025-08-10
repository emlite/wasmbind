#include <webbind/BaseKeyframe.hpp>

using emlite::Val;
namespace webbind {

BaseKeyframe::BaseKeyframe(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BaseKeyframe BaseKeyframe::take_ownership(Handle h) noexcept {
        return BaseKeyframe(h);
    }
BaseKeyframe::BaseKeyframe(const emlite::Val &val) noexcept: emlite::Val(val) {}
BaseKeyframe::BaseKeyframe() noexcept: emlite::Val(emlite::Val::object()) {}
BaseKeyframe BaseKeyframe::clone() const noexcept { return *this; }

double BaseKeyframe::offset() const {
    return emlite::Val::get("offset").as<double>();
}

void BaseKeyframe::offset(double value) {
    emlite::Val::set("offset", value);
}

jsbind::String BaseKeyframe::easing() const {
    return emlite::Val::get("easing").as<jsbind::String>();
}

void BaseKeyframe::easing(const jsbind::String& value) {
    emlite::Val::set("easing", value);
}

CompositeOperationOrAuto BaseKeyframe::composite() const {
    return emlite::Val::get("composite").as<CompositeOperationOrAuto>();
}

void BaseKeyframe::composite(const CompositeOperationOrAuto& value) {
    emlite::Val::set("composite", value);
}


} // namespace webbind