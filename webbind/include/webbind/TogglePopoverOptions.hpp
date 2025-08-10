#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ShowPopoverOptions.hpp"

namespace webbind {

/// Dictionary type TogglePopoverOptions
class TogglePopoverOptions : public ShowPopoverOptions {
  explicit TogglePopoverOptions(Handle h) noexcept;
public:
    static TogglePopoverOptions take_ownership(Handle h) noexcept;
    explicit TogglePopoverOptions(const emlite::Val &val) noexcept;
    TogglePopoverOptions() noexcept;
    [[nodiscard]] TogglePopoverOptions clone() const noexcept;
    /// Getter of the `force` attribute.
    [[nodiscard]] bool force() const;
    /// Setter of the `force` attribute.
    void force(bool value);
};

} // namespace webbind