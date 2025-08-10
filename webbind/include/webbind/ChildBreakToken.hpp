#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class LayoutChild;

/// Interface ChildBreakToken
/// [`ChildBreakToken`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken)
class ChildBreakToken : public emlite::Val {
    explicit ChildBreakToken(Handle h) noexcept;
public:
    explicit ChildBreakToken(const emlite::Val &val) noexcept;
    static ChildBreakToken take_ownership(Handle h) noexcept;
    [[nodiscard]] ChildBreakToken clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ChildBreakToken.breakType`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/breakType)
    /// [`ChildBreakToken.breakType`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/breakType)
    [[nodiscard]] BreakType breakType() const;
    /// [`ChildBreakToken.child`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/child)
    /// [`ChildBreakToken.child`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/child)
    [[nodiscard]] LayoutChild child() const;
};

} // namespace webbind