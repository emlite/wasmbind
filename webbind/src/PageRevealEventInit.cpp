#include <webbind/PageRevealEventInit.hpp>
#include <webbind/ViewTransition.hpp>

using emlite::Val;
namespace webbind {

PageRevealEventInit::PageRevealEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PageRevealEventInit PageRevealEventInit::take_ownership(Handle h) noexcept {
        return PageRevealEventInit(h);
    }
PageRevealEventInit::PageRevealEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PageRevealEventInit::PageRevealEventInit() noexcept: EventInit(emlite::Val::object()) {}
PageRevealEventInit PageRevealEventInit::clone() const noexcept { return *this; }

ViewTransition PageRevealEventInit::viewTransition() const {
    return emlite::Val::get("viewTransition").as<ViewTransition>();
}

void PageRevealEventInit::viewTransition(const ViewTransition& value) {
    emlite::Val::set("viewTransition", value);
}


} // namespace webbind