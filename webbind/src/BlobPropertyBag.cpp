#include "webbind/BlobPropertyBag.hpp"

using emlite::Val;
namespace webbind {

BlobPropertyBag::BlobPropertyBag(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BlobPropertyBag BlobPropertyBag::take_ownership(Handle h) noexcept {
        return BlobPropertyBag(h);
    }
BlobPropertyBag::BlobPropertyBag(const emlite::Val &val) noexcept: emlite::Val(val) {}
BlobPropertyBag::BlobPropertyBag() noexcept: emlite::Val(emlite::Val::object()) {}
BlobPropertyBag BlobPropertyBag::clone() const noexcept { return *this; }

jsbind::String BlobPropertyBag::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void BlobPropertyBag::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

EndingType BlobPropertyBag::endings() const {
    return emlite::Val::get("endings").as<EndingType>();
}

void BlobPropertyBag::endings(const EndingType& value) {
    emlite::Val::set("endings", value);
}


} // namespace webbind