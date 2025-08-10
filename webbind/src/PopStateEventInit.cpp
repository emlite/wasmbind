#include <webbind/PopStateEventInit.hpp>

using emlite::Val;
namespace webbind {

PopStateEventInit::PopStateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PopStateEventInit PopStateEventInit::take_ownership(Handle h) noexcept {
        return PopStateEventInit(h);
    }
PopStateEventInit::PopStateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PopStateEventInit::PopStateEventInit() noexcept: EventInit(emlite::Val::object()) {}
PopStateEventInit PopStateEventInit::clone() const noexcept { return *this; }

jsbind::Any PopStateEventInit::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void PopStateEventInit::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}

bool PopStateEventInit::hasUAVisualTransition() const {
    return emlite::Val::get("hasUAVisualTransition").as<bool>();
}

void PopStateEventInit::hasUAVisualTransition(bool value) {
    emlite::Val::set("hasUAVisualTransition", value);
}


} // namespace webbind