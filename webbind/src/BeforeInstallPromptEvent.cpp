#include <webbind/BeforeInstallPromptEvent.hpp>


PromptResponseObject::PromptResponseObject(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PromptResponseObject PromptResponseObject::take_ownership(Handle h) noexcept {
        return PromptResponseObject(h);
    }
PromptResponseObject::PromptResponseObject(const emlite::Val &val) noexcept: emlite::Val(val) {}
PromptResponseObject::PromptResponseObject() noexcept: emlite::Val(emlite::Val::object()) {}
PromptResponseObject PromptResponseObject::clone() const noexcept { return *this; }

AppBannerPromptOutcome PromptResponseObject::userChoice() const {
    return emlite::Val::get("userChoice").as<AppBannerPromptOutcome>();
}

void PromptResponseObject::userChoice(const AppBannerPromptOutcome& value) {
    emlite::Val::set("userChoice", value);
}

BeforeInstallPromptEvent BeforeInstallPromptEvent::take_ownership(Handle h) noexcept {
        return BeforeInstallPromptEvent(h);
    }
BeforeInstallPromptEvent BeforeInstallPromptEvent::clone() const noexcept { return *this; }
emlite::Val BeforeInstallPromptEvent::instance() noexcept { return emlite::Val::global("BeforeInstallPromptEvent"); }
BeforeInstallPromptEvent::BeforeInstallPromptEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BeforeInstallPromptEvent::BeforeInstallPromptEvent(const emlite::Val &val) noexcept: Event(val) {}


BeforeInstallPromptEvent::BeforeInstallPromptEvent(const jsbind::String& type) : Event(emlite::Val::global("BeforeInstallPromptEvent").new_(type)) {}

BeforeInstallPromptEvent::BeforeInstallPromptEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("BeforeInstallPromptEvent").new_(type, eventInitDict)) {}

jsbind::Promise<PromptResponseObject> BeforeInstallPromptEvent::prompt() {
    return Event::call("prompt").as<jsbind::Promise<PromptResponseObject>>();
}

