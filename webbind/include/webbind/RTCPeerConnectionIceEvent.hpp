#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCIceCandidate;


class RTCPeerConnectionIceEvent : public Event {
    explicit RTCPeerConnectionIceEvent(Handle h) noexcept;

public:
    explicit RTCPeerConnectionIceEvent(const emlite::Val &val) noexcept;
    static RTCPeerConnectionIceEvent take_ownership(Handle h) noexcept;

    RTCPeerConnectionIceEvent clone() const noexcept;
    RTCPeerConnectionIceEvent(const jsbind::String& type);
    RTCPeerConnectionIceEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    RTCIceCandidate candidate() const;
    jsbind::String url() const;
};

