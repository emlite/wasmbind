#include "webbind/FocusEvent.hpp"
#include "webbind/FocusEventInit.hpp"
#include "webbind/EventTarget.hpp"

namespace webbind {

FocusEvent FocusEvent::take_ownership(Handle h) noexcept {
        return FocusEvent(h);
    }
FocusEvent FocusEvent::clone() const noexcept { return *this; }
emlite::Val FocusEvent::instance() noexcept { return emlite::Val::global("FocusEvent"); }
FocusEvent::FocusEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
FocusEvent::FocusEvent(const emlite::Val &val) noexcept: UIEvent(val) {}

FocusEvent::FocusEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("FocusEvent").new_(type)) {}

FocusEvent::FocusEvent(const jsbind::String& type, const FocusEventInit& eventInitDict) : UIEvent(emlite::Val::global("FocusEvent").new_(type, eventInitDict)) {}

EventTarget FocusEvent::relatedTarget() const {
    return UIEvent::get("relatedTarget").as<EventTarget>();
}


} // namespace webbind