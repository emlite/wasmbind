#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Screen.hpp"
#include "enums.hpp"


class ScreenDetailed : public Screen {
    explicit ScreenDetailed(Handle h) noexcept;

public:
    explicit ScreenDetailed(const emlite::Val &val) noexcept;
    static ScreenDetailed take_ownership(Handle h) noexcept;

    ScreenDetailed clone() const noexcept;
    long availLeft() const;
    long availTop() const;
    long left() const;
    long top() const;
    bool isPrimary() const;
    bool isInternal() const;
    float devicePixelRatio() const;
    jsbind::DOMString label() const;
};

