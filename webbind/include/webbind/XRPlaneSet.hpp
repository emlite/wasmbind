#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRPlaneSet class.
/// [`XRPlaneSet`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlaneSet)
class XRPlaneSet : public emlite::Val {
    explicit XRPlaneSet(Handle h) noexcept;

public:
    explicit XRPlaneSet(const emlite::Val &val) noexcept;
    static XRPlaneSet take_ownership(Handle h) noexcept;

    [[nodiscard]] XRPlaneSet clone() const noexcept;
};

