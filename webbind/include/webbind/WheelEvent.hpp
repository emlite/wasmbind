#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MouseEvent.hpp"
#include "enums.hpp"


class WheelEvent : public MouseEvent {
    explicit WheelEvent(Handle h) noexcept;

public:
    explicit WheelEvent(const emlite::Val &val) noexcept;
    static WheelEvent take_ownership(Handle h) noexcept;

    WheelEvent clone() const noexcept;
    WheelEvent(const jsbind::String& type);
    WheelEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    double deltaX() const;
    double deltaY() const;
    double deltaZ() const;
    unsigned long deltaMode() const;
};

