#include "webbind/FocusEventInit.hpp"
#include "webbind/EventTarget.hpp"

using emlite::Val;
namespace webbind {

FocusEventInit::FocusEventInit(Handle h) noexcept : UIEventInit(emlite::Val::take_ownership(h)) {}
FocusEventInit FocusEventInit::take_ownership(Handle h) noexcept {
        return FocusEventInit(h);
    }
FocusEventInit::FocusEventInit(const emlite::Val &val) noexcept: UIEventInit(val) {}
FocusEventInit::FocusEventInit() noexcept: UIEventInit(emlite::Val::object()) {}
FocusEventInit FocusEventInit::clone() const noexcept { return *this; }

EventTarget FocusEventInit::relatedTarget() const {
    return emlite::Val::get("relatedTarget").as<EventTarget>();
}

void FocusEventInit::relatedTarget(const EventTarget& value) {
    emlite::Val::set("relatedTarget", value);
}


} // namespace webbind