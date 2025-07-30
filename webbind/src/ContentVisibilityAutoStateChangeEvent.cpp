#include <webbind/ContentVisibilityAutoStateChangeEvent.hpp>


ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent::take_ownership(Handle h) noexcept {
        return ContentVisibilityAutoStateChangeEvent(h);
    }
ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent::clone() const noexcept { return *this; }
ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const jsbind::String& type) : Event(emlite::Val::global("ContentVisibilityAutoStateChangeEvent").new_(type)) {}

ContentVisibilityAutoStateChangeEvent::ContentVisibilityAutoStateChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("ContentVisibilityAutoStateChangeEvent").new_(type, eventInitDict)) {}

bool ContentVisibilityAutoStateChangeEvent::skipped() const {
    return Event::get("skipped").as<bool>();
}

