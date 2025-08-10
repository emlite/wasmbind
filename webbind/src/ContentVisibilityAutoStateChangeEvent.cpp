#include "webbind/ContentVisibilityAutoStateChangeEvent.hpp"
#include "webbind/ContentVisibilityAutoStateChangeEventInit.hpp"

namespace webbind {

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent::take_ownership(Handle h) noexcept {
        return ContentVisibilityAutoStateChangeEvent(h);
    }
ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent::clone() const noexcept { return *this; }
emlite::Val ContentVisibilityAutoStateChangeEvent::instance() noexcept { return emlite::Val::global("ContentVisibilityAutoStateChangeEvent"); }
ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const emlite::Val &val) noexcept: Event(val) {}

ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const jsbind::String& type) : Event(emlite::Val::global("ContentVisibilityAutoStateChangeEvent").new_(type)) {}

ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const jsbind::String& type, const ContentVisibilityAutoStateChangeEventInit& eventInitDict) : Event(emlite::Val::global("ContentVisibilityAutoStateChangeEvent").new_(type, eventInitDict)) {}

bool ContentVisibilityAutoStateChangeEvent::skipped() const {
    return Event::get("skipped").as<bool>();
}


} // namespace webbind