#include <webbind/StylePropertyMap.hpp>


StylePropertyMap StylePropertyMap::take_ownership(Handle h) noexcept {
        return StylePropertyMap(h);
    }
StylePropertyMap StylePropertyMap::clone() const noexcept { return *this; }
StylePropertyMap::StylePropertyMap(Handle h) noexcept : StylePropertyMapReadOnly(emlite::Val::take_ownership(h)) {}
StylePropertyMap::StylePropertyMap(const emlite::Val &val) noexcept: StylePropertyMapReadOnly(val) {}


jsbind::Undefined StylePropertyMap::set(const jsbind::String& property, const jsbind::Any& values) {
    return StylePropertyMapReadOnly::call("set", property, values).as<jsbind::Undefined>();
}

jsbind::Undefined StylePropertyMap::append(const jsbind::String& property, const jsbind::Any& values) {
    return StylePropertyMapReadOnly::call("append", property, values).as<jsbind::Undefined>();
}

jsbind::Undefined StylePropertyMap::delete_(const jsbind::String& property) {
    return StylePropertyMapReadOnly::call("delete", property).as<jsbind::Undefined>();
}

jsbind::Undefined StylePropertyMap::clear() {
    return StylePropertyMapReadOnly::call("clear").as<jsbind::Undefined>();
}

