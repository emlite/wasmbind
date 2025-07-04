#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class NamedFlowMap : public emlite::Val {
    explicit NamedFlowMap(Handle h) noexcept;

public:
    explicit NamedFlowMap(const emlite::Val &val) noexcept;
    static NamedFlowMap take_ownership(Handle h) noexcept;

    NamedFlowMap clone() const noexcept;
};

