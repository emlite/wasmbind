#include <webbind/HIDConnectionEventInit.hpp>
#include <webbind/HIDDevice.hpp>

namespace webbind {

HIDConnectionEventInit::HIDConnectionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
HIDConnectionEventInit HIDConnectionEventInit::take_ownership(Handle h) noexcept {
    return HIDConnectionEventInit(h);
}

HIDConnectionEventInit::HIDConnectionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

HIDConnectionEventInit::HIDConnectionEventInit() noexcept: EventInit(emlite::Val::object()) {}

HIDConnectionEventInit HIDConnectionEventInit::clone() const noexcept { return *this; }

HIDDevice HIDConnectionEventInit::device() const {
    return emlite::Val::get("device").as<HIDDevice>();
}

void HIDConnectionEventInit::device(const HIDDevice& value) {
    emlite::Val::set("device", value);
}


} // namespace webbind