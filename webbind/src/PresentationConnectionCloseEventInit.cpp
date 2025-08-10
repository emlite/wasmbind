#include <webbind/PresentationConnectionCloseEventInit.hpp>

using emlite::Val;
namespace webbind {

PresentationConnectionCloseEventInit::PresentationConnectionCloseEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit::take_ownership(Handle h) noexcept {
        return PresentationConnectionCloseEventInit(h);
    }
PresentationConnectionCloseEventInit::PresentationConnectionCloseEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PresentationConnectionCloseEventInit::PresentationConnectionCloseEventInit() noexcept: EventInit(emlite::Val::object()) {}
PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit::clone() const noexcept { return *this; }

PresentationConnectionCloseReason PresentationConnectionCloseEventInit::reason() const {
    return emlite::Val::get("reason").as<PresentationConnectionCloseReason>();
}

void PresentationConnectionCloseEventInit::reason(const PresentationConnectionCloseReason& value) {
    emlite::Val::set("reason", value);
}

jsbind::String PresentationConnectionCloseEventInit::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void PresentationConnectionCloseEventInit::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}


} // namespace webbind