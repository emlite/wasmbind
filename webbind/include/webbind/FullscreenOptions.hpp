#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ScreenDetailed;

/// Dictionary type FullscreenOptions
class FullscreenOptions : public emlite::Val {
  explicit FullscreenOptions(Handle h) noexcept;
public:
    static FullscreenOptions take_ownership(Handle h) noexcept;
    explicit FullscreenOptions(const emlite::Val &val) noexcept;
    FullscreenOptions() noexcept;
    [[nodiscard]] FullscreenOptions clone() const noexcept;
    /// Getter of the `screen` attribute.
    [[nodiscard]] ScreenDetailed screen() const;
    /// Setter of the `screen` attribute.
    void screen(const ScreenDetailed& value);
};

} // namespace webbind