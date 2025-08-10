#include <webbind/ToggleEventInit.hpp>

using emlite::Val;
namespace webbind {

ToggleEventInit::ToggleEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ToggleEventInit ToggleEventInit::take_ownership(Handle h) noexcept {
        return ToggleEventInit(h);
    }
ToggleEventInit::ToggleEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ToggleEventInit::ToggleEventInit() noexcept: EventInit(emlite::Val::object()) {}
ToggleEventInit ToggleEventInit::clone() const noexcept { return *this; }

jsbind::String ToggleEventInit::oldState() const {
    return emlite::Val::get("oldState").as<jsbind::String>();
}

void ToggleEventInit::oldState(const jsbind::String& value) {
    emlite::Val::set("oldState", value);
}

jsbind::String ToggleEventInit::newState() const {
    return emlite::Val::get("newState").as<jsbind::String>();
}

void ToggleEventInit::newState(const jsbind::String& value) {
    emlite::Val::set("newState", value);
}


} // namespace webbind