#include <webbind/MimeType.hpp>
#include <webbind/Plugin.hpp>

namespace webbind {

MimeType MimeType::take_ownership(Handle h) noexcept {
        return MimeType(h);
    }
MimeType MimeType::clone() const noexcept { return *this; }
emlite::Val MimeType::instance() noexcept { return emlite::Val::global("MimeType"); }
MimeType::MimeType(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MimeType::MimeType(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String MimeType::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

jsbind::String MimeType::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

jsbind::String MimeType::suffixes() const {
    return emlite::Val::get("suffixes").as<jsbind::String>();
}

Plugin MimeType::enabledPlugin() const {
    return emlite::Val::get("enabledPlugin").as<Plugin>();
}


} // namespace webbind