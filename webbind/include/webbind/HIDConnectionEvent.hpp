#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HIDDevice;


class HIDConnectionEvent : public Event {
    explicit HIDConnectionEvent(Handle h) noexcept;

public:
    explicit HIDConnectionEvent(const emlite::Val &val) noexcept;
    static HIDConnectionEvent take_ownership(Handle h) noexcept;

    HIDConnectionEvent clone() const noexcept;
    HIDConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    HIDDevice device() const;
};

