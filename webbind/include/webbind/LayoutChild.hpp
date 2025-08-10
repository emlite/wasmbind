#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LayoutConstraintsOptions.hpp"

namespace webbind {

class StylePropertyMapReadOnly;
class IntrinsicSizes;
class LayoutFragment;
class ChildBreakToken;

/// Interface LayoutChild
/// [`LayoutChild`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild)
class LayoutChild : public emlite::Val {
    explicit LayoutChild(Handle h) noexcept;
public:
    explicit LayoutChild(const emlite::Val &val) noexcept;
    static LayoutChild take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutChild clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`LayoutChild.styleMap`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild/styleMap)
    /// [`LayoutChild.styleMap`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild/styleMap)
    [[nodiscard]] StylePropertyMapReadOnly styleMap() const;
    /// The intrinsicSizes method.
    /// [`LayoutChild.intrinsicSizes`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild/intrinsicSizes)
    jsbind::Promise<IntrinsicSizes> intrinsicSizes();
    /// The layoutNextFragment method.
    /// [`LayoutChild.layoutNextFragment`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild/layoutNextFragment)
    jsbind::Promise<LayoutFragment> layoutNextFragment(const LayoutConstraintsOptions& constraints, const ChildBreakToken& breakToken);
};

} // namespace webbind