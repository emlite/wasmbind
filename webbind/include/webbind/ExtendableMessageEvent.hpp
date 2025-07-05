#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class MessagePort;


class ExtendableMessageEvent : public ExtendableEvent {
    explicit ExtendableMessageEvent(Handle h) noexcept;

public:
    explicit ExtendableMessageEvent(const emlite::Val &val) noexcept;
    static ExtendableMessageEvent take_ownership(Handle h) noexcept;

    ExtendableMessageEvent clone() const noexcept;
    ExtendableMessageEvent(const jsbind::DOMString& type);
    ExtendableMessageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any data() const;
    jsbind::USVString origin() const;
    jsbind::DOMString lastEventId() const;
    jsbind::Any source() const;
    jsbind::FrozenArray<jsbind::Any> ports() const;
};

