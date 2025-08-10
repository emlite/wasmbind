#include "webbind/Plugin.hpp"
#include "webbind/MimeType.hpp"

namespace webbind {

Plugin Plugin::take_ownership(Handle h) noexcept {
        return Plugin(h);
    }
Plugin Plugin::clone() const noexcept { return *this; }
emlite::Val Plugin::instance() noexcept { return emlite::Val::global("Plugin"); }
Plugin::Plugin(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Plugin::Plugin(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Plugin::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String Plugin::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

jsbind::String Plugin::filename() const {
    return emlite::Val::get("filename").as<jsbind::String>();
}

unsigned long Plugin::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

MimeType Plugin::item(unsigned long index) {
    return emlite::Val::call("item", index).as<MimeType>();
}

MimeType Plugin::namedItem(const jsbind::String& name) {
    return emlite::Val::call("namedItem", name).as<MimeType>();
}


} // namespace webbind