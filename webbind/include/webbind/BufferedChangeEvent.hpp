#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class TimeRanges;


class BufferedChangeEvent : public Event {
    explicit BufferedChangeEvent(Handle h) noexcept;

public:
    explicit BufferedChangeEvent(const emlite::Val &val) noexcept;
    static BufferedChangeEvent take_ownership(Handle h) noexcept;

    BufferedChangeEvent clone() const noexcept;
    BufferedChangeEvent(const jsbind::DOMString& type);
    BufferedChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    TimeRanges addedRanges() const;
    TimeRanges removedRanges() const;
};

