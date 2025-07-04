#include <webbind/Plugin.hpp>
#include <webbind/MimeType.hpp>


Plugin Plugin::take_ownership(Handle h) noexcept {
        return Plugin(h);
    }
Plugin Plugin::clone() const noexcept { return *this; }
Plugin::Plugin(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Plugin::Plugin(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString Plugin::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString Plugin::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
}

jsbind::DOMString Plugin::filename() const {
    return emlite::Val::get("filename").as<jsbind::DOMString>();
}

unsigned long Plugin::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

MimeType Plugin::item(unsigned long index) {
    return emlite::Val::call("item", index).as<MimeType>();
}

MimeType Plugin::namedItem(const jsbind::DOMString& name) {
    return emlite::Val::call("namedItem", name).as<MimeType>();
}

