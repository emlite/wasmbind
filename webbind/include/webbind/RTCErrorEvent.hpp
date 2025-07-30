#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCError;


class RTCErrorEvent : public Event {
    explicit RTCErrorEvent(Handle h) noexcept;

public:
    explicit RTCErrorEvent(const emlite::Val &val) noexcept;
    static RTCErrorEvent take_ownership(Handle h) noexcept;

    RTCErrorEvent clone() const noexcept;
    RTCErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    RTCError error() const;
};

