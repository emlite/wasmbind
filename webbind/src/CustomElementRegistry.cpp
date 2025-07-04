#include <webbind/CustomElementRegistry.hpp>
#include <webbind/Node.hpp>


ElementDefinitionOptions::ElementDefinitionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ElementDefinitionOptions ElementDefinitionOptions::take_ownership(Handle h) noexcept {
        return ElementDefinitionOptions(h);
    }
ElementDefinitionOptions::ElementDefinitionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ElementDefinitionOptions::ElementDefinitionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ElementDefinitionOptions ElementDefinitionOptions::clone() const noexcept { return *this; }

jsbind::DOMString ElementDefinitionOptions::extends() const {
    return emlite::Val::get("extends").as<jsbind::DOMString>();
}

void ElementDefinitionOptions::extends(const jsbind::DOMString& value) {
    emlite::Val::set("extends", value);
}

CustomElementRegistry CustomElementRegistry::take_ownership(Handle h) noexcept {
        return CustomElementRegistry(h);
    }
CustomElementRegistry CustomElementRegistry::clone() const noexcept { return *this; }
CustomElementRegistry::CustomElementRegistry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CustomElementRegistry::CustomElementRegistry(const emlite::Val &val) noexcept: emlite::Val(val) {}


CustomElementRegistry::CustomElementRegistry(): emlite::Val(emlite::Val::global("CustomElementRegistry").new_()) {}

jsbind::Undefined CustomElementRegistry::define(const jsbind::DOMString& name, const jsbind::Function& constructor, const ElementDefinitionOptions& options) {
    return emlite::Val::call("define", name, constructor, options).as<jsbind::Undefined>();
}

jsbind::Any CustomElementRegistry::get(const jsbind::DOMString& name) {
    return emlite::Val::call("get", name).as<jsbind::Any>();
}

jsbind::DOMString CustomElementRegistry::getName(const jsbind::Function& constructor) {
    return emlite::Val::call("getName", constructor).as<jsbind::DOMString>();
}

jsbind::Promise CustomElementRegistry::whenDefined(const jsbind::DOMString& name) {
    return emlite::Val::call("whenDefined", name).as<jsbind::Promise>();
}

jsbind::Undefined CustomElementRegistry::upgrade(const Node& root) {
    return emlite::Val::call("upgrade", root).as<jsbind::Undefined>();
}

jsbind::Undefined CustomElementRegistry::initialize(const Node& root) {
    return emlite::Val::call("initialize", root).as<jsbind::Undefined>();
}

