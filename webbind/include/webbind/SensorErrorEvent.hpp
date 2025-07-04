#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DOMException;


class SensorErrorEvent : public Event {
    explicit SensorErrorEvent(Handle h) noexcept;

public:
    explicit SensorErrorEvent(const emlite::Val &val) noexcept;
    static SensorErrorEvent take_ownership(Handle h) noexcept;

    SensorErrorEvent clone() const noexcept;
    SensorErrorEvent(const jsbind::DOMString& type, const jsbind::Any& errorEventInitDict);
    DOMException error() const;
};

