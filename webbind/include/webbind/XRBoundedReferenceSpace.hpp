#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRReferenceSpace.hpp"
#include "enums.hpp"

class DOMPointReadOnly;


class XRBoundedReferenceSpace : public XRReferenceSpace {
    explicit XRBoundedReferenceSpace(Handle h) noexcept;

public:
    explicit XRBoundedReferenceSpace(const emlite::Val &val) noexcept;
    static XRBoundedReferenceSpace take_ownership(Handle h) noexcept;

    XRBoundedReferenceSpace clone() const noexcept;
    jsbind::FrozenArray<DOMPointReadOnly> boundsGeometry() const;
};

