#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class CapturedMouseEvent : public Event {
    explicit CapturedMouseEvent(Handle h) noexcept;

public:
    explicit CapturedMouseEvent(const emlite::Val &val) noexcept;
    static CapturedMouseEvent take_ownership(Handle h) noexcept;

    CapturedMouseEvent clone() const noexcept;
    CapturedMouseEvent(const jsbind::DOMString& type);
    CapturedMouseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    long surfaceX() const;
    long surfaceY() const;
};

