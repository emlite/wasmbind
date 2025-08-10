#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ScreenDetailed;

/// Dictionary type FullscreenOptions
/// [`FullscreenOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FullscreenOptions)
class FullscreenOptions : public emlite::Val {
  explicit FullscreenOptions(Handle h) noexcept;
public:
    static FullscreenOptions take_ownership(Handle h) noexcept;
    explicit FullscreenOptions(const emlite::Val &val) noexcept;
    FullscreenOptions() noexcept;
    [[nodiscard]] FullscreenOptions clone() const noexcept;
    [[nodiscard]] ScreenDetailed screen() const;
    void screen(const ScreenDetailed& value);
};

} // namespace webbind