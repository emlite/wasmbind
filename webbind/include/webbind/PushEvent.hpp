#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"

namespace webbind {

class PushEventInit;
class PushMessageData;

/// Interface PushEvent
/// [`PushEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent)
class PushEvent : public ExtendableEvent {
    explicit PushEvent(Handle h) noexcept;
public:
    explicit PushEvent(const emlite::Val &val) noexcept;
    static PushEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PushEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PushEvent(..)` constructor, creating a new PushEvent instance
    PushEvent(const jsbind::String& type);
    /// The `new PushEvent(..)` constructor, creating a new PushEvent instance
    PushEvent(const jsbind::String& type, const PushEventInit& eventInitDict);
    /// [`PushEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent/data)
    /// [`PushEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent/data)
    [[nodiscard]] PushMessageData data() const;
};

} // namespace webbind