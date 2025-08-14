#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface FetchLaterResult
/// [`FetchLaterResult`](https://developer.mozilla.org/en-US/docs/Web/API/FetchLaterResult)
class FetchLaterResult : public emlite::Val {
    explicit FetchLaterResult(Handle h) noexcept;
public:
    explicit FetchLaterResult(const emlite::Val &val) noexcept;
    static FetchLaterResult take_ownership(Handle h) noexcept;
    [[nodiscard]] FetchLaterResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`FetchLaterResult.activated`](https://developer.mozilla.org/en-US/docs/Web/API/FetchLaterResult/activated)
    /// [`FetchLaterResult.activated`](https://developer.mozilla.org/en-US/docs/Web/API/FetchLaterResult/activated)
    [[nodiscard]] bool activated() const;
};

} // namespace webbind