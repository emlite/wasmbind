#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRReferenceSpace;
class XRRigidTransform;


class XRReferenceSpaceEvent : public Event {
    explicit XRReferenceSpaceEvent(Handle h) noexcept;

public:
    explicit XRReferenceSpaceEvent(const emlite::Val &val) noexcept;
    static XRReferenceSpaceEvent take_ownership(Handle h) noexcept;

    XRReferenceSpaceEvent clone() const noexcept;
    XRReferenceSpaceEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    XRReferenceSpace referenceSpace() const;
    XRRigidTransform transform() const;
};

