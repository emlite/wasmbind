#include <webbind/StylePropertyMap.hpp>

namespace webbind {

StylePropertyMap StylePropertyMap::take_ownership(Handle h) noexcept {
        return StylePropertyMap(h);
    }
StylePropertyMap StylePropertyMap::clone() const noexcept { return *this; }
emlite::Val StylePropertyMap::instance() noexcept { return emlite::Val::global("StylePropertyMap"); }
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


} // namespace webbind