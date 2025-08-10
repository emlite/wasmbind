#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class XRReferenceSpaceEventInit;
class XRReferenceSpace;
class XRRigidTransform;

/// Interface XRReferenceSpaceEvent
/// [`XRReferenceSpaceEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent)
class XRReferenceSpaceEvent : public Event {
    explicit XRReferenceSpaceEvent(Handle h) noexcept;
public:
    explicit XRReferenceSpaceEvent(const emlite::Val &val) noexcept;
    static XRReferenceSpaceEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReferenceSpaceEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRReferenceSpaceEvent(..)` constructor, creating a new XRReferenceSpaceEvent instance
    XRReferenceSpaceEvent(const jsbind::String& type, const XRReferenceSpaceEventInit& eventInitDict);
    /// [`XRReferenceSpaceEvent.referenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/referenceSpace)
    /// [`XRReferenceSpaceEvent.referenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/referenceSpace)
    [[nodiscard]] XRReferenceSpace referenceSpace() const;
    /// [`XRReferenceSpaceEvent.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/transform)
    /// [`XRReferenceSpaceEvent.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

} // namespace webbind