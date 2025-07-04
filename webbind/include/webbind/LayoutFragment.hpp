#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ChildBreakToken;


class LayoutFragment : public emlite::Val {
    explicit LayoutFragment(Handle h) noexcept;

public:
    explicit LayoutFragment(const emlite::Val &val) noexcept;
    static LayoutFragment take_ownership(Handle h) noexcept;

    LayoutFragment clone() const noexcept;
    double inlineSize() const;
    double blockSize() const;
    double inlineOffset() const;
    void inlineOffset(double value);
    double blockOffset() const;
    void blockOffset(double value);
    jsbind::Any data() const;
    ChildBreakToken breakToken() const;
};

