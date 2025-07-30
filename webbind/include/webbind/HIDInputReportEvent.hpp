#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HIDDevice;


class HIDInputReportEvent : public Event {
    explicit HIDInputReportEvent(Handle h) noexcept;

public:
    explicit HIDInputReportEvent(const emlite::Val &val) noexcept;
    static HIDInputReportEvent take_ownership(Handle h) noexcept;

    HIDInputReportEvent clone() const noexcept;
    HIDInputReportEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    HIDDevice device() const;
    unsigned char reportId() const;
    jsbind::DataView data() const;
};

