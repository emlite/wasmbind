#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WorkletGlobalScope : public emlite::Val {
    explicit WorkletGlobalScope(Handle h) noexcept;

public:
    explicit WorkletGlobalScope(const emlite::Val &val) noexcept;
    static WorkletGlobalScope take_ownership(Handle h) noexcept;

    WorkletGlobalScope clone() const noexcept;
};

