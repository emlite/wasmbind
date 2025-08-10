#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FocusOptions
/// [`FocusOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FocusOptions)
class FocusOptions : public emlite::Val {
  explicit FocusOptions(Handle h) noexcept;
public:
    static FocusOptions take_ownership(Handle h) noexcept;
    explicit FocusOptions(const emlite::Val &val) noexcept;
    FocusOptions() noexcept;
    [[nodiscard]] FocusOptions clone() const noexcept;
    [[nodiscard]] bool preventScroll() const;
    void preventScroll(bool value);
    [[nodiscard]] bool focusVisible() const;
    void focusVisible(bool value);
};

} // namespace webbind