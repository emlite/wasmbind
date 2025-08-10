#include "webbind/ElementCreationOptions.hpp"
#include "webbind/CustomElementRegistry.hpp"

using emlite::Val;
namespace webbind {

ElementCreationOptions::ElementCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ElementCreationOptions ElementCreationOptions::take_ownership(Handle h) noexcept {
        return ElementCreationOptions(h);
    }
ElementCreationOptions::ElementCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ElementCreationOptions::ElementCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ElementCreationOptions ElementCreationOptions::clone() const noexcept { return *this; }

CustomElementRegistry ElementCreationOptions::customElementRegistry() const {
    return emlite::Val::get("customElementRegistry").as<CustomElementRegistry>();
}

void ElementCreationOptions::customElementRegistry(const CustomElementRegistry& value) {
    emlite::Val::set("customElementRegistry", value);
}

jsbind::String ElementCreationOptions::is() const {
    return emlite::Val::get("is").as<jsbind::String>();
}

void ElementCreationOptions::is(const jsbind::String& value) {
    emlite::Val::set("is", value);
}


} // namespace webbind