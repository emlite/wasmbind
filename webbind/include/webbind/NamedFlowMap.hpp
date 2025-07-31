#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The NamedFlowMap class.
/// [`NamedFlowMap`](https://developer.mozilla.org/en-US/docs/Web/API/NamedFlowMap)
class NamedFlowMap : public emlite::Val {
    explicit NamedFlowMap(Handle h) noexcept;

public:
    explicit NamedFlowMap(const emlite::Val &val) noexcept;
    static NamedFlowMap take_ownership(Handle h) noexcept;

    [[nodiscard]] NamedFlowMap clone() const noexcept;
};

