#include <webbind/XRLayerEvent.hpp>
#include <webbind/XRLayer.hpp>


XRLayerEvent XRLayerEvent::take_ownership(Handle h) noexcept {
        return XRLayerEvent(h);
    }
XRLayerEvent XRLayerEvent::clone() const noexcept { return *this; }
XRLayerEvent::XRLayerEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRLayerEvent::XRLayerEvent(const emlite::Val &val) noexcept: Event(val) {}


XRLayerEvent::XRLayerEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("XRLayerEvent").new_(type, eventInitDict)) {}

XRLayer XRLayerEvent::layer() const {
    return Event::get("layer").as<XRLayer>();
}

