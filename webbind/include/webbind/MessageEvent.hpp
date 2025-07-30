#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MessagePort;


class MessageEvent : public Event {
    explicit MessageEvent(Handle h) noexcept;

public:
    explicit MessageEvent(const emlite::Val &val) noexcept;
    static MessageEvent take_ownership(Handle h) noexcept;

    MessageEvent clone() const noexcept;
    MessageEvent(const jsbind::String& type);
    MessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::Any data() const;
    jsbind::String origin() const;
    jsbind::String lastEventId() const;
    jsbind::Any source() const;
    jsbind::TypedArray<jsbind::Any> ports() const;
    jsbind::Undefined initMessageEvent(const jsbind::String& type);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source);
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source, const jsbind::TypedArray<jsbind::Any>& ports);
};

