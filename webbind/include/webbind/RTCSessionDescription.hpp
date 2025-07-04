#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "RTCPeerConnection.hpp"
#include "enums.hpp"


class RTCSessionDescription : public emlite::Val {
    explicit RTCSessionDescription(Handle h) noexcept;

public:
    explicit RTCSessionDescription(const emlite::Val &val) noexcept;
    static RTCSessionDescription take_ownership(Handle h) noexcept;

    RTCSessionDescription clone() const noexcept;
    RTCSessionDescription(const RTCSessionDescriptionInit& descriptionInitDict);
    RTCSdpType type() const;
    jsbind::DOMString sdp() const;
    RTCSessionDescriptionInit toJSON();
};

