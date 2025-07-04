#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRPlaneSet : public emlite::Val {
    explicit XRPlaneSet(Handle h) noexcept;

public:
    explicit XRPlaneSet(const emlite::Val &val) noexcept;
    static XRPlaneSet take_ownership(Handle h) noexcept;

    XRPlaneSet clone() const noexcept;
};

