#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FocusOptions
class FocusOptions : public emlite::Val {
  explicit FocusOptions(Handle h) noexcept;
public:
    static FocusOptions take_ownership(Handle h) noexcept;
    explicit FocusOptions(const emlite::Val &val) noexcept;
    FocusOptions() noexcept;
    [[nodiscard]] FocusOptions clone() const noexcept;
    /// Getter of the `preventScroll` attribute.
    [[nodiscard]] bool preventScroll() const;
    /// Setter of the `preventScroll` attribute.
    void preventScroll(bool value);
    /// Getter of the `focusVisible` attribute.
    [[nodiscard]] bool focusVisible() const;
    /// Setter of the `focusVisible` attribute.
    void focusVisible(bool value);
};

} // namespace webbind