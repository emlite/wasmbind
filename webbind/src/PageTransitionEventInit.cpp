#include "webbind/PageTransitionEventInit.hpp"

using emlite::Val;
namespace webbind {

PageTransitionEventInit::PageTransitionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PageTransitionEventInit PageTransitionEventInit::take_ownership(Handle h) noexcept {
        return PageTransitionEventInit(h);
    }
PageTransitionEventInit::PageTransitionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PageTransitionEventInit::PageTransitionEventInit() noexcept: EventInit(emlite::Val::object()) {}
PageTransitionEventInit PageTransitionEventInit::clone() const noexcept { return *this; }

bool PageTransitionEventInit::persisted() const {
    return emlite::Val::get("persisted").as<bool>();
}

void PageTransitionEventInit::persisted(bool value) {
    emlite::Val::set("persisted", value);
}


} // namespace webbind