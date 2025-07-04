#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class RTCDataChannel : public EventTarget {
    explicit RTCDataChannel(Handle h) noexcept;

public:
    explicit RTCDataChannel(const emlite::Val &val) noexcept;
    static RTCDataChannel take_ownership(Handle h) noexcept;

    RTCDataChannel clone() const noexcept;
    jsbind::USVString label() const;
    bool ordered() const;
    unsigned short maxPacketLifeTime() const;
    unsigned short maxRetransmits() const;
    jsbind::USVString protocol() const;
    bool negotiated() const;
    unsigned short id() const;
    RTCDataChannelState readyState() const;
    unsigned long bufferedAmount() const;
    unsigned long bufferedAmountLowThreshold() const;
    void bufferedAmountLowThreshold(unsigned long value);
    jsbind::Any onopen() const;
    void onopen(const jsbind::Any& value);
    jsbind::Any onbufferedamountlow() const;
    void onbufferedamountlow(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onclosing() const;
    void onclosing(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::Undefined close();
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    BinaryType binaryType() const;
    void binaryType(const BinaryType& value);
    jsbind::Undefined send(const jsbind::Any& data);
    RTCPriorityType priority() const;
};

