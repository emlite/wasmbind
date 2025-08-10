#include <webbind/InputEventInit.hpp>

using emlite::Val;
namespace webbind {

InputEventInit::InputEventInit(Handle h) noexcept : UIEventInit(emlite::Val::take_ownership(h)) {}
InputEventInit InputEventInit::take_ownership(Handle h) noexcept {
        return InputEventInit(h);
    }
InputEventInit::InputEventInit(const emlite::Val &val) noexcept: UIEventInit(val) {}
InputEventInit::InputEventInit() noexcept: UIEventInit(emlite::Val::object()) {}
InputEventInit InputEventInit::clone() const noexcept { return *this; }

jsbind::String InputEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::String>();
}

void InputEventInit::data(const jsbind::String& value) {
    emlite::Val::set("data", value);
}

bool InputEventInit::isComposing() const {
    return emlite::Val::get("isComposing").as<bool>();
}

void InputEventInit::isComposing(bool value) {
    emlite::Val::set("isComposing", value);
}

jsbind::String InputEventInit::inputType() const {
    return emlite::Val::get("inputType").as<jsbind::String>();
}

void InputEventInit::inputType(const jsbind::String& value) {
    emlite::Val::set("inputType", value);
}


} // namespace webbind