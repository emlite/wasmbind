#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NDEFMessage;


class NDEFReadingEvent : public Event {
    explicit NDEFReadingEvent(Handle h) noexcept;

public:
    explicit NDEFReadingEvent(const emlite::Val &val) noexcept;
    static NDEFReadingEvent take_ownership(Handle h) noexcept;

    NDEFReadingEvent clone() const noexcept;
    NDEFReadingEvent(const jsbind::DOMString& type, const jsbind::Any& readingEventInitDict);
    jsbind::DOMString serialNumber() const;
    NDEFMessage message() const;
};

