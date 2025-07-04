#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class RTCDTMFSender : public EventTarget {
    explicit RTCDTMFSender(Handle h) noexcept;

public:
    explicit RTCDTMFSender(const emlite::Val &val) noexcept;
    static RTCDTMFSender take_ownership(Handle h) noexcept;

    RTCDTMFSender clone() const noexcept;
    jsbind::Undefined insertDTMF(const jsbind::DOMString& tones, unsigned long duration, unsigned long interToneGap);
    jsbind::Any ontonechange() const;
    void ontonechange(const jsbind::Any& value);
    bool canInsertDTMF() const;
    jsbind::DOMString toneBuffer() const;
};

