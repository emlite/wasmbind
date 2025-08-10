#include <webbind/XRReferenceSpaceEvent.hpp>
#include <webbind/XRReferenceSpaceEventInit.hpp>
#include <webbind/XRReferenceSpace.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRReferenceSpaceEvent XRReferenceSpaceEvent::take_ownership(Handle h) noexcept {
    return XRReferenceSpaceEvent(h);
}

XRReferenceSpaceEvent XRReferenceSpaceEvent::clone() const noexcept { return *this; }

emlite::Val XRReferenceSpaceEvent::instance() noexcept { return emlite::Val::global("XRReferenceSpaceEvent"); }

XRReferenceSpaceEvent::XRReferenceSpaceEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

XRReferenceSpaceEvent::XRReferenceSpaceEvent(const emlite::Val &val) noexcept: Event(val) {}

XRReferenceSpaceEvent::XRReferenceSpaceEvent(const jsbind::String& type, const XRReferenceSpaceEventInit& eventInitDict) : Event(emlite::Val::global("XRReferenceSpaceEvent").new_(type, eventInitDict)) {}

XRReferenceSpace XRReferenceSpaceEvent::referenceSpace() const {
    return Event::get("referenceSpace").as<XRReferenceSpace>();
}

XRRigidTransform XRReferenceSpaceEvent::transform() const {
    return Event::get("transform").as<XRRigidTransform>();
}


} // namespace webbind