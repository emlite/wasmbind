#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScrollOptions
class ScrollOptions : public emlite::Val {
  explicit ScrollOptions(Handle h) noexcept;
public:
    static ScrollOptions take_ownership(Handle h) noexcept;
    explicit ScrollOptions(const emlite::Val &val) noexcept;
    ScrollOptions() noexcept;
    [[nodiscard]] ScrollOptions clone() const noexcept;
    /// Getter of the `behavior` attribute.
    [[nodiscard]] ScrollBehavior behavior() const;
    /// Setter of the `behavior` attribute.
    void behavior(const ScrollBehavior& value);
};

} // namespace webbind