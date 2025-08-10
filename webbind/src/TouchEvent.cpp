#include <webbind/TouchEvent.hpp>
#include <webbind/TouchEventInit.hpp>
#include <webbind/TouchList.hpp>

namespace webbind {

TouchEvent TouchEvent::take_ownership(Handle h) noexcept {
    return TouchEvent(h);
}

TouchEvent TouchEvent::clone() const noexcept { return *this; }

emlite::Val TouchEvent::instance() noexcept { return emlite::Val::global("TouchEvent"); }

TouchEvent::TouchEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}

TouchEvent::TouchEvent(const emlite::Val &val) noexcept: UIEvent(val) {}

TouchEvent::TouchEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("TouchEvent").new_(type)) {}

TouchEvent::TouchEvent(const jsbind::String& type, const TouchEventInit& eventInitDict) : UIEvent(emlite::Val::global("TouchEvent").new_(type, eventInitDict)) {}

TouchList TouchEvent::touches() const {
    return UIEvent::get("touches").as<TouchList>();
}

TouchList TouchEvent::targetTouches() const {
    return UIEvent::get("targetTouches").as<TouchList>();
}

TouchList TouchEvent::changedTouches() const {
    return UIEvent::get("changedTouches").as<TouchList>();
}

bool TouchEvent::altKey() const {
    return UIEvent::get("altKey").as<bool>();
}

bool TouchEvent::metaKey() const {
    return UIEvent::get("metaKey").as<bool>();
}

bool TouchEvent::ctrlKey() const {
    return UIEvent::get("ctrlKey").as<bool>();
}

bool TouchEvent::shiftKey() const {
    return UIEvent::get("shiftKey").as<bool>();
}

bool TouchEvent::getModifierState(const jsbind::String& keyArg) {
    return UIEvent::call("getModifierState", keyArg).as<bool>();
}


} // namespace webbind