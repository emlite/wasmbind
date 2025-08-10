#include <webbind/SFrameTransformErrorEventInit.hpp>

namespace webbind {

SFrameTransformErrorEventInit::SFrameTransformErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SFrameTransformErrorEventInit SFrameTransformErrorEventInit::take_ownership(Handle h) noexcept {
    return SFrameTransformErrorEventInit(h);
}

SFrameTransformErrorEventInit::SFrameTransformErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

SFrameTransformErrorEventInit::SFrameTransformErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}

SFrameTransformErrorEventInit SFrameTransformErrorEventInit::clone() const noexcept { return *this; }

SFrameTransformErrorEventType SFrameTransformErrorEventInit::errorType() const {
    return emlite::Val::get("errorType").as<SFrameTransformErrorEventType>();
}

void SFrameTransformErrorEventInit::errorType(const SFrameTransformErrorEventType& value) {
    emlite::Val::set("errorType", value);
}

jsbind::Any SFrameTransformErrorEventInit::frame() const {
    return emlite::Val::get("frame").as<jsbind::Any>();
}

void SFrameTransformErrorEventInit::frame(const jsbind::Any& value) {
    emlite::Val::set("frame", value);
}

jsbind::Any SFrameTransformErrorEventInit::keyID() const {
    return emlite::Val::get("keyID").as<jsbind::Any>();
}

void SFrameTransformErrorEventInit::keyID(const jsbind::Any& value) {
    emlite::Val::set("keyID", value);
}


} // namespace webbind