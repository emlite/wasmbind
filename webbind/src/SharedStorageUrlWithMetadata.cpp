#include <webbind/SharedStorageUrlWithMetadata.hpp>

namespace webbind {

SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata::take_ownership(Handle h) noexcept {
    return SharedStorageUrlWithMetadata(h);
}

SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}

SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata() noexcept: emlite::Val(emlite::Val::object()) {}

SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata::clone() const noexcept { return *this; }

jsbind::String SharedStorageUrlWithMetadata::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void SharedStorageUrlWithMetadata::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

jsbind::Object SharedStorageUrlWithMetadata::reportingMetadata() const {
    return emlite::Val::get("reportingMetadata").as<jsbind::Object>();
}

void SharedStorageUrlWithMetadata::reportingMetadata(const jsbind::Object& value) {
    emlite::Val::set("reportingMetadata", value);
}


} // namespace webbind