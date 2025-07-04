#include <webbind/MimeType.hpp>
#include <webbind/Plugin.hpp>


MimeType MimeType::take_ownership(Handle h) noexcept {
        return MimeType(h);
    }
MimeType MimeType::clone() const noexcept { return *this; }
MimeType::MimeType(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MimeType::MimeType(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString MimeType::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

jsbind::DOMString MimeType::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
}

jsbind::DOMString MimeType::suffixes() const {
    return emlite::Val::get("suffixes").as<jsbind::DOMString>();
}

Plugin MimeType::enabledPlugin() const {
    return emlite::Val::get("enabledPlugin").as<Plugin>();
}

