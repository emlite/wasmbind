#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The MediaKeyMessageEvent class.
/// [`MediaKeyMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent)
class MediaKeyMessageEvent : public Event {
    explicit MediaKeyMessageEvent(Handle h) noexcept;

public:
    explicit MediaKeyMessageEvent(const emlite::Val &val) noexcept;
    static MediaKeyMessageEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaKeyMessageEvent clone() const noexcept;
    /// The `new MediaKeyMessageEvent(..)` constructor, creating a new MediaKeyMessageEvent instance
    MediaKeyMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `messageType` attribute.
    /// [`MediaKeyMessageEvent.messageType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/messageType)
    [[nodiscard]] MediaKeyMessageType messageType() const;
    /// Getter of the `message` attribute.
    /// [`MediaKeyMessageEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent/message)
    [[nodiscard]] jsbind::ArrayBuffer message() const;
};

