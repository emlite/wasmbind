#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LayoutChild;


/// The ChildBreakToken class.
/// [`ChildBreakToken`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken)
class ChildBreakToken : public emlite::Val {
    explicit ChildBreakToken(Handle h) noexcept;

public:
    explicit ChildBreakToken(const emlite::Val &val) noexcept;
    static ChildBreakToken take_ownership(Handle h) noexcept;

    [[nodiscard]] ChildBreakToken clone() const noexcept;
    /// Getter of the `breakType` attribute.
    /// [`ChildBreakToken.breakType`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/breakType)
    [[nodiscard]] BreakType breakType() const;
    /// Getter of the `child` attribute.
    /// [`ChildBreakToken.child`](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken/child)
    [[nodiscard]] LayoutChild child() const;
};

