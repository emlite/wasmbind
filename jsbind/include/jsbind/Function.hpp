#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>

namespace jsbind {
namespace detail {
template <size_t... I>
struct index_sequence {};
template <size_t N, size_t... I>
struct make_index_sequence_impl
    : make_index_sequence_impl<N - 1, N - 1, I...> {};
template <size_t... I>
struct make_index_sequence_impl<0, I...> {
    using type = index_sequence<I...>;
};
template <size_t N>
using make_index_sequence =
    typename make_index_sequence_impl<N>::type;
template <
    typename... Args,
    size_t... I,
    typename F,
    typename P>
constexpr decltype(auto)
call_with_params_impl(F &&f, P &&p, index_sequence<I...>) {
    return emlite::detail::forward<F>(f)(
        p.vals[I].template as<Args>()...
    );
}

template <typename... Args, typename F, typename P>
constexpr decltype(auto) call_with_params(F &&f, P &&p) {
    return call_with_params_impl<Args...>(
        emlite::detail::forward<F>(f),
        emlite::detail::forward<P>(p),
        make_index_sequence<sizeof...(Args)>{}
    );
}
} // namespace detail

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

    template <typename Ret, typename... Args, typename F>
    static Function from(F &&f) noexcept {
        return Function(
            [=](emlite::Params p) -> emlite::Val {
                if (p.len < sizeof...(Args)) {
                    emlite::Console().warn("Called with more than the expected arguments!");
                    return emlite::Val::undefined();
                }
                return emlite::Val(
                    detail::call_with_params<Args...>((emlite::Closure<Ret(Args...)> &&)f, p)
                );
            }
        );
    }

    DECLARE_CLONE(Function)
};
} // namespace jsbind
