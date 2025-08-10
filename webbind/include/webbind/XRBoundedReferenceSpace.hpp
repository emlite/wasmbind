#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRReferenceSpace.hpp"

namespace webbind {

class DOMPointReadOnly;

/// Interface XRBoundedReferenceSpace
/// [`XRBoundedReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRBoundedReferenceSpace)
class XRBoundedReferenceSpace : public XRReferenceSpace {
    explicit XRBoundedReferenceSpace(Handle h) noexcept;
public:
    explicit XRBoundedReferenceSpace(const emlite::Val &val) noexcept;
    static XRBoundedReferenceSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] XRBoundedReferenceSpace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `boundsGeometry` attribute.
    /// [`XRBoundedReferenceSpace.boundsGeometry`](https://developer.mozilla.org/en-US/docs/Web/API/XRBoundedReferenceSpace/boundsGeometry)
    [[nodiscard]] jsbind::TypedArray<DOMPointReadOnly> boundsGeometry() const;
};

} // namespace webbind