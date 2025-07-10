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
    template <class = void>
    struct Fn {
        emlite::Val f;
        Fn(Callback f,
           const emlite::Val &data = emlite::Val::null()
        ) noexcept
            : f(emlite::Val::make_fn(f, data)) {}
        Fn(emlite::Closure<Val(emlite::Params)> &&f
        ) noexcept
            : f(emlite::Val::make_fn(
                  (emlite::Closure<Val(emlite::Params)> &&)f
              )) {}
        operator Function() const { return Function(f); }
    };
    template <typename Ret, typename... Args>
    struct Fn<Ret(Args...)> {
        emlite::Val f;
        template <typename F>
        Fn(F &&f) noexcept
            : f(emlite::Val::make_fn<Ret, Args...>(f)) {}
        operator Function() const { return Function(f); }
    };

    DECLARE_CLONE(Function)
};
} // namespace jsbind
