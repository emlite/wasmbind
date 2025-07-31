#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


/// The PeriodicSyncEvent class.
/// [`PeriodicSyncEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEvent)
class PeriodicSyncEvent : public ExtendableEvent {
    explicit PeriodicSyncEvent(Handle h) noexcept;

public:
    explicit PeriodicSyncEvent(const emlite::Val &val) noexcept;
    static PeriodicSyncEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PeriodicSyncEvent clone() const noexcept;
    /// The `new PeriodicSyncEvent(..)` constructor, creating a new PeriodicSyncEvent instance
    PeriodicSyncEvent(const jsbind::String& type, const jsbind::Any& init);
    /// Getter of the `tag` attribute.
    /// [`PeriodicSyncEvent.tag`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEvent/tag)
    [[nodiscard]] jsbind::String tag() const;
};

