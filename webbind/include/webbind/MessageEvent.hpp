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
    MessageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any data() const;
    jsbind::USVString origin() const;
    jsbind::DOMString lastEventId() const;
    jsbind::Any source() const;
    jsbind::FrozenArray<jsbind::Any> ports() const;
    jsbind::Undefined initMessageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::USVString& origin, const jsbind::DOMString& lastEventId, const jsbind::Any& source, const jsbind::Sequence<jsbind::Any>& ports);
};

