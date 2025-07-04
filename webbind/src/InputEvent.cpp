#include <webbind/InputEvent.hpp>
#include <webbind/DataTransfer.hpp>
#include <webbind/StaticRange.hpp>


InputEvent InputEvent::take_ownership(Handle h) noexcept {
        return InputEvent(h);
    }
InputEvent InputEvent::clone() const noexcept { return *this; }
InputEvent::InputEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
InputEvent::InputEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


InputEvent::InputEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): UIEvent(emlite::Val::global("InputEvent").new_(type, eventInitDict)) {}

jsbind::USVString InputEvent::data() const {
    return UIEvent::get("data").as<jsbind::USVString>();
}

bool InputEvent::isComposing() const {
    return UIEvent::get("isComposing").as<bool>();
}

jsbind::DOMString InputEvent::inputType() const {
    return UIEvent::get("inputType").as<jsbind::DOMString>();
}

DataTransfer InputEvent::dataTransfer() const {
    return UIEvent::get("dataTransfer").as<DataTransfer>();
}

jsbind::Sequence<StaticRange> InputEvent::getTargetRanges() {
    return UIEvent::call("getTargetRanges").as<jsbind::Sequence<StaticRange>>();
}

