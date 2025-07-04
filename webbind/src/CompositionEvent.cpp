#include <webbind/CompositionEvent.hpp>


CompositionEvent CompositionEvent::take_ownership(Handle h) noexcept {
        return CompositionEvent(h);
    }
CompositionEvent CompositionEvent::clone() const noexcept { return *this; }
CompositionEvent::CompositionEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
CompositionEvent::CompositionEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


CompositionEvent::CompositionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): UIEvent(emlite::Val::global("CompositionEvent").new_(type, eventInitDict)) {}

jsbind::USVString CompositionEvent::data() const {
    return UIEvent::get("data").as<jsbind::USVString>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg, const jsbind::DOMString& dataArg) {
    return UIEvent::call("initCompositionEvent", typeArg, bubblesArg, cancelableArg, viewArg, dataArg).as<jsbind::Undefined>();
}

