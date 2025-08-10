#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StartViewTransitionOptions
class StartViewTransitionOptions : public emlite::Val {
  explicit StartViewTransitionOptions(Handle h) noexcept;
public:
    static StartViewTransitionOptions take_ownership(Handle h) noexcept;
    explicit StartViewTransitionOptions(const emlite::Val &val) noexcept;
    StartViewTransitionOptions() noexcept;
    [[nodiscard]] StartViewTransitionOptions clone() const noexcept;
    /// Getter of the `update` attribute.
    [[nodiscard]] jsbind::Function update() const;
    /// Setter of the `update` attribute.
    void update(const jsbind::Function& value);
    /// Getter of the `types` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    /// Setter of the `types` attribute.
    void types(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind