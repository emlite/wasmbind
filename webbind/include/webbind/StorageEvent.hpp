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
    StorageEvent(const jsbind::String& type);
    StorageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String key() const;
    jsbind::String oldValue() const;
    jsbind::String newValue() const;
    jsbind::String url() const;
    Storage storageArea() const;
    jsbind::Undefined initStorageEvent(const jsbind::String& type);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url);
    jsbind::Undefined initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url, const Storage& storageArea);
};

