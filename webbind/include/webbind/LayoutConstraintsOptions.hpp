#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LayoutConstraintsOptions
/// [`LayoutConstraintsOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraintsOptions)
class LayoutConstraintsOptions : public emlite::Val {
  explicit LayoutConstraintsOptions(Handle h) noexcept;
public:
    static LayoutConstraintsOptions take_ownership(Handle h) noexcept;
    explicit LayoutConstraintsOptions(const emlite::Val &val) noexcept;
    LayoutConstraintsOptions() noexcept;
    [[nodiscard]] LayoutConstraintsOptions clone() const noexcept;
    [[nodiscard]] double availableInlineSize() const;
    void availableInlineSize(double value);
    [[nodiscard]] double availableBlockSize() const;
    void availableBlockSize(double value);
    [[nodiscard]] double fixedInlineSize() const;
    void fixedInlineSize(double value);
    [[nodiscard]] double fixedBlockSize() const;
    void fixedBlockSize(double value);
    [[nodiscard]] double percentageInlineSize() const;
    void percentageInlineSize(double value);
    [[nodiscard]] double percentageBlockSize() const;
    void percentageBlockSize(double value);
    [[nodiscard]] double blockFragmentationOffset() const;
    void blockFragmentationOffset(double value);
    [[nodiscard]] BlockFragmentationType blockFragmentationType() const;
    void blockFragmentationType(const BlockFragmentationType& value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind