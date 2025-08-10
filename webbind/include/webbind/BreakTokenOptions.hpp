#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ChildBreakToken;

/// Dictionary type BreakTokenOptions
/// [`BreakTokenOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BreakTokenOptions)
class BreakTokenOptions : public emlite::Val {
  explicit BreakTokenOptions(Handle h) noexcept;
public:
    static BreakTokenOptions take_ownership(Handle h) noexcept;
    explicit BreakTokenOptions(const emlite::Val &val) noexcept;
    BreakTokenOptions() noexcept;
    [[nodiscard]] BreakTokenOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ChildBreakToken> childBreakTokens() const;
    void childBreakTokens(const jsbind::TypedArray<ChildBreakToken>& value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind