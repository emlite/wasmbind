#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRSpace.hpp"

namespace webbind {

class XRReferenceSpace;
class XRRigidTransform;

/// Interface XRReferenceSpace
/// [`XRReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace)
class XRReferenceSpace : public XRSpace {
    explicit XRReferenceSpace(Handle h) noexcept;
public:
    explicit XRReferenceSpace(const emlite::Val &val) noexcept;
    static XRReferenceSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReferenceSpace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getOffsetReferenceSpace method.
    /// [`XRReferenceSpace.getOffsetReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/getOffsetReferenceSpace)
    XRReferenceSpace getOffsetReferenceSpace(const XRRigidTransform& originOffset);
    /// [`XRReferenceSpace.onreset`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/onreset)
    /// [`XRReferenceSpace.onreset`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/onreset)
    [[nodiscard]] jsbind::Any onreset() const;
    /// Setter of the `onreset` attribute.
    /// [`XRReferenceSpace.onreset`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/onreset)
    void onreset(const jsbind::Any& value);
};

} // namespace webbind