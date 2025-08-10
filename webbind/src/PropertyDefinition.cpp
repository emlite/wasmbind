#include <webbind/PropertyDefinition.hpp>

using emlite::Val;
namespace webbind {

PropertyDefinition::PropertyDefinition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PropertyDefinition PropertyDefinition::take_ownership(Handle h) noexcept {
        return PropertyDefinition(h);
    }
PropertyDefinition::PropertyDefinition(const emlite::Val &val) noexcept: emlite::Val(val) {}
PropertyDefinition::PropertyDefinition() noexcept: emlite::Val(emlite::Val::object()) {}
PropertyDefinition PropertyDefinition::clone() const noexcept { return *this; }

jsbind::String PropertyDefinition::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PropertyDefinition::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String PropertyDefinition::syntax() const {
    return emlite::Val::get("syntax").as<jsbind::String>();
}

void PropertyDefinition::syntax(const jsbind::String& value) {
    emlite::Val::set("syntax", value);
}

bool PropertyDefinition::inherits() const {
    return emlite::Val::get("inherits").as<bool>();
}

void PropertyDefinition::inherits(bool value) {
    emlite::Val::set("inherits", value);
}

jsbind::String PropertyDefinition::initialValue() const {
    return emlite::Val::get("initialValue").as<jsbind::String>();
}

void PropertyDefinition::initialValue(const jsbind::String& value) {
    emlite::Val::set("initialValue", value);
}


} // namespace webbind