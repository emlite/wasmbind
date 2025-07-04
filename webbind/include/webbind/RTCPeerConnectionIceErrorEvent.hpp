#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class RTCPeerConnectionIceErrorEvent : public Event {
    explicit RTCPeerConnectionIceErrorEvent(Handle h) noexcept;

public:
    explicit RTCPeerConnectionIceErrorEvent(const emlite::Val &val) noexcept;
    static RTCPeerConnectionIceErrorEvent take_ownership(Handle h) noexcept;

    RTCPeerConnectionIceErrorEvent clone() const noexcept;
    RTCPeerConnectionIceErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString address() const;
    unsigned short port() const;
    jsbind::USVString url() const;
    unsigned short errorCode() const;
    jsbind::USVString errorText() const;
};

