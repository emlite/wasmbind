#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface LayoutConstraints
/// [`LayoutConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints)
class LayoutConstraints : public emlite::Val {
    explicit LayoutConstraints(Handle h) noexcept;
public:
    explicit LayoutConstraints(const emlite::Val &val) noexcept;
    static LayoutConstraints take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutConstraints clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `availableInlineSize` attribute.
    /// [`LayoutConstraints.availableInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableInlineSize)
    [[nodiscard]] double availableInlineSize() const;
    /// Getter of the `availableBlockSize` attribute.
    /// [`LayoutConstraints.availableBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableBlockSize)
    [[nodiscard]] double availableBlockSize() const;
    /// Getter of the `fixedInlineSize` attribute.
    /// [`LayoutConstraints.fixedInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedInlineSize)
    [[nodiscard]] double fixedInlineSize() const;
    /// Getter of the `fixedBlockSize` attribute.
    /// [`LayoutConstraints.fixedBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedBlockSize)
    [[nodiscard]] double fixedBlockSize() const;
    /// Getter of the `percentageInlineSize` attribute.
    /// [`LayoutConstraints.percentageInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageInlineSize)
    [[nodiscard]] double percentageInlineSize() const;
    /// Getter of the `percentageBlockSize` attribute.
    /// [`LayoutConstraints.percentageBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageBlockSize)
    [[nodiscard]] double percentageBlockSize() const;
    /// Getter of the `blockFragmentationOffset` attribute.
    /// [`LayoutConstraints.blockFragmentationOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationOffset)
    [[nodiscard]] double blockFragmentationOffset() const;
    /// Getter of the `blockFragmentationType` attribute.
    /// [`LayoutConstraints.blockFragmentationType`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationType)
    [[nodiscard]] BlockFragmentationType blockFragmentationType() const;
    /// Getter of the `data` attribute.
    /// [`LayoutConstraints.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/data)
    [[nodiscard]] jsbind::Any data() const;
};

} // namespace webbind