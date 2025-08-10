#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "enums.hpp"

namespace webbind {

class MediaKeyMessageEventInit;

/// Interface MediaKeyMessageEvent
/// [`MediaKeyMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent)
class MediaKeyMessageEvent : public Event {
    explicit MediaKeyMessageEvent(Handle h) noexcept;
public:
    explicit MediaKeyMessageEvent(const emlite::Val &val) noexcept;
    static MediaKeyMessageEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeyMessageEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaKeyMessageEvent(..)` constructor, creating a new MediaKeyMessageEvent instance
    MediaKeyMessageEvent(const jsbind::String& type, const MediaKeyMessageEventInit& eventInitDict);
    /// [`MediaKeyMessageEvent.messageType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/messageType)
    /// [`MediaKeyMessageEvent.messageType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/messageType)
    [[nodiscard]] MediaKeyMessageType messageType() const;
    /// [`MediaKeyMessageEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/message)
    /// [`MediaKeyMessageEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/message)
    [[nodiscard]] jsbind::ArrayBuffer message() const;
};

} // namespace webbind