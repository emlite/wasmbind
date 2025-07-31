#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


/// The InstallEvent class.
/// [`InstallEvent`](https://developer.mozilla.org/en-US/docs/Web/API/InstallEvent)
class InstallEvent : public ExtendableEvent {
    explicit InstallEvent(Handle h) noexcept;

public:
    explicit InstallEvent(const emlite::Val &val) noexcept;
    static InstallEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] InstallEvent clone() const noexcept;
    /// The `new InstallEvent(..)` constructor, creating a new InstallEvent instance
    InstallEvent(const jsbind::String& type);
    /// The `new InstallEvent(..)` constructor, creating a new InstallEvent instance
    InstallEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// The addRoutes method.
    /// [`InstallEvent.addRoutes`](https://developer.mozilla.org/en-US/docs/Web/API/InstallEvent/addRoutes)
    jsbind::Promise<jsbind::Undefined> addRoutes(const jsbind::Any& rules);
};

