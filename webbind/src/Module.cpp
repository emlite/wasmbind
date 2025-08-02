#include <webbind/Module.hpp>


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

Module Module::take_ownership(Handle h) noexcept {
        return Module(h);
    }
Module Module::clone() const noexcept { return *this; }
emlite::Val Module::instance() noexcept { return emlite::Val::global("Module"); }
Module::Module(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Module::Module(const emlite::Val &val) noexcept: emlite::Val(val) {}


Module::Module(const jsbind::Any& bytes) : emlite::Val(emlite::Val::global("Module").new_(bytes)) {}

jsbind::TypedArray<ModuleExportDescriptor> Module::exports(const Module& moduleObject) {
    return emlite::Val::global("module").call("exports", moduleObject).as<jsbind::TypedArray<ModuleExportDescriptor>>();
}

jsbind::TypedArray<ModuleImportDescriptor> Module::imports(const Module& moduleObject) {
    return emlite::Val::global("module").call("imports", moduleObject).as<jsbind::TypedArray<ModuleImportDescriptor>>();
}

jsbind::TypedArray<jsbind::ArrayBuffer> Module::customSections(const Module& moduleObject, const jsbind::String& sectionName) {
    return emlite::Val::global("module").call("customSections", moduleObject, sectionName).as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

