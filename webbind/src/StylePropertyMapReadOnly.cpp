#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/CSSStyleValue.hpp>


StylePropertyMapReadOnly StylePropertyMapReadOnly::take_ownership(Handle h) noexcept {
        return StylePropertyMapReadOnly(h);
    }
StylePropertyMapReadOnly StylePropertyMapReadOnly::clone() const noexcept { return *this; }
StylePropertyMapReadOnly::StylePropertyMapReadOnly(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StylePropertyMapReadOnly::StylePropertyMapReadOnly(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any StylePropertyMapReadOnly::get(const jsbind::USVString& property) {
    return emlite::Val::call("get", property).as<jsbind::Any>();
}

jsbind::Sequence<CSSStyleValue> StylePropertyMapReadOnly::getAll(const jsbind::USVString& property) {
    return emlite::Val::call("getAll", property).as<jsbind::Sequence<CSSStyleValue>>();
}

bool StylePropertyMapReadOnly::has(const jsbind::USVString& property) {
    return emlite::Val::call("has", property).as<bool>();
}

unsigned long StylePropertyMapReadOnly::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

