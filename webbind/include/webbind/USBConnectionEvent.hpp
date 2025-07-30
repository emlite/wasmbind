#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class USBDevice;


class USBConnectionEvent : public Event {
    explicit USBConnectionEvent(Handle h) noexcept;

public:
    explicit USBConnectionEvent(const emlite::Val &val) noexcept;
    static USBConnectionEvent take_ownership(Handle h) noexcept;

    USBConnectionEvent clone() const noexcept;
    USBConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    USBDevice device() const;
};

