#include <webbind/Module.hpp>
#include <webbind/ModuleExportDescriptor.hpp>
#include <webbind/Module.hpp>
#include <webbind/ModuleImportDescriptor.hpp>

namespace webbind {

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


} // namespace webbind