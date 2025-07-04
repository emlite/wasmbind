#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MLGraph : public emlite::Val {
    explicit MLGraph(Handle h) noexcept;

public:
    explicit MLGraph(const emlite::Val &val) noexcept;
    static MLGraph take_ownership(Handle h) noexcept;

    MLGraph clone() const noexcept;
    jsbind::Undefined destroy();
};

