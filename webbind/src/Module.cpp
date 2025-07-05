#include <webbind/Module.hpp>


ModuleExportDescriptor::ModuleExportDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ModuleExportDescriptor ModuleExportDescriptor::take_ownership(Handle h) noexcept {
        return ModuleExportDescriptor(h);
    }
ModuleExportDescriptor::ModuleExportDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
ModuleExportDescriptor::ModuleExportDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
ModuleExportDescriptor ModuleExportDescriptor::clone() const noexcept { return *this; }

jsbind::USVString ModuleExportDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

void ModuleExportDescriptor::name(const jsbind::USVString& value) {
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

jsbind::USVString ModuleImportDescriptor::module_() const {
    return emlite::Val::get("module").as<jsbind::USVString>();
}

void ModuleImportDescriptor::module_(const jsbind::USVString& value) {
    emlite::Val::set("module", value);
}

jsbind::USVString ModuleImportDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

void ModuleImportDescriptor::name(const jsbind::USVString& value) {
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
Module::Module(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Module::Module(const emlite::Val &val) noexcept: emlite::Val(val) {}


Module::Module(const jsbind::Any& bytes) : emlite::Val(emlite::Val::global("Module").new_(bytes)) {}

jsbind::Sequence<ModuleExportDescriptor> Module::exports(const Module& moduleObject) {
    return emlite::Val::global("module").call("exports", moduleObject).as<jsbind::Sequence<ModuleExportDescriptor>>();
}

jsbind::Sequence<ModuleImportDescriptor> Module::imports(const Module& moduleObject) {
    return emlite::Val::global("module").call("imports", moduleObject).as<jsbind::Sequence<ModuleImportDescriptor>>();
}

jsbind::Sequence<jsbind::ArrayBuffer> Module::customSections(const Module& moduleObject, const jsbind::DOMString& sectionName) {
    return emlite::Val::global("module").call("customSections", moduleObject, sectionName).as<jsbind::Sequence<jsbind::ArrayBuffer>>();
}

