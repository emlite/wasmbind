#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BreakTokenOptions.hpp"

namespace webbind {

class LayoutFragment;

/// Dictionary type FragmentResultOptions
class FragmentResultOptions : public emlite::Val {
  explicit FragmentResultOptions(Handle h) noexcept;
public:
    static FragmentResultOptions take_ownership(Handle h) noexcept;
    explicit FragmentResultOptions(const emlite::Val &val) noexcept;
    FragmentResultOptions() noexcept;
    [[nodiscard]] FragmentResultOptions clone() const noexcept;
    /// Getter of the `inlineSize` attribute.
    [[nodiscard]] double inlineSize() const;
    /// Setter of the `inlineSize` attribute.
    void inlineSize(double value);
    /// Getter of the `blockSize` attribute.
    [[nodiscard]] double blockSize() const;
    /// Setter of the `blockSize` attribute.
    void blockSize(double value);
    /// Getter of the `autoBlockSize` attribute.
    [[nodiscard]] double autoBlockSize() const;
    /// Setter of the `autoBlockSize` attribute.
    void autoBlockSize(double value);
    /// Getter of the `childFragments` attribute.
    [[nodiscard]] jsbind::TypedArray<LayoutFragment> childFragments() const;
    /// Setter of the `childFragments` attribute.
    void childFragments(const jsbind::TypedArray<LayoutFragment>& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `breakToken` attribute.
    [[nodiscard]] BreakTokenOptions breakToken() const;
    /// Setter of the `breakToken` attribute.
    void breakToken(const BreakTokenOptions& value);
};

} // namespace webbind