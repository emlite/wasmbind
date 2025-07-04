#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class RTCDtlsTransport;


class RTCSctpTransport : public EventTarget {
    explicit RTCSctpTransport(Handle h) noexcept;

public:
    explicit RTCSctpTransport(const emlite::Val &val) noexcept;
    static RTCSctpTransport take_ownership(Handle h) noexcept;

    RTCSctpTransport clone() const noexcept;
    RTCDtlsTransport transport() const;
    RTCSctpTransportState state() const;
    double maxMessageSize() const;
    unsigned short maxChannels() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
};

