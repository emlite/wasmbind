#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ToggleEventInit
class ToggleEventInit : public EventInit {
  explicit ToggleEventInit(Handle h) noexcept;
public:
    static ToggleEventInit take_ownership(Handle h) noexcept;
    explicit ToggleEventInit(const emlite::Val &val) noexcept;
    ToggleEventInit() noexcept;
    [[nodiscard]] ToggleEventInit clone() const noexcept;
    /// Getter of the `oldState` attribute.
    [[nodiscard]] jsbind::String oldState() const;
    /// Setter of the `oldState` attribute.
    void oldState(const jsbind::String& value);
    /// Getter of the `newState` attribute.
    [[nodiscard]] jsbind::String newState() const;
    /// Setter of the `newState` attribute.
    void newState(const jsbind::String& value);
};

} // namespace webbind