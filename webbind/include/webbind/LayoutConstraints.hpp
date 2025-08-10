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
    /// [`LayoutConstraints.availableInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableInlineSize)
    /// [`LayoutConstraints.availableInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableInlineSize)
    [[nodiscard]] double availableInlineSize() const;
    /// [`LayoutConstraints.availableBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableBlockSize)
    /// [`LayoutConstraints.availableBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/availableBlockSize)
    [[nodiscard]] double availableBlockSize() const;
    /// [`LayoutConstraints.fixedInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedInlineSize)
    /// [`LayoutConstraints.fixedInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedInlineSize)
    [[nodiscard]] double fixedInlineSize() const;
    /// [`LayoutConstraints.fixedBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedBlockSize)
    /// [`LayoutConstraints.fixedBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/fixedBlockSize)
    [[nodiscard]] double fixedBlockSize() const;
    /// [`LayoutConstraints.percentageInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageInlineSize)
    /// [`LayoutConstraints.percentageInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageInlineSize)
    [[nodiscard]] double percentageInlineSize() const;
    /// [`LayoutConstraints.percentageBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageBlockSize)
    /// [`LayoutConstraints.percentageBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/percentageBlockSize)
    [[nodiscard]] double percentageBlockSize() const;
    /// [`LayoutConstraints.blockFragmentationOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationOffset)
    /// [`LayoutConstraints.blockFragmentationOffset`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationOffset)
    [[nodiscard]] double blockFragmentationOffset() const;
    /// [`LayoutConstraints.blockFragmentationType`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationType)
    /// [`LayoutConstraints.blockFragmentationType`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/blockFragmentationType)
    [[nodiscard]] BlockFragmentationType blockFragmentationType() const;
    /// [`LayoutConstraints.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/data)
    /// [`LayoutConstraints.data`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints/data)
    [[nodiscard]] jsbind::Any data() const;
};

} // namespace webbind