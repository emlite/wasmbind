#include <webbind/TouchEventInit.hpp>
#include <webbind/Touch.hpp>

using emlite::Val;
namespace webbind {

TouchEventInit::TouchEventInit(Handle h) noexcept : EventModifierInit(emlite::Val::take_ownership(h)) {}
TouchEventInit TouchEventInit::take_ownership(Handle h) noexcept {
        return TouchEventInit(h);
    }
TouchEventInit::TouchEventInit(const emlite::Val &val) noexcept: EventModifierInit(val) {}
TouchEventInit::TouchEventInit() noexcept: EventModifierInit(emlite::Val::object()) {}
TouchEventInit TouchEventInit::clone() const noexcept { return *this; }

jsbind::TypedArray<Touch> TouchEventInit::touches() const {
    return emlite::Val::get("touches").as<jsbind::TypedArray<Touch>>();
}

void TouchEventInit::touches(const jsbind::TypedArray<Touch>& value) {
    emlite::Val::set("touches", value);
}

jsbind::TypedArray<Touch> TouchEventInit::targetTouches() const {
    return emlite::Val::get("targetTouches").as<jsbind::TypedArray<Touch>>();
}

void TouchEventInit::targetTouches(const jsbind::TypedArray<Touch>& value) {
    emlite::Val::set("targetTouches", value);
}

jsbind::TypedArray<Touch> TouchEventInit::changedTouches() const {
    return emlite::Val::get("changedTouches").as<jsbind::TypedArray<Touch>>();
}

void TouchEventInit::changedTouches(const jsbind::TypedArray<Touch>& value) {
    emlite::Val::set("changedTouches", value);
}


} // namespace webbind