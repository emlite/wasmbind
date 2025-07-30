#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class MediaKeyMessageEvent : public Event {
    explicit MediaKeyMessageEvent(Handle h) noexcept;

public:
    explicit MediaKeyMessageEvent(const emlite::Val &val) noexcept;
    static MediaKeyMessageEvent take_ownership(Handle h) noexcept;

    MediaKeyMessageEvent clone() const noexcept;
    MediaKeyMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    MediaKeyMessageType messageType() const;
    jsbind::ArrayBuffer message() const;
};

