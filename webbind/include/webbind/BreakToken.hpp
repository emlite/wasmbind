#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ChildBreakToken;


/// The BreakToken class.
/// [`BreakToken`](https://developer.mozilla.org/en-US/docs/Web/API/BreakToken)
class BreakToken : public emlite::Val {
    explicit BreakToken(Handle h) noexcept;

public:
    explicit BreakToken(const emlite::Val &val) noexcept;
    static BreakToken take_ownership(Handle h) noexcept;

    [[nodiscard]] BreakToken clone() const noexcept;
    /// Getter of the `childBreakTokens` attribute.
    /// [`BreakToken.childBreakTokens`](https://developer.mozilla.org/en-US/docs/Web/API/BreakToken/childBreakTokens)
    [[nodiscard]] jsbind::TypedArray<ChildBreakToken> childBreakTokens() const;
    /// Getter of the `data` attribute.
    /// [`BreakToken.data`](https://developer.mozilla.org/en-US/docs/Web/API/BreakToken/data)
    [[nodiscard]] jsbind::Any data() const;
};

