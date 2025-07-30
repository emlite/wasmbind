#include <webbind/ProtectedAudienceUtilities.hpp>


ProtectedAudienceUtilities ProtectedAudienceUtilities::take_ownership(Handle h) noexcept {
        return ProtectedAudienceUtilities(h);
    }
ProtectedAudienceUtilities ProtectedAudienceUtilities::clone() const noexcept { return *this; }
ProtectedAudienceUtilities::ProtectedAudienceUtilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProtectedAudienceUtilities::ProtectedAudienceUtilities(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Uint8Array ProtectedAudienceUtilities::encodeUtf8(const jsbind::String& input) {
    return emlite::Val::call("encodeUtf8", input).as<jsbind::Uint8Array>();
}

jsbind::String ProtectedAudienceUtilities::decodeUtf8(const jsbind::Uint8Array& bytes) {
    return emlite::Val::call("decodeUtf8", bytes).as<jsbind::String>();
}

