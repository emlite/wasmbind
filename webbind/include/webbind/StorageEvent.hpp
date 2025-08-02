#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Storage;


/// The StorageEvent class.
/// [`StorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent)
class StorageEvent : public Event {
    explicit StorageEvent(Handle h) noexcept;

public:
    explicit StorageEvent(const emlite::Val &val) noexcept;
    static StorageEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] StorageEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new StorageEvent(..)` constructor, creating a new StorageEvent instance
    StorageEvent(const jsbind::String& type);
    /// The `new StorageEvent(..)` constructor, creating a new StorageEvent instance
    StorageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `key` attribute.
    /// [`StorageEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/key)
    [[nodiscard]] jsbind::String key() const;
    /// Getter of the `oldValue` attribute.
    /// [`StorageEvent.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/oldValue)
    [[nodiscard]] jsbind::String oldValue() const;
    /// Getter of the `newValue` attribute.
    /// [`StorageEvent.newValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/newValue)
    [[nodiscard]] jsbind::String newValue() const;
    /// Getter of the `url` attribute.
    /// [`StorageEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `storageArea` attribute.
    /// [`StorageEvent.storageArea`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/storageArea)
    [[nodiscard]] Storage storageArea() const;
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url);
    /// The initStorageEvent method.
    /// [`StorageEvent.initStorageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/initStorageEvent)
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url, const Storage& storageArea);
};

