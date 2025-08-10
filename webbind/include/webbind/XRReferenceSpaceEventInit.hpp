#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRReferenceSpace;
class XRRigidTransform;

/// Dictionary type XRReferenceSpaceEventInit
/// [`XRReferenceSpaceEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEventInit)
class XRReferenceSpaceEventInit : public EventInit {
  explicit XRReferenceSpaceEventInit(Handle h) noexcept;
public:
    static XRReferenceSpaceEventInit take_ownership(Handle h) noexcept;
    explicit XRReferenceSpaceEventInit(const emlite::Val &val) noexcept;
    XRReferenceSpaceEventInit() noexcept;
    [[nodiscard]] XRReferenceSpaceEventInit clone() const noexcept;
    [[nodiscard]] XRReferenceSpace referenceSpace() const;
    void referenceSpace(const XRReferenceSpace& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
};

} // namespace webbind