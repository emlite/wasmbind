#include <webbind/HIDConnectionEvent.hpp>
#include <webbind/HIDDevice.hpp>


HIDConnectionEvent HIDConnectionEvent::take_ownership(Handle h) noexcept {
        return HIDConnectionEvent(h);
    }
HIDConnectionEvent HIDConnectionEvent::clone() const noexcept { return *this; }
HIDConnectionEvent::HIDConnectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
HIDConnectionEvent::HIDConnectionEvent(const emlite::Val &val) noexcept: Event(val) {}


HIDConnectionEvent::HIDConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("HIDConnectionEvent").new_(type, eventInitDict)) {}

HIDDevice HIDConnectionEvent::device() const {
    return Event::get("device").as<HIDDevice>();
}

