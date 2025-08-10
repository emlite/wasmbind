#include <webbind/XRInputSourcesChangeEventInit.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRInputSource.hpp>

namespace webbind {

XRInputSourcesChangeEventInit::XRInputSourcesChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit::take_ownership(Handle h) noexcept {
    return XRInputSourcesChangeEventInit(h);
}

XRInputSourcesChangeEventInit::XRInputSourcesChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

XRInputSourcesChangeEventInit::XRInputSourcesChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}

XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit::clone() const noexcept { return *this; }

XRSession XRInputSourcesChangeEventInit::session() const {
    return emlite::Val::get("session").as<XRSession>();
}

void XRInputSourcesChangeEventInit::session(const XRSession& value) {
    emlite::Val::set("session", value);
}

jsbind::TypedArray<XRInputSource> XRInputSourcesChangeEventInit::added() const {
    return emlite::Val::get("added").as<jsbind::TypedArray<XRInputSource>>();
}

void XRInputSourcesChangeEventInit::added(const jsbind::TypedArray<XRInputSource>& value) {
    emlite::Val::set("added", value);
}

jsbind::TypedArray<XRInputSource> XRInputSourcesChangeEventInit::removed() const {
    return emlite::Val::get("removed").as<jsbind::TypedArray<XRInputSource>>();
}

void XRInputSourcesChangeEventInit::removed(const jsbind::TypedArray<XRInputSource>& value) {
    emlite::Val::set("removed", value);
}


} // namespace webbind