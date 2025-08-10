#include <webbind/KeySystemTrackConfiguration.hpp>

using emlite::Val;
namespace webbind {

KeySystemTrackConfiguration::KeySystemTrackConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KeySystemTrackConfiguration KeySystemTrackConfiguration::take_ownership(Handle h) noexcept {
        return KeySystemTrackConfiguration(h);
    }
KeySystemTrackConfiguration::KeySystemTrackConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
KeySystemTrackConfiguration::KeySystemTrackConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
KeySystemTrackConfiguration KeySystemTrackConfiguration::clone() const noexcept { return *this; }

jsbind::String KeySystemTrackConfiguration::robustness() const {
    return emlite::Val::get("robustness").as<jsbind::String>();
}

void KeySystemTrackConfiguration::robustness(const jsbind::String& value) {
    emlite::Val::set("robustness", value);
}

jsbind::String KeySystemTrackConfiguration::encryptionScheme() const {
    return emlite::Val::get("encryptionScheme").as<jsbind::String>();
}

void KeySystemTrackConfiguration::encryptionScheme(const jsbind::String& value) {
    emlite::Val::set("encryptionScheme", value);
}


} // namespace webbind