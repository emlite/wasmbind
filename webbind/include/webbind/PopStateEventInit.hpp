#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PopStateEventInit
class PopStateEventInit : public EventInit {
  explicit PopStateEventInit(Handle h) noexcept;
public:
    static PopStateEventInit take_ownership(Handle h) noexcept;
    explicit PopStateEventInit(const emlite::Val &val) noexcept;
    PopStateEventInit() noexcept;
    [[nodiscard]] PopStateEventInit clone() const noexcept;
    /// Getter of the `state` attribute.
    [[nodiscard]] jsbind::Any state() const;
    /// Setter of the `state` attribute.
    void state(const jsbind::Any& value);
    /// Getter of the `hasUAVisualTransition` attribute.
    [[nodiscard]] bool hasUAVisualTransition() const;
    /// Setter of the `hasUAVisualTransition` attribute.
    void hasUAVisualTransition(bool value);
};

} // namespace webbind