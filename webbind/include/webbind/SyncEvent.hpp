#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


/// The SyncEvent class.
/// [`SyncEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent)
class SyncEvent : public ExtendableEvent {
    explicit SyncEvent(Handle h) noexcept;

public:
    explicit SyncEvent(const emlite::Val &val) noexcept;
    static SyncEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SyncEvent clone() const noexcept;
    /// The `new SyncEvent(..)` constructor, creating a new SyncEvent instance
    SyncEvent(const jsbind::String& type, const jsbind::Any& init);
    /// Getter of the `tag` attribute.
    /// [`SyncEvent.tag`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/tag)
    [[nodiscard]] jsbind::String tag() const;
    /// Getter of the `lastChance` attribute.
    /// [`SyncEvent.lastChance`](https://developer.mozilla.org/en-US/docs/Web/API/SyncEvent/lastChance)
    [[nodiscard]] bool lastChance() const;
};

