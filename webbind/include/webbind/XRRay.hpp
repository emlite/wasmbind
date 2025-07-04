#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;
class XRRigidTransform;


class XRRay : public emlite::Val {
    explicit XRRay(Handle h) noexcept;

public:
    explicit XRRay(const emlite::Val &val) noexcept;
    static XRRay take_ownership(Handle h) noexcept;

    XRRay clone() const noexcept;
    XRRay(const XRRigidTransform& transform);
    DOMPointReadOnly origin() const;
    DOMPointReadOnly direction() const;
    jsbind::Float32Array matrix() const;
};

