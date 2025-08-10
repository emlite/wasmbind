#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LayoutConstraintsOptions
class LayoutConstraintsOptions : public emlite::Val {
  explicit LayoutConstraintsOptions(Handle h) noexcept;
public:
    static LayoutConstraintsOptions take_ownership(Handle h) noexcept;
    explicit LayoutConstraintsOptions(const emlite::Val &val) noexcept;
    LayoutConstraintsOptions() noexcept;
    [[nodiscard]] LayoutConstraintsOptions clone() const noexcept;
    /// Getter of the `availableInlineSize` attribute.
    [[nodiscard]] double availableInlineSize() const;
    /// Setter of the `availableInlineSize` attribute.
    void availableInlineSize(double value);
    /// Getter of the `availableBlockSize` attribute.
    [[nodiscard]] double availableBlockSize() const;
    /// Setter of the `availableBlockSize` attribute.
    void availableBlockSize(double value);
    /// Getter of the `fixedInlineSize` attribute.
    [[nodiscard]] double fixedInlineSize() const;
    /// Setter of the `fixedInlineSize` attribute.
    void fixedInlineSize(double value);
    /// Getter of the `fixedBlockSize` attribute.
    [[nodiscard]] double fixedBlockSize() const;
    /// Setter of the `fixedBlockSize` attribute.
    void fixedBlockSize(double value);
    /// Getter of the `percentageInlineSize` attribute.
    [[nodiscard]] double percentageInlineSize() const;
    /// Setter of the `percentageInlineSize` attribute.
    void percentageInlineSize(double value);
    /// Getter of the `percentageBlockSize` attribute.
    [[nodiscard]] double percentageBlockSize() const;
    /// Setter of the `percentageBlockSize` attribute.
    void percentageBlockSize(double value);
    /// Getter of the `blockFragmentationOffset` attribute.
    [[nodiscard]] double blockFragmentationOffset() const;
    /// Setter of the `blockFragmentationOffset` attribute.
    void blockFragmentationOffset(double value);
    /// Getter of the `blockFragmentationType` attribute.
    [[nodiscard]] BlockFragmentationType blockFragmentationType() const;
    /// Setter of the `blockFragmentationType` attribute.
    void blockFragmentationType(const BlockFragmentationType& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
};

} // namespace webbind