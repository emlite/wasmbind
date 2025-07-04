#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRSpace;
class DOMPointReadOnly;


class XRPlane : public emlite::Val {
    explicit XRPlane(Handle h) noexcept;

public:
    explicit XRPlane(const emlite::Val &val) noexcept;
    static XRPlane take_ownership(Handle h) noexcept;

    XRPlane clone() const noexcept;
    XRSpace planeSpace() const;
    jsbind::FrozenArray<DOMPointReadOnly> polygon() const;
    XRPlaneOrientation orientation() const;
    jsbind::Any lastChangedTime() const;
    jsbind::DOMString semanticLabel() const;
};

