#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "SyncEventInit.hpp"

namespace webbind {

/// Interface SyncEvent
/// [`SyncEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent)
class SyncEvent : public ExtendableEvent {
    explicit SyncEvent(Handle h) noexcept;
public:
    explicit SyncEvent(const emlite::Val &val) noexcept;
    static SyncEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SyncEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SyncEvent(..)` constructor, creating a new SyncEvent instance
    SyncEvent(const jsbind::String& type, const SyncEventInit& init);
    /// [`SyncEvent.tag`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/tag)
    /// [`SyncEvent.tag`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/tag)
    [[nodiscard]] jsbind::String tag() const;
    /// [`SyncEvent.lastChance`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/lastChance)
    /// [`SyncEvent.lastChance`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/lastChance)
    [[nodiscard]] bool lastChance() const;
};

} // namespace webbind