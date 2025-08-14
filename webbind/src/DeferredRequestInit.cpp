#include <webbind/DeferredRequestInit.hpp>

namespace webbind {

DeferredRequestInit::DeferredRequestInit(Handle h) noexcept : RequestInit(emlite::Val::take_ownership(h)) {}
DeferredRequestInit DeferredRequestInit::take_ownership(Handle h) noexcept {
    return DeferredRequestInit(h);
}

DeferredRequestInit::DeferredRequestInit(const emlite::Val &val) noexcept: RequestInit(val) {}

DeferredRequestInit::DeferredRequestInit() noexcept: RequestInit(emlite::Val::object()) {}

DeferredRequestInit DeferredRequestInit::clone() const noexcept { return *this; }

jsbind::Any DeferredRequestInit::activateAfter() const {
    return emlite::Val::get("activateAfter").as<jsbind::Any>();
}

void DeferredRequestInit::activateAfter(const jsbind::Any& value) {
    emlite::Val::set("activateAfter", value);
}


} // namespace webbind