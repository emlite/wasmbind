#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class VTTRegion : public emlite::Val {
    explicit VTTRegion(Handle h) noexcept;

public:
    explicit VTTRegion(const emlite::Val &val) noexcept;
    static VTTRegion take_ownership(Handle h) noexcept;

    VTTRegion clone() const noexcept;
    VTTRegion();
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    double width() const;
    void width(double value);
    unsigned long lines() const;
    void lines(unsigned long value);
    double regionAnchorX() const;
    void regionAnchorX(double value);
    double regionAnchorY() const;
    void regionAnchorY(double value);
    double viewportAnchorX() const;
    void viewportAnchorX(double value);
    double viewportAnchorY() const;
    void viewportAnchorY(double value);
    ScrollSetting scroll() const;
    void scroll(const ScrollSetting& value);
};

