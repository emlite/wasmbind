#include <webbind/CaptureActionEventInit.hpp>

namespace webbind {

CaptureActionEventInit::CaptureActionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CaptureActionEventInit CaptureActionEventInit::take_ownership(Handle h) noexcept {
    return CaptureActionEventInit(h);
}

CaptureActionEventInit::CaptureActionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

CaptureActionEventInit::CaptureActionEventInit() noexcept: EventInit(emlite::Val::object()) {}

CaptureActionEventInit CaptureActionEventInit::clone() const noexcept { return *this; }

jsbind::String CaptureActionEventInit::action() const {
    return emlite::Val::get("action").as<jsbind::String>();
}

void CaptureActionEventInit::action(const jsbind::String& value) {
    emlite::Val::set("action", value);
}


} // namespace webbind