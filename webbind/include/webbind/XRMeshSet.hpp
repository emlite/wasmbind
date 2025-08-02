#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRMeshSet class.
/// [`XRMeshSet`](https://developer.mozilla.org/en-US/docs/Web/API/XRMeshSet)
class XRMeshSet : public emlite::Val {
    explicit XRMeshSet(Handle h) noexcept;

public:
    explicit XRMeshSet(const emlite::Val &val) noexcept;
    static XRMeshSet take_ownership(Handle h) noexcept;

    [[nodiscard]] XRMeshSet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

