#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRReferenceSpace.hpp"
#include "enums.hpp"

class DOMPointReadOnly;


/// The XRBoundedReferenceSpace class.
/// [`XRBoundedReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRBoundedReferenceSpace)
class XRBoundedReferenceSpace : public XRReferenceSpace {
    explicit XRBoundedReferenceSpace(Handle h) noexcept;

public:
    explicit XRBoundedReferenceSpace(const emlite::Val &val) noexcept;
    static XRBoundedReferenceSpace take_ownership(Handle h) noexcept;

    [[nodiscard]] XRBoundedReferenceSpace clone() const noexcept;
    /// Getter of the `boundsGeometry` attribute.
    /// [`XRBoundedReferenceSpace.boundsGeometry`](https://developer.mozilla.org/en-US/docs/Web/API/XRBoundedReferenceSpace/boundsGeometry)
    [[nodiscard]] jsbind::TypedArray<DOMPointReadOnly> boundsGeometry() const;
};

