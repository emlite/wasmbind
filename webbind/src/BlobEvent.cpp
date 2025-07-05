#include <webbind/BlobEvent.hpp>
#include <webbind/Blob.hpp>


BlobEvent BlobEvent::take_ownership(Handle h) noexcept {
        return BlobEvent(h);
    }
BlobEvent BlobEvent::clone() const noexcept { return *this; }
BlobEvent::BlobEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BlobEvent::BlobEvent(const emlite::Val &val) noexcept: Event(val) {}


BlobEvent::BlobEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("BlobEvent").new_(type, eventInitDict)) {}

Blob BlobEvent::data() const {
    return Event::get("data").as<Blob>();
}

jsbind::Any BlobEvent::timecode() const {
    return Event::get("timecode").as<jsbind::Any>();
}

