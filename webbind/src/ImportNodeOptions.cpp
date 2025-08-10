#include <webbind/ImportNodeOptions.hpp>
#include <webbind/CustomElementRegistry.hpp>

namespace webbind {

ImportNodeOptions::ImportNodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImportNodeOptions ImportNodeOptions::take_ownership(Handle h) noexcept {
    return ImportNodeOptions(h);
}

ImportNodeOptions::ImportNodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImportNodeOptions::ImportNodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ImportNodeOptions ImportNodeOptions::clone() const noexcept { return *this; }

CustomElementRegistry ImportNodeOptions::customElementRegistry() const {
    return emlite::Val::get("customElementRegistry").as<CustomElementRegistry>();
}

void ImportNodeOptions::customElementRegistry(const CustomElementRegistry& value) {
    emlite::Val::set("customElementRegistry", value);
}

bool ImportNodeOptions::selfOnly() const {
    return emlite::Val::get("selfOnly").as<bool>();
}

void ImportNodeOptions::selfOnly(bool value) {
    emlite::Val::set("selfOnly", value);
}


} // namespace webbind