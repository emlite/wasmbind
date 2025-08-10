#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HTMLElement;

/// Dictionary type ShowPopoverOptions
class ShowPopoverOptions : public emlite::Val {
  explicit ShowPopoverOptions(Handle h) noexcept;
public:
    static ShowPopoverOptions take_ownership(Handle h) noexcept;
    explicit ShowPopoverOptions(const emlite::Val &val) noexcept;
    ShowPopoverOptions() noexcept;
    [[nodiscard]] ShowPopoverOptions clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] HTMLElement source() const;
    /// Setter of the `source` attribute.
    void source(const HTMLElement& value);
};

} // namespace webbind