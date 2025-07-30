#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class RTCIceTransport;


class RTCDtlsTransport : public EventTarget {
    explicit RTCDtlsTransport(Handle h) noexcept;

public:
    explicit RTCDtlsTransport(const emlite::Val &val) noexcept;
    static RTCDtlsTransport take_ownership(Handle h) noexcept;

    RTCDtlsTransport clone() const noexcept;
    RTCIceTransport iceTransport() const;
    RTCDtlsTransportState state() const;
    jsbind::TypedArray<jsbind::ArrayBuffer> getRemoteCertificates();
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

