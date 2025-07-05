#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Storage;


class StorageEvent : public Event {
    explicit StorageEvent(Handle h) noexcept;

public:
    explicit StorageEvent(const emlite::Val &val) noexcept;
    static StorageEvent take_ownership(Handle h) noexcept;

    StorageEvent clone() const noexcept;
    StorageEvent(const jsbind::DOMString& type);
    StorageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString key() const;
    jsbind::DOMString oldValue() const;
    jsbind::DOMString newValue() const;
    jsbind::USVString url() const;
    Storage storageArea() const;
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key, const jsbind::DOMString& oldValue);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key, const jsbind::DOMString& oldValue, const jsbind::DOMString& newValue);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key, const jsbind::DOMString& oldValue, const jsbind::DOMString& newValue, const jsbind::USVString& url);
    jsbind::Undefined initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key, const jsbind::DOMString& oldValue, const jsbind::DOMString& newValue, const jsbind::USVString& url, const Storage& storageArea);
};

