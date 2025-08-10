#include <webbind/PromiseRejectionEventInit.hpp>

namespace webbind {

PromiseRejectionEventInit::PromiseRejectionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PromiseRejectionEventInit PromiseRejectionEventInit::take_ownership(Handle h) noexcept {
    return PromiseRejectionEventInit(h);
}

PromiseRejectionEventInit::PromiseRejectionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

PromiseRejectionEventInit::PromiseRejectionEventInit() noexcept: EventInit(emlite::Val::object()) {}

PromiseRejectionEventInit PromiseRejectionEventInit::clone() const noexcept { return *this; }

jsbind::Object PromiseRejectionEventInit::promise() const {
    return emlite::Val::get("promise").as<jsbind::Object>();
}

void PromiseRejectionEventInit::promise(const jsbind::Object& value) {
    emlite::Val::set("promise", value);
}

jsbind::Any PromiseRejectionEventInit::reason() const {
    return emlite::Val::get("reason").as<jsbind::Any>();
}

void PromiseRejectionEventInit::reason(const jsbind::Any& value) {
    emlite::Val::set("reason", value);
}


} // namespace webbind