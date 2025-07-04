#include <webbind/PluginArray.hpp>
#include <webbind/Plugin.hpp>


PluginArray PluginArray::take_ownership(Handle h) noexcept {
        return PluginArray(h);
    }
PluginArray PluginArray::clone() const noexcept { return *this; }
PluginArray::PluginArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PluginArray::PluginArray(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined PluginArray::refresh() {
    return emlite::Val::call("refresh").as<jsbind::Undefined>();
}

unsigned long PluginArray::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

Plugin PluginArray::item(unsigned long index) {
    return emlite::Val::call("item", index).as<Plugin>();
}

Plugin PluginArray::namedItem(const jsbind::DOMString& name) {
    return emlite::Val::call("namedItem", name).as<Plugin>();
}

