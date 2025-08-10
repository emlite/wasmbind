#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRReferenceSpace;
class XRRigidTransform;

/// Dictionary type XRReferenceSpaceEventInit
class XRReferenceSpaceEventInit : public EventInit {
  explicit XRReferenceSpaceEventInit(Handle h) noexcept;
public:
    static XRReferenceSpaceEventInit take_ownership(Handle h) noexcept;
    explicit XRReferenceSpaceEventInit(const emlite::Val &val) noexcept;
    XRReferenceSpaceEventInit() noexcept;
    [[nodiscard]] XRReferenceSpaceEventInit clone() const noexcept;
    /// Getter of the `referenceSpace` attribute.
    [[nodiscard]] XRReferenceSpace referenceSpace() const;
    /// Setter of the `referenceSpace` attribute.
    void referenceSpace(const XRReferenceSpace& value);
    /// Getter of the `transform` attribute.
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    void transform(const XRRigidTransform& value);
};

} // namespace webbind