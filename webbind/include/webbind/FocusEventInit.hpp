#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type FocusEventInit
class FocusEventInit : public UIEventInit {
  explicit FocusEventInit(Handle h) noexcept;
public:
    static FocusEventInit take_ownership(Handle h) noexcept;
    explicit FocusEventInit(const emlite::Val &val) noexcept;
    FocusEventInit() noexcept;
    [[nodiscard]] FocusEventInit clone() const noexcept;
    /// Getter of the `relatedTarget` attribute.
    [[nodiscard]] EventTarget relatedTarget() const;
    /// Setter of the `relatedTarget` attribute.
    void relatedTarget(const EventTarget& value);
};

} // namespace webbind