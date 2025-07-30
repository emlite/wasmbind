#include <webbind/InputEvent.hpp>
#include <webbind/DataTransfer.hpp>
#include <webbind/StaticRange.hpp>


InputEvent InputEvent::take_ownership(Handle h) noexcept {
        return InputEvent(h);
    }
InputEvent InputEvent::clone() const noexcept { return *this; }
InputEvent::InputEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
InputEvent::InputEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


InputEvent::InputEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("InputEvent").new_(type)) {}

InputEvent::InputEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : UIEvent(emlite::Val::global("InputEvent").new_(type, eventInitDict)) {}

jsbind::String InputEvent::data() const {
    return UIEvent::get("data").as<jsbind::String>();
}

bool InputEvent::isComposing() const {
    return UIEvent::get("isComposing").as<bool>();
}

jsbind::String InputEvent::inputType() const {
    return UIEvent::get("inputType").as<jsbind::String>();
}

DataTransfer InputEvent::dataTransfer() const {
    return UIEvent::get("dataTransfer").as<DataTransfer>();
}

jsbind::TypedArray<StaticRange> InputEvent::getTargetRanges() {
    return UIEvent::call("getTargetRanges").as<jsbind::TypedArray<StaticRange>>();
}

