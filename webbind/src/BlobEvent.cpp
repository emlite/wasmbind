#include <webbind/BlobEvent.hpp>
#include <webbind/BlobEventInit.hpp>
#include <webbind/Blob.hpp>

namespace webbind {

BlobEvent BlobEvent::take_ownership(Handle h) noexcept {
    return BlobEvent(h);
}

BlobEvent BlobEvent::clone() const noexcept { return *this; }

emlite::Val BlobEvent::instance() noexcept { return emlite::Val::global("BlobEvent"); }

BlobEvent::BlobEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

BlobEvent::BlobEvent(const emlite::Val &val) noexcept: Event(val) {}

BlobEvent::BlobEvent(const jsbind::String& type, const BlobEventInit& eventInitDict) : Event(emlite::Val::global("BlobEvent").new_(type, eventInitDict)) {}

Blob BlobEvent::data() const {
    return Event::get("data").as<Blob>();
}

jsbind::Any BlobEvent::timecode() const {
    return Event::get("timecode").as<jsbind::Any>();
}


} // namespace webbind