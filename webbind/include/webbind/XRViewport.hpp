#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRViewport : public emlite::Val {
    explicit XRViewport(Handle h) noexcept;

public:
    explicit XRViewport(const emlite::Val &val) noexcept;
    static XRViewport take_ownership(Handle h) noexcept;

    XRViewport clone() const noexcept;
    long x() const;
    long y() const;
    long width() const;
    long height() const;
};

