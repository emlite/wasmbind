#include <webbind/HIDConnectionEvent.hpp>
#include <webbind/HIDConnectionEventInit.hpp>
#include <webbind/HIDDevice.hpp>

namespace webbind {

HIDConnectionEvent HIDConnectionEvent::take_ownership(Handle h) noexcept {
        return HIDConnectionEvent(h);
    }
HIDConnectionEvent HIDConnectionEvent::clone() const noexcept { return *this; }
emlite::Val HIDConnectionEvent::instance() noexcept { return emlite::Val::global("HIDConnectionEvent"); }
HIDConnectionEvent::HIDConnectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
HIDConnectionEvent::HIDConnectionEvent(const emlite::Val &val) noexcept: Event(val) {}

HIDConnectionEvent::HIDConnectionEvent(const jsbind::String& type, const HIDConnectionEventInit& eventInitDict) : Event(emlite::Val::global("HIDConnectionEvent").new_(type, eventInitDict)) {}

HIDDevice HIDConnectionEvent::device() const {
    return Event::get("device").as<HIDDevice>();
}


} // namespace webbind