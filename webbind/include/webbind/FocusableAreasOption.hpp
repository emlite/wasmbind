#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FocusableAreasOption
class FocusableAreasOption : public emlite::Val {
  explicit FocusableAreasOption(Handle h) noexcept;
public:
    static FocusableAreasOption take_ownership(Handle h) noexcept;
    explicit FocusableAreasOption(const emlite::Val &val) noexcept;
    FocusableAreasOption() noexcept;
    [[nodiscard]] FocusableAreasOption clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] FocusableAreaSearchMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const FocusableAreaSearchMode& value);
};

} // namespace webbind