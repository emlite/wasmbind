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
    ExtendableMessageEvent(const jsbind::String& type);
    ExtendableMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::Any data() const;
    jsbind::String origin() const;
    jsbind::String lastEventId() const;
    jsbind::Any source() const;
    jsbind::TypedArray<jsbind::Any> ports() const;
};

