#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;
class XRRigidTransform;
class DOMPointInit;


class XRRigidTransform : public emlite::Val {
    explicit XRRigidTransform(Handle h) noexcept;

public:
    explicit XRRigidTransform(const emlite::Val &val) noexcept;
    static XRRigidTransform take_ownership(Handle h) noexcept;

    XRRigidTransform clone() const noexcept;
    XRRigidTransform();
    XRRigidTransform(const DOMPointInit& position);
    XRRigidTransform(const DOMPointInit& position, const DOMPointInit& orientation);
    DOMPointReadOnly position() const;
    DOMPointReadOnly orientation() const;
    jsbind::Float32Array matrix() const;
    XRRigidTransform inverse() const;
};

