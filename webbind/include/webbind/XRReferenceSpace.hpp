#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSpace.hpp"
#include "enums.hpp"

class XRReferenceSpace;
class XRRigidTransform;


class XRReferenceSpace : public XRSpace {
    explicit XRReferenceSpace(Handle h) noexcept;

public:
    explicit XRReferenceSpace(const emlite::Val &val) noexcept;
    static XRReferenceSpace take_ownership(Handle h) noexcept;

    XRReferenceSpace clone() const noexcept;
    XRReferenceSpace getOffsetReferenceSpace(const XRRigidTransform& originOffset);
    jsbind::Any onreset() const;
    void onreset(const jsbind::Any& value);
};

