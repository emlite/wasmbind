#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ToggleEventInit
/// [`ToggleEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEventInit)
class ToggleEventInit : public EventInit {
  explicit ToggleEventInit(Handle h) noexcept;
public:
    static ToggleEventInit take_ownership(Handle h) noexcept;
    explicit ToggleEventInit(const emlite::Val &val) noexcept;
    ToggleEventInit() noexcept;
    [[nodiscard]] ToggleEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String oldState() const;
    void oldState(const jsbind::String& value);
    [[nodiscard]] jsbind::String newState() const;
    void newState(const jsbind::String& value);
};

} // namespace webbind