#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_lose_context class.
/// [`WEBGL_lose_context`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_lose_context)
class WEBGL_lose_context : public emlite::Val {
    explicit WEBGL_lose_context(Handle h) noexcept;

public:
    explicit WEBGL_lose_context(const emlite::Val &val) noexcept;
    static WEBGL_lose_context take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_lose_context clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The loseContext method.
    /// [`WEBGL_lose_context.loseContext`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_lose_context/loseContext)
    jsbind::Undefined loseContext();
    /// The restoreContext method.
    /// [`WEBGL_lose_context.restoreContext`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_lose_context/restoreContext)
    jsbind::Undefined restoreContext();
};

