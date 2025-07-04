#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class DOMPointReadOnly;


class XRCubeLayer : public XRCompositionLayer {
    explicit XRCubeLayer(Handle h) noexcept;

public:
    explicit XRCubeLayer(const emlite::Val &val) noexcept;
    static XRCubeLayer take_ownership(Handle h) noexcept;

    XRCubeLayer clone() const noexcept;
    XRSpace space() const;
    void space(const XRSpace& value);
    DOMPointReadOnly orientation() const;
    void orientation(const DOMPointReadOnly& value);
    jsbind::Any onredraw() const;
    void onredraw(const jsbind::Any& value);
};

