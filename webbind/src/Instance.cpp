#include "webbind/Instance.hpp"
#include "webbind/Module.hpp"

namespace webbind {

Instance Instance::take_ownership(Handle h) noexcept {
        return Instance(h);
    }
Instance Instance::clone() const noexcept { return *this; }
emlite::Val Instance::instance() noexcept { return emlite::Val::global("Instance"); }
Instance::Instance(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Instance::Instance(const emlite::Val &val) noexcept: emlite::Val(val) {}

Instance::Instance(const Module& module_) : emlite::Val(emlite::Val::global("Instance").new_(module_)) {}

Instance::Instance(const Module& module_, const jsbind::Object& importObject) : emlite::Val(emlite::Val::global("Instance").new_(module_, importObject)) {}

jsbind::Object Instance::exports() const {
    return emlite::Val::get("exports").as<jsbind::Object>();
}


} // namespace webbind