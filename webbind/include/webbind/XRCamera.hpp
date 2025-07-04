#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRCamera : public emlite::Val {
    explicit XRCamera(Handle h) noexcept;

public:
    explicit XRCamera(const emlite::Val &val) noexcept;
    static XRCamera take_ownership(Handle h) noexcept;

    XRCamera clone() const noexcept;
    unsigned long width() const;
    unsigned long height() const;
};

