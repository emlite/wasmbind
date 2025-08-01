#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSpace.hpp"
#include "enums.hpp"

class XRReferenceSpace;
class XRRigidTransform;


/// The XRReferenceSpace class.
/// [`XRReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace)
class XRReferenceSpace : public XRSpace {
    explicit XRReferenceSpace(Handle h) noexcept;

public:
    explicit XRReferenceSpace(const emlite::Val &val) noexcept;
    static XRReferenceSpace take_ownership(Handle h) noexcept;

    [[nodiscard]] XRReferenceSpace clone() const noexcept;
    /// The getOffsetReferenceSpace method.
    /// [`XRReferenceSpace.getOffsetReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/getOffsetReferenceSpace)
    XRReferenceSpace getOffsetReferenceSpace(const XRRigidTransform& originOffset);
    /// Getter of the `onreset` attribute.
    /// [`XRReferenceSpace.onreset`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/onreset)
    [[nodiscard]] jsbind::Any onreset() const;
    /// Setter of the `onreset` attribute.
    /// [`XRReferenceSpace.onreset`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace/onreset)
    void onreset(const jsbind::Any& value);
};

