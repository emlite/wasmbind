#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "PeriodicSyncEventInit.hpp"

namespace webbind {

/// Interface PeriodicSyncEvent
/// [`PeriodicSyncEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEvent)
class PeriodicSyncEvent : public ExtendableEvent {
    explicit PeriodicSyncEvent(Handle h) noexcept;
public:
    explicit PeriodicSyncEvent(const emlite::Val &val) noexcept;
    static PeriodicSyncEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PeriodicSyncEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PeriodicSyncEvent(..)` constructor, creating a new PeriodicSyncEvent instance
    PeriodicSyncEvent(const jsbind::String& type, const PeriodicSyncEventInit& init);
    /// Getter of the `tag` attribute.
    /// [`PeriodicSyncEvent.tag`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncEvent/tag)
    [[nodiscard]] jsbind::String tag() const;
};

} // namespace webbind