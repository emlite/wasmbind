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
    /// Getter of the `inlineSize` attribute.
    /// [`LayoutFragment.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineSize)
    [[nodiscard]] double inlineSize() const;
    /// Getter of the `blockSize` attribute.
    /// [`LayoutFragment.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockSize)
    [[nodiscard]] double blockSize() const;
    /// Getter of the `inlineOffset` attribute.
    /// [`LayoutFragment.inlineOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineOffset)
    [[nodiscard]] double inlineOffset() const;
    /// Setter of the `inlineOffset` attribute.
    /// [`LayoutFragment.inlineOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/inlineOffset)
    void inlineOffset(double value);
    /// Getter of the `blockOffset` attribute.
    /// [`LayoutFragment.blockOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockOffset)
    [[nodiscard]] double blockOffset() const;
    /// Setter of the `blockOffset` attribute.
    /// [`LayoutFragment.blockOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/blockOffset)
    void blockOffset(double value);
    /// Getter of the `data` attribute.
    /// [`LayoutFragment.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/data)
    [[nodiscard]] jsbind::Any data() const;
    /// Getter of the `breakToken` attribute.
    /// [`LayoutFragment.breakToken`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment/breakToken)
    [[nodiscard]] ChildBreakToken breakToken() const;
};

} // namespace webbind