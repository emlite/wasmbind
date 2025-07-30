#include <webbind/CompositionEvent.hpp>


CompositionEvent CompositionEvent::take_ownership(Handle h) noexcept {
        return CompositionEvent(h);
    }
CompositionEvent CompositionEvent::clone() const noexcept { return *this; }
CompositionEvent::CompositionEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
CompositionEvent::CompositionEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


CompositionEvent::CompositionEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("CompositionEvent").new_(type)) {}

CompositionEvent::CompositionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : UIEvent(emlite::Val::global("CompositionEvent").new_(type, eventInitDict)) {}

jsbind::String CompositionEvent::data() const {
    return UIEvent::get("data").as<jsbind::String>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::String& typeArg) {
    return UIEvent::call("initCompositionEvent", typeArg).as<jsbind::Undefined>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg) {
    return UIEvent::call("initCompositionEvent", typeArg, bubblesArg).as<jsbind::Undefined>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg) {
    return UIEvent::call("initCompositionEvent", typeArg, bubblesArg, cancelableArg).as<jsbind::Undefined>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg) {
    return UIEvent::call("initCompositionEvent", typeArg, bubblesArg, cancelableArg, viewArg).as<jsbind::Undefined>();
}

jsbind::Undefined CompositionEvent::initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg, const jsbind::String& dataArg) {
    return UIEvent::call("initCompositionEvent", typeArg, bubblesArg, cancelableArg, viewArg, dataArg).as<jsbind::Undefined>();
}

