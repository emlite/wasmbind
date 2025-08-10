#include <webbind/ModuleExportDescriptor.hpp>

namespace webbind {

ModuleExportDescriptor::ModuleExportDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ModuleExportDescriptor ModuleExportDescriptor::take_ownership(Handle h) noexcept {
    return ModuleExportDescriptor(h);
}

ModuleExportDescriptor::ModuleExportDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}

ModuleExportDescriptor::ModuleExportDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}

ModuleExportDescriptor ModuleExportDescriptor::clone() const noexcept { return *this; }

jsbind::String ModuleExportDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void ModuleExportDescriptor::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

ImportExportKind ModuleExportDescriptor::kind() const {
    return emlite::Val::get("kind").as<ImportExportKind>();
}

void ModuleExportDescriptor::kind(const ImportExportKind& value) {
    emlite::Val::set("kind", value);
}


} // namespace webbind