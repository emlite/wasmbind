#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class SFrameTransformErrorEvent : public Event {
    explicit SFrameTransformErrorEvent(Handle h) noexcept;

public:
    explicit SFrameTransformErrorEvent(const emlite::Val &val) noexcept;
    static SFrameTransformErrorEvent take_ownership(Handle h) noexcept;

    SFrameTransformErrorEvent clone() const noexcept;
    SFrameTransformErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    SFrameTransformErrorEventType errorType() const;
    jsbind::Any keyID() const;
    jsbind::Any frame() const;
};

