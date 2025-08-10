#include <webbind/PageTransitionEvent.hpp>
#include <webbind/PageTransitionEventInit.hpp>

namespace webbind {

PageTransitionEvent PageTransitionEvent::take_ownership(Handle h) noexcept {
        return PageTransitionEvent(h);
    }
PageTransitionEvent PageTransitionEvent::clone() const noexcept { return *this; }
emlite::Val PageTransitionEvent::instance() noexcept { return emlite::Val::global("PageTransitionEvent"); }
PageTransitionEvent::PageTransitionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PageTransitionEvent::PageTransitionEvent(const emlite::Val &val) noexcept: Event(val) {}

PageTransitionEvent::PageTransitionEvent(const jsbind::String& type) : Event(emlite::Val::global("PageTransitionEvent").new_(type)) {}

PageTransitionEvent::PageTransitionEvent(const jsbind::String& type, const PageTransitionEventInit& eventInitDict) : Event(emlite::Val::global("PageTransitionEvent").new_(type, eventInitDict)) {}

bool PageTransitionEvent::persisted() const {
    return Event::get("persisted").as<bool>();
}


} // namespace webbind