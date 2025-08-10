#include <webbind/SharedWorkerGlobalScope.hpp>

namespace webbind {

SharedWorkerGlobalScope SharedWorkerGlobalScope::take_ownership(Handle h) noexcept {
        return SharedWorkerGlobalScope(h);
    }
SharedWorkerGlobalScope SharedWorkerGlobalScope::clone() const noexcept { return *this; }
emlite::Val SharedWorkerGlobalScope::instance() noexcept { return emlite::Val::global("SharedWorkerGlobalScope"); }
SharedWorkerGlobalScope::SharedWorkerGlobalScope(Handle h) noexcept : WorkerGlobalScope(emlite::Val::take_ownership(h)) {}
SharedWorkerGlobalScope::SharedWorkerGlobalScope(const emlite::Val &val) noexcept: WorkerGlobalScope(val) {}

jsbind::String SharedWorkerGlobalScope::name() const {
    return WorkerGlobalScope::get("name").as<jsbind::String>();
}

jsbind::Undefined SharedWorkerGlobalScope::close() {
    return WorkerGlobalScope::call("close").as<jsbind::Undefined>();
}

jsbind::Any SharedWorkerGlobalScope::onconnect() const {
    return WorkerGlobalScope::get("onconnect").as<jsbind::Any>();
}

void SharedWorkerGlobalScope::onconnect(const jsbind::Any& value) {
    WorkerGlobalScope::set("onconnect", value);
}


} // namespace webbind