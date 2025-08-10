#include "webbind/PresentationConnectionAvailableEventInit.hpp"
#include "webbind/PresentationConnection.hpp"

using emlite::Val;
namespace webbind {

PresentationConnectionAvailableEventInit::PresentationConnectionAvailableEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit::take_ownership(Handle h) noexcept {
        return PresentationConnectionAvailableEventInit(h);
    }
PresentationConnectionAvailableEventInit::PresentationConnectionAvailableEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PresentationConnectionAvailableEventInit::PresentationConnectionAvailableEventInit() noexcept: EventInit(emlite::Val::object()) {}
PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit::clone() const noexcept { return *this; }

PresentationConnection PresentationConnectionAvailableEventInit::connection() const {
    return emlite::Val::get("connection").as<PresentationConnection>();
}

void PresentationConnectionAvailableEventInit::connection(const PresentationConnection& value) {
    emlite::Val::set("connection", value);
}


} // namespace webbind