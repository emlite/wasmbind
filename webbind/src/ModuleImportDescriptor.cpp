#include "webbind/ModuleImportDescriptor.hpp"

using emlite::Val;
namespace webbind {

ModuleImportDescriptor::ModuleImportDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ModuleImportDescriptor ModuleImportDescriptor::take_ownership(Handle h) noexcept {
        return ModuleImportDescriptor(h);
    }
ModuleImportDescriptor::ModuleImportDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
ModuleImportDescriptor::ModuleImportDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
ModuleImportDescriptor ModuleImportDescriptor::clone() const noexcept { return *this; }

jsbind::String ModuleImportDescriptor::module_() const {
    return emlite::Val::get("module").as<jsbind::String>();
}

void ModuleImportDescriptor::module_(const jsbind::String& value) {
    emlite::Val::set("module", value);
}

jsbind::String ModuleImportDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void ModuleImportDescriptor::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

ImportExportKind ModuleImportDescriptor::kind() const {
    return emlite::Val::get("kind").as<ImportExportKind>();
}

void ModuleImportDescriptor::kind(const ImportExportKind& value) {
    emlite::Val::set("kind", value);
}


} // namespace webbind