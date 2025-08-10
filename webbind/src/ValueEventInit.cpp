#include "webbind/ValueEventInit.hpp"

using emlite::Val;
namespace webbind {

ValueEventInit::ValueEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ValueEventInit ValueEventInit::take_ownership(Handle h) noexcept {
        return ValueEventInit(h);
    }
ValueEventInit::ValueEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ValueEventInit::ValueEventInit() noexcept: EventInit(emlite::Val::object()) {}
ValueEventInit ValueEventInit::clone() const noexcept { return *this; }

jsbind::Any ValueEventInit::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void ValueEventInit::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind