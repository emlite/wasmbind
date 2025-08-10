#include <webbind/BlobEventInit.hpp>
#include <webbind/Blob.hpp>

using emlite::Val;
namespace webbind {

BlobEventInit::BlobEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
BlobEventInit BlobEventInit::take_ownership(Handle h) noexcept {
        return BlobEventInit(h);
    }
BlobEventInit::BlobEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
BlobEventInit::BlobEventInit() noexcept: EventInit(emlite::Val::object()) {}
BlobEventInit BlobEventInit::clone() const noexcept { return *this; }

Blob BlobEventInit::data() const {
    return emlite::Val::get("data").as<Blob>();
}

void BlobEventInit::data(const Blob& value) {
    emlite::Val::set("data", value);
}

jsbind::Any BlobEventInit::timecode() const {
    return emlite::Val::get("timecode").as<jsbind::Any>();
}

void BlobEventInit::timecode(const jsbind::Any& value) {
    emlite::Val::set("timecode", value);
}


} // namespace webbind