#include <webbind/PageRevealEvent.hpp>
#include <webbind/PageRevealEventInit.hpp>
#include <webbind/ViewTransition.hpp>

namespace webbind {

PageRevealEvent PageRevealEvent::take_ownership(Handle h) noexcept {
    return PageRevealEvent(h);
}

PageRevealEvent PageRevealEvent::clone() const noexcept { return *this; }

emlite::Val PageRevealEvent::instance() noexcept { return emlite::Val::global("PageRevealEvent"); }

PageRevealEvent::PageRevealEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

PageRevealEvent::PageRevealEvent(const emlite::Val &val) noexcept: Event(val) {}

PageRevealEvent::PageRevealEvent(const jsbind::String& type) : Event(emlite::Val::global("PageRevealEvent").new_(type)) {}

PageRevealEvent::PageRevealEvent(const jsbind::String& type, const PageRevealEventInit& eventInitDict) : Event(emlite::Val::global("PageRevealEvent").new_(type, eventInitDict)) {}

ViewTransition PageRevealEvent::viewTransition() const {
    return Event::get("viewTransition").as<ViewTransition>();
}


} // namespace webbind