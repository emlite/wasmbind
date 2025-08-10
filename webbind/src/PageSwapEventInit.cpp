#include <webbind/PageSwapEventInit.hpp>
#include <webbind/NavigationActivation.hpp>
#include <webbind/ViewTransition.hpp>

using emlite::Val;
namespace webbind {

PageSwapEventInit::PageSwapEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PageSwapEventInit PageSwapEventInit::take_ownership(Handle h) noexcept {
        return PageSwapEventInit(h);
    }
PageSwapEventInit::PageSwapEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PageSwapEventInit::PageSwapEventInit() noexcept: EventInit(emlite::Val::object()) {}
PageSwapEventInit PageSwapEventInit::clone() const noexcept { return *this; }

NavigationActivation PageSwapEventInit::activation() const {
    return emlite::Val::get("activation").as<NavigationActivation>();
}

void PageSwapEventInit::activation(const NavigationActivation& value) {
    emlite::Val::set("activation", value);
}

ViewTransition PageSwapEventInit::viewTransition() const {
    return emlite::Val::get("viewTransition").as<ViewTransition>();
}

void PageSwapEventInit::viewTransition(const ViewTransition& value) {
    emlite::Val::set("viewTransition", value);
}


} // namespace webbind