#include <webbind/TransitionEventInit.hpp>

using emlite::Val;
namespace webbind {

TransitionEventInit::TransitionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
TransitionEventInit TransitionEventInit::take_ownership(Handle h) noexcept {
        return TransitionEventInit(h);
    }
TransitionEventInit::TransitionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
TransitionEventInit::TransitionEventInit() noexcept: EventInit(emlite::Val::object()) {}
TransitionEventInit TransitionEventInit::clone() const noexcept { return *this; }

jsbind::String TransitionEventInit::propertyName() const {
    return emlite::Val::get("propertyName").as<jsbind::String>();
}

void TransitionEventInit::propertyName(const jsbind::String& value) {
    emlite::Val::set("propertyName", value);
}

double TransitionEventInit::elapsedTime() const {
    return emlite::Val::get("elapsedTime").as<double>();
}

void TransitionEventInit::elapsedTime(double value) {
    emlite::Val::set("elapsedTime", value);
}

jsbind::String TransitionEventInit::pseudoElement() const {
    return emlite::Val::get("pseudoElement").as<jsbind::String>();
}

void TransitionEventInit::pseudoElement(const jsbind::String& value) {
    emlite::Val::set("pseudoElement", value);
}


} // namespace webbind