#include <webbind/FocusEvent.hpp>
#include <webbind/EventTarget.hpp>


FocusEvent FocusEvent::take_ownership(Handle h) noexcept {
        return FocusEvent(h);
    }
FocusEvent FocusEvent::clone() const noexcept { return *this; }
FocusEvent::FocusEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
FocusEvent::FocusEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


FocusEvent::FocusEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("FocusEvent").new_(type)) {}

FocusEvent::FocusEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : UIEvent(emlite::Val::global("FocusEvent").new_(type, eventInitDict)) {}

EventTarget FocusEvent::relatedTarget() const {
    return UIEvent::get("relatedTarget").as<EventTarget>();
}

