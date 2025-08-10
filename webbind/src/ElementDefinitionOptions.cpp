#include <webbind/ElementDefinitionOptions.hpp>

namespace webbind {

ElementDefinitionOptions::ElementDefinitionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ElementDefinitionOptions ElementDefinitionOptions::take_ownership(Handle h) noexcept {
    return ElementDefinitionOptions(h);
}

ElementDefinitionOptions::ElementDefinitionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ElementDefinitionOptions::ElementDefinitionOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ElementDefinitionOptions ElementDefinitionOptions::clone() const noexcept { return *this; }

jsbind::String ElementDefinitionOptions::extends() const {
    return emlite::Val::get("extends").as<jsbind::String>();
}

void ElementDefinitionOptions::extends(const jsbind::String& value) {
    emlite::Val::set("extends", value);
}


} // namespace webbind