#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LayoutOptions
class LayoutOptions : public emlite::Val {
  explicit LayoutOptions(Handle h) noexcept;
public:
    static LayoutOptions take_ownership(Handle h) noexcept;
    explicit LayoutOptions(const emlite::Val &val) noexcept;
    LayoutOptions() noexcept;
    [[nodiscard]] LayoutOptions clone() const noexcept;
    /// Getter of the `childDisplay` attribute.
    [[nodiscard]] ChildDisplayType childDisplay() const;
    /// Setter of the `childDisplay` attribute.
    void childDisplay(const ChildDisplayType& value);
    /// Getter of the `sizing` attribute.
    [[nodiscard]] LayoutSizingMode sizing() const;
    /// Setter of the `sizing` attribute.
    void sizing(const LayoutSizingMode& value);
};

} // namespace webbind