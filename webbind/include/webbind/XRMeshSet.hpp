#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRMeshSet : public emlite::Val {
    explicit XRMeshSet(Handle h) noexcept;

public:
    explicit XRMeshSet(const emlite::Val &val) noexcept;
    static XRMeshSet take_ownership(Handle h) noexcept;

    XRMeshSet clone() const noexcept;
};

