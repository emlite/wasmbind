#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "MediaEncryptedEventInit.hpp"

namespace webbind {

/// Interface MediaEncryptedEvent
/// [`MediaEncryptedEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent)
class MediaEncryptedEvent : public Event {
    explicit MediaEncryptedEvent(Handle h) noexcept;
public:
    explicit MediaEncryptedEvent(const emlite::Val &val) noexcept;
    static MediaEncryptedEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaEncryptedEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaEncryptedEvent(..)` constructor, creating a new MediaEncryptedEvent instance
    MediaEncryptedEvent(const jsbind::String& type);
    /// The `new MediaEncryptedEvent(..)` constructor, creating a new MediaEncryptedEvent instance
    MediaEncryptedEvent(const jsbind::String& type, const MediaEncryptedEventInit& eventInitDict);
    /// [`MediaEncryptedEvent.initDataType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initDataType)
    /// [`MediaEncryptedEvent.initDataType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initDataType)
    [[nodiscard]] jsbind::String initDataType() const;
    /// [`MediaEncryptedEvent.initData`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initData)
    /// [`MediaEncryptedEvent.initData`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initData)
    [[nodiscard]] jsbind::ArrayBuffer initData() const;
};

} // namespace webbind