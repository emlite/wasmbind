#pragma once

#include "Any.hpp"
#include "Array.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>

namespace jsbind {
class Function : public emlite::Val {
    explicit Function(Handle h) noexcept;

    template <size_t N, size_t... I>
    static emlite::Val
    make_dyn_function(const char *const (&args)[N], const char *body, emlite::detail::index_sequence<I...>) {
        /* equivalent to: new_( Val(args[0]), …,
         * Val(args[N-1]), Val(body) ) */
        return emlite::Val::global("Function")
            .new_(
                emlite::Val(args[I])..., emlite::Val(body)
            )
            .template as<Function>();
    }

  public:
    static Function take_ownership(Handle h) noexcept;
    explicit Function(const emlite::Val &val) noexcept;

    static emlite::Val instance() noexcept;

    template <size_t N>
    Function(const char *const (&args)[N], const char *body)
        : emlite::Val(make_dyn_function(
              args,
              body,
              emlite::detail::make_index_sequence<N>{}
          )) {}

    Function(const char *name);

    template <class = void>
    struct Fn {
        emlite::Val _f;
        Fn(Callback f,
           const emlite::Val &data = emlite::Val::null()
        ) noexcept
            : _f(emlite::Val::make_fn(f, data)) {}
        Fn(emlite::Closure<Val(emlite::Params)> &&f
        ) noexcept
            : _f(emlite::Val::make_fn(
                  emlite::detail::move(f)
              )) {}
        operator Function() const { return Function(_f); }
    };
    template <typename Ret, typename... Args>
    struct Fn<Ret(Args...)> {
        emlite::Val f;
        template <typename F>
        Fn(F &&f) noexcept
            : f(emlite::Val::make_fn<Ret, Args...>(
                  emlite::detail::forward<F>(f)
              )) {}
        operator Function() const { return Function(f); }
    };

    Any apply(const Any &this_arg, const Array &args_array);

    template <typename... Args>
    Function bind(const Any &this_arg, Args... args) {
        return call(
                   "bind",
                   this_arg,
                   emlite::detail::forward<Args>(args)...
        )
            .template as<Function>();
    }

    template <typename T, typename... Args>
    T call(const Any &this_arg, Args... args) {
        return emlite::Val::call(
                   "call",
                   this_arg,
                   emlite::detail::forward<Args>(args)...
        )
            .template as<T>();
    }

    DECLARE_CLONE(Function)
};
} // namespace jsbind
