#include <webbind/WebAssemblyInstantiatedSource.hpp>
#include <webbind/Module.hpp>
#include <webbind/Instance.hpp>

using emlite::Val;
namespace webbind {

WebAssemblyInstantiatedSource::WebAssemblyInstantiatedSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebAssemblyInstantiatedSource WebAssemblyInstantiatedSource::take_ownership(Handle h) noexcept {
        return WebAssemblyInstantiatedSource(h);
    }
WebAssemblyInstantiatedSource::WebAssemblyInstantiatedSource(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebAssemblyInstantiatedSource::WebAssemblyInstantiatedSource() noexcept: emlite::Val(emlite::Val::object()) {}
WebAssemblyInstantiatedSource WebAssemblyInstantiatedSource::clone() const noexcept { return *this; }

Module WebAssemblyInstantiatedSource::module_() const {
    return emlite::Val::get("module").as<Module>();
}

void WebAssemblyInstantiatedSource::module_(const Module& value) {
    emlite::Val::set("module", value);
}

Instance WebAssemblyInstantiatedSource::instance() const {
    return emlite::Val::get("instance").as<Instance>();
}

void WebAssemblyInstantiatedSource::instance(const Instance& value) {
    emlite::Val::set("instance", value);
}


} // namespace webbind