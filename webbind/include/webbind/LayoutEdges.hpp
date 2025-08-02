#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The LayoutEdges class.
/// [`LayoutEdges`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges)
class LayoutEdges : public emlite::Val {
    explicit LayoutEdges(Handle h) noexcept;

public:
    explicit LayoutEdges(const emlite::Val &val) noexcept;
    static LayoutEdges take_ownership(Handle h) noexcept;

    [[nodiscard]] LayoutEdges clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `inlineStart` attribute.
    /// [`LayoutEdges.inlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/inlineStart)
    [[nodiscard]] double inlineStart() const;
    /// Getter of the `inlineEnd` attribute.
    /// [`LayoutEdges.inlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/inlineEnd)
    [[nodiscard]] double inlineEnd() const;
    /// Getter of the `blockStart` attribute.
    /// [`LayoutEdges.blockStart`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/blockStart)
    [[nodiscard]] double blockStart() const;
    /// Getter of the `blockEnd` attribute.
    /// [`LayoutEdges.blockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/blockEnd)
    [[nodiscard]] double blockEnd() const;
    /// Getter of the `inline` attribute.
    /// [`LayoutEdges.inline`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/inline)
    [[nodiscard]] double inline_() const;
    /// Getter of the `block` attribute.
    /// [`LayoutEdges.block`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges/block)
    [[nodiscard]] double block() const;
};

