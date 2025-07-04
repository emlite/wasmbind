#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCRtpScriptTransformer;


class RTCTransformEvent : public Event {
    explicit RTCTransformEvent(Handle h) noexcept;

public:
    explicit RTCTransformEvent(const emlite::Val &val) noexcept;
    static RTCTransformEvent take_ownership(Handle h) noexcept;

    RTCTransformEvent clone() const noexcept;
    RTCRtpScriptTransformer transformer() const;
};

