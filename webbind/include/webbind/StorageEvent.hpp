#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "StorageEventInit.hpp"

namespace webbind {

class Storage;

/// Interface StorageEvent
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
    StorageEvent(const jsbind::String& type, const StorageEventInit& eventInitDict);
    /// [`StorageEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/key)
    /// [`StorageEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/key)
    [[nodiscard]] jsbind::String key() const;
    /// [`StorageEvent.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/oldValue)
    /// [`StorageEvent.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/oldValue)
    [[nodiscard]] jsbind::String oldValue() const;
    /// [`StorageEvent.newValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/newValue)
    /// [`StorageEvent.newValue`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/newValue)
    [[nodiscard]] jsbind::String newValue() const;
    /// [`StorageEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/url)
    /// [`StorageEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`StorageEvent.storageArea`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent/storageArea)
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

} // namespace webbind