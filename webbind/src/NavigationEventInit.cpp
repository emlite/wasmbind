#include <webbind/NavigationEventInit.hpp>
#include <webbind/EventTarget.hpp>

using emlite::Val;
namespace webbind {

NavigationEventInit::NavigationEventInit(Handle h) noexcept : UIEventInit(emlite::Val::take_ownership(h)) {}
NavigationEventInit NavigationEventInit::take_ownership(Handle h) noexcept {
        return NavigationEventInit(h);
    }
NavigationEventInit::NavigationEventInit(const emlite::Val &val) noexcept: UIEventInit(val) {}
NavigationEventInit::NavigationEventInit() noexcept: UIEventInit(emlite::Val::object()) {}
NavigationEventInit NavigationEventInit::clone() const noexcept { return *this; }

SpatialNavigationDirection NavigationEventInit::dir() const {
    return emlite::Val::get("dir").as<SpatialNavigationDirection>();
}

void NavigationEventInit::dir(const SpatialNavigationDirection& value) {
    emlite::Val::set("dir", value);
}

EventTarget NavigationEventInit::relatedTarget() const {
    return emlite::Val::get("relatedTarget").as<EventTarget>();
}

void NavigationEventInit::relatedTarget(const EventTarget& value) {
    emlite::Val::set("relatedTarget", value);
}


} // namespace webbind