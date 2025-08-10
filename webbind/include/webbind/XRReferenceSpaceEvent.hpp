#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "XRReferenceSpaceEventInit.hpp"

namespace webbind {

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
    /// Getter of the `referenceSpace` attribute.
    /// [`XRReferenceSpaceEvent.referenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/referenceSpace)
    [[nodiscard]] XRReferenceSpace referenceSpace() const;
    /// Getter of the `transform` attribute.
    /// [`XRReferenceSpaceEvent.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

} // namespace webbind