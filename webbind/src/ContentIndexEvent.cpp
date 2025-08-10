#include <webbind/ContentIndexEvent.hpp>
#include <webbind/ContentIndexEventInit.hpp>

namespace webbind {

ContentIndexEvent ContentIndexEvent::take_ownership(Handle h) noexcept {
    return ContentIndexEvent(h);
}

ContentIndexEvent ContentIndexEvent::clone() const noexcept { return *this; }

emlite::Val ContentIndexEvent::instance() noexcept { return emlite::Val::global("ContentIndexEvent"); }

ContentIndexEvent::ContentIndexEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}

ContentIndexEvent::ContentIndexEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

ContentIndexEvent::ContentIndexEvent(const jsbind::String& type, const ContentIndexEventInit& init) : ExtendableEvent(emlite::Val::global("ContentIndexEvent").new_(type, init)) {}

jsbind::String ContentIndexEvent::id() const {
    return ExtendableEvent::get("id").as<jsbind::String>();
}


} // namespace webbind