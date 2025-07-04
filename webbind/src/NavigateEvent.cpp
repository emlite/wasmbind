#include <webbind/NavigateEvent.hpp>
#include <webbind/NavigationDestination.hpp>
#include <webbind/AbortSignal.hpp>
#include <webbind/FormData.hpp>
#include <webbind/Element.hpp>


NavigationInterceptOptions::NavigationInterceptOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationInterceptOptions NavigationInterceptOptions::take_ownership(Handle h) noexcept {
        return NavigationInterceptOptions(h);
    }
NavigationInterceptOptions::NavigationInterceptOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationInterceptOptions::NavigationInterceptOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationInterceptOptions NavigationInterceptOptions::clone() const noexcept { return *this; }

jsbind::Function NavigationInterceptOptions::handler() const {
    return emlite::Val::get("handler").as<jsbind::Function>();
}

void NavigationInterceptOptions::handler(const jsbind::Function& value) {
    emlite::Val::set("handler", value);
}

NavigationFocusReset NavigationInterceptOptions::focusReset() const {
    return emlite::Val::get("focusReset").as<NavigationFocusReset>();
}

void NavigationInterceptOptions::focusReset(const NavigationFocusReset& value) {
    emlite::Val::set("focusReset", value);
}

NavigationScrollBehavior NavigationInterceptOptions::scroll() const {
    return emlite::Val::get("scroll").as<NavigationScrollBehavior>();
}

void NavigationInterceptOptions::scroll(const NavigationScrollBehavior& value) {
    emlite::Val::set("scroll", value);
}

NavigateEvent NavigateEvent::take_ownership(Handle h) noexcept {
        return NavigateEvent(h);
    }
NavigateEvent NavigateEvent::clone() const noexcept { return *this; }
NavigateEvent::NavigateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
NavigateEvent::NavigateEvent(const emlite::Val &val) noexcept: Event(val) {}


NavigateEvent::NavigateEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("NavigateEvent").new_(type, eventInitDict)) {}

NavigationType NavigateEvent::navigationType() const {
    return Event::get("navigationType").as<NavigationType>();
}

NavigationDestination NavigateEvent::destination() const {
    return Event::get("destination").as<NavigationDestination>();
}

bool NavigateEvent::canIntercept() const {
    return Event::get("canIntercept").as<bool>();
}

bool NavigateEvent::userInitiated() const {
    return Event::get("userInitiated").as<bool>();
}

bool NavigateEvent::hashChange() const {
    return Event::get("hashChange").as<bool>();
}

AbortSignal NavigateEvent::signal() const {
    return Event::get("signal").as<AbortSignal>();
}

FormData NavigateEvent::formData() const {
    return Event::get("formData").as<FormData>();
}

jsbind::DOMString NavigateEvent::downloadRequest() const {
    return Event::get("downloadRequest").as<jsbind::DOMString>();
}

jsbind::Any NavigateEvent::info() const {
    return Event::get("info").as<jsbind::Any>();
}

bool NavigateEvent::hasUAVisualTransition() const {
    return Event::get("hasUAVisualTransition").as<bool>();
}

Element NavigateEvent::sourceElement() const {
    return Event::get("sourceElement").as<Element>();
}

jsbind::Undefined NavigateEvent::intercept(const NavigationInterceptOptions& options) {
    return Event::call("intercept", options).as<jsbind::Undefined>();
}

jsbind::Undefined NavigateEvent::scroll() {
    return Event::call("scroll").as<jsbind::Undefined>();
}

