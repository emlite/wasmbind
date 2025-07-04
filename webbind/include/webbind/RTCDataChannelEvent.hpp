#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCDataChannel;


class RTCDataChannelEvent : public Event {
    explicit RTCDataChannelEvent(Handle h) noexcept;

public:
    explicit RTCDataChannelEvent(const emlite::Val &val) noexcept;
    static RTCDataChannelEvent take_ownership(Handle h) noexcept;

    RTCDataChannelEvent clone() const noexcept;
    RTCDataChannelEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    RTCDataChannel channel() const;
};

