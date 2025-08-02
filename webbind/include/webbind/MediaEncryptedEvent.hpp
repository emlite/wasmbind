#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The MediaEncryptedEvent class.
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
    MediaEncryptedEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `initDataType` attribute.
    /// [`MediaEncryptedEvent.initDataType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initDataType)
    [[nodiscard]] jsbind::String initDataType() const;
    /// Getter of the `initData` attribute.
    /// [`MediaEncryptedEvent.initData`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent/initData)
    [[nodiscard]] jsbind::ArrayBuffer initData() const;
};

