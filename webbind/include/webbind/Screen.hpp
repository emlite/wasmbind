#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ScreenOrientation;


class Screen : public emlite::Val {
    explicit Screen(Handle h) noexcept;

public:
    explicit Screen(const emlite::Val &val) noexcept;
    static Screen take_ownership(Handle h) noexcept;

    Screen clone() const noexcept;
    long availWidth() const;
    long availHeight() const;
    long width() const;
    long height() const;
    unsigned long colorDepth() const;
    unsigned long pixelDepth() const;
    ScreenOrientation orientation() const;
    bool isExtended() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

