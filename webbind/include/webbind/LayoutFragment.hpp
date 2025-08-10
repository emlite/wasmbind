#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ChildBreakToken;

/// Interface LayoutFragment
/// [`LayoutFragment`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment)
class LayoutFragment : public emlite::Val {
    explicit LayoutFragment(Handle h) noexcept;
public:
    explicit LayoutFragment(const emlite::Val &val) noexcept;
    static LayoutFragment take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutFragment clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`LayoutFragment.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineSize)
    /// [`LayoutFragment.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineSize)
    [[nodiscard]] double inlineSize() const;
    /// [`LayoutFragment.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockSize)
    /// [`LayoutFragment.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockSize)
    [[nodiscard]] double blockSize() const;
    /// [`LayoutFragment.inlineOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineOffset)
    /// [`LayoutFragment.inlineOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineOffset)
    [[nodiscard]] double inlineOffset() const;
    /// Setter of the `inlineOffset` attribute.
    /// [`LayoutFragment.inlineOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineOffset)
    void inlineOffset(double value);
    /// [`LayoutFragment.blockOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockOffset)
    /// [`LayoutFragment.blockOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockOffset)
    [[nodiscard]] double blockOffset() const;
    /// Setter of the `blockOffset` attribute.
    /// [`LayoutFragment.blockOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockOffset)
    void blockOffset(double value);
    /// [`LayoutFragment.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/data)
    /// [`LayoutFragment.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/data)
    [[nodiscard]] jsbind::Any data() const;
    /// [`LayoutFragment.breakToken`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/breakToken)
    /// [`LayoutFragment.breakToken`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/breakToken)
    [[nodiscard]] ChildBreakToken breakToken() const;
};

} // namespace webbind