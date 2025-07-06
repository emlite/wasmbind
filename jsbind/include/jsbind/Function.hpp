#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>

namespace jsbind {
class Function : public emlite::Val {
    explicit Function(Handle h) noexcept;

  public:
    static Function take_ownership(Handle h) noexcept;
    explicit Function(const emlite::Val &val) noexcept;
    explicit Function(
        Callback f,
        const emlite::Val &data = emlite::Val::null()
    ) noexcept;
    explicit Function(
        emlite::Closure<Val(emlite::Params)> &&f
    ) noexcept;

    DECLARE_CLONE(Function)
};
} // namespace jsbind
