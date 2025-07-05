#include <webbind/ContentIndexEvent.hpp>


ContentIndexEvent ContentIndexEvent::take_ownership(Handle h) noexcept {
        return ContentIndexEvent(h);
    }
ContentIndexEvent ContentIndexEvent::clone() const noexcept { return *this; }
ContentIndexEvent::ContentIndexEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
ContentIndexEvent::ContentIndexEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


ContentIndexEvent::ContentIndexEvent(const jsbind::DOMString& type, const jsbind::Any& init) : ExtendableEvent(emlite::Val::global("ContentIndexEvent").new_(type, init)) {}

jsbind::DOMString ContentIndexEvent::id() const {
    return ExtendableEvent::get("id").as<jsbind::DOMString>();
}

