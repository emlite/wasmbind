#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Interface InstallEvent
/// [`InstallEvent`](https://developer.mozilla.org/en-US/docs/Web/API/InstallEvent)
class InstallEvent : public ExtendableEvent {
    explicit InstallEvent(Handle h) noexcept;
public:
    explicit InstallEvent(const emlite::Val &val) noexcept;
    static InstallEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] InstallEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new InstallEvent(..)` constructor, creating a new InstallEvent instance
    InstallEvent(const jsbind::String& type);
    /// The `new InstallEvent(..)` constructor, creating a new InstallEvent instance
    InstallEvent(const jsbind::String& type, const ExtendableEventInit& eventInitDict);
    /// The addRoutes method.
    /// [`InstallEvent.addRoutes`](https://developer.mozilla.org/en-US/docs/Web/API/InstallEvent/addRoutes)
    jsbind::Promise<jsbind::Undefined> addRoutes(const jsbind::Any& rules);
};

} // namespace webbind