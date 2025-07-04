#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Window;


class TimeEvent : public Event {
    explicit TimeEvent(Handle h) noexcept;

public:
    explicit TimeEvent(const emlite::Val &val) noexcept;
    static TimeEvent take_ownership(Handle h) noexcept;

    TimeEvent clone() const noexcept;
    jsbind::Any view() const;
    long detail() const;
    jsbind::Undefined initTimeEvent(const jsbind::DOMString& typeArg, const Window& viewArg, long detailArg);
};

