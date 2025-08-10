#include "webbind/CustomEventInit.hpp"

using emlite::Val;
namespace webbind {

CustomEventInit::CustomEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CustomEventInit CustomEventInit::take_ownership(Handle h) noexcept {
        return CustomEventInit(h);
    }
CustomEventInit::CustomEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
CustomEventInit::CustomEventInit() noexcept: EventInit(emlite::Val::object()) {}
CustomEventInit CustomEventInit::clone() const noexcept { return *this; }

jsbind::Any CustomEventInit::detail() const {
    return emlite::Val::get("detail").as<jsbind::Any>();
}

void CustomEventInit::detail(const jsbind::Any& value) {
    emlite::Val::set("detail", value);
}


} // namespace webbind