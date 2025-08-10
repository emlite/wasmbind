#include <webbind/BeforeInstallPromptEvent.hpp>
#include <webbind/EventInit.hpp>
#include <webbind/PromptResponseObject.hpp>

namespace webbind {

BeforeInstallPromptEvent BeforeInstallPromptEvent::take_ownership(Handle h) noexcept {
        return BeforeInstallPromptEvent(h);
    }
BeforeInstallPromptEvent BeforeInstallPromptEvent::clone() const noexcept { return *this; }
emlite::Val BeforeInstallPromptEvent::instance() noexcept { return emlite::Val::global("BeforeInstallPromptEvent"); }
BeforeInstallPromptEvent::BeforeInstallPromptEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BeforeInstallPromptEvent::BeforeInstallPromptEvent(const emlite::Val &val) noexcept: Event(val) {}

BeforeInstallPromptEvent::BeforeInstallPromptEvent(const jsbind::String& type) : Event(emlite::Val::global("BeforeInstallPromptEvent").new_(type)) {}

BeforeInstallPromptEvent::BeforeInstallPromptEvent(const jsbind::String& type, const EventInit& eventInitDict) : Event(emlite::Val::global("BeforeInstallPromptEvent").new_(type, eventInitDict)) {}

jsbind::Promise<PromptResponseObject> BeforeInstallPromptEvent::prompt() {
    return Event::call("prompt").as<jsbind::Promise<PromptResponseObject>>();
}


} // namespace webbind