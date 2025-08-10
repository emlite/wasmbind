#include <webbind/CustomElementRegistry.hpp>
#include <webbind/ElementDefinitionOptions.hpp>
#include <webbind/Node.hpp>

namespace webbind {

CustomElementRegistry CustomElementRegistry::take_ownership(Handle h) noexcept {
    return CustomElementRegistry(h);
}

CustomElementRegistry CustomElementRegistry::clone() const noexcept { return *this; }

emlite::Val CustomElementRegistry::instance() noexcept { return emlite::Val::global("CustomElementRegistry"); }

CustomElementRegistry::CustomElementRegistry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

CustomElementRegistry::CustomElementRegistry(const emlite::Val &val) noexcept: emlite::Val(val) {}

CustomElementRegistry::CustomElementRegistry() : emlite::Val(emlite::Val::global("CustomElementRegistry").new_()) {}

jsbind::Undefined CustomElementRegistry::define(const jsbind::String& name, const jsbind::Function& constructor) {
    return emlite::Val::call("define", name, constructor).as<jsbind::Undefined>();
}

jsbind::Undefined CustomElementRegistry::define(const jsbind::String& name, const jsbind::Function& constructor, const ElementDefinitionOptions& options) {
    return emlite::Val::call("define", name, constructor, options).as<jsbind::Undefined>();
}

jsbind::Any CustomElementRegistry::get(const jsbind::String& name) {
    return emlite::Val::call("get", name).as<jsbind::Any>();
}

jsbind::String CustomElementRegistry::getName(const jsbind::Function& constructor) {
    return emlite::Val::call("getName", constructor).as<jsbind::String>();
}

jsbind::Promise<jsbind::Function> CustomElementRegistry::whenDefined(const jsbind::String& name) {
    return emlite::Val::call("whenDefined", name).as<jsbind::Promise<jsbind::Function>>();
}

jsbind::Undefined CustomElementRegistry::upgrade(const Node& root) {
    return emlite::Val::call("upgrade", root).as<jsbind::Undefined>();
}

jsbind::Undefined CustomElementRegistry::initialize(const Node& root) {
    return emlite::Val::call("initialize", root).as<jsbind::Undefined>();
}


} // namespace webbind