#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StartViewTransitionOptions
/// [`StartViewTransitionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/StartViewTransitionOptions)
class StartViewTransitionOptions : public emlite::Val {
  explicit StartViewTransitionOptions(Handle h) noexcept;
public:
    static StartViewTransitionOptions take_ownership(Handle h) noexcept;
    explicit StartViewTransitionOptions(const emlite::Val &val) noexcept;
    StartViewTransitionOptions() noexcept;
    [[nodiscard]] StartViewTransitionOptions clone() const noexcept;
    [[nodiscard]] jsbind::Function update() const;
    void update(const jsbind::Function& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    void types(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind