#include <webbind/NavigateEventInit.hpp>
#include <webbind/NavigationDestination.hpp>
#include <webbind/AbortSignal.hpp>
#include <webbind/FormData.hpp>
#include <webbind/Element.hpp>

using emlite::Val;
namespace webbind {

NavigateEventInit::NavigateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
NavigateEventInit NavigateEventInit::take_ownership(Handle h) noexcept {
        return NavigateEventInit(h);
    }
NavigateEventInit::NavigateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
NavigateEventInit::NavigateEventInit() noexcept: EventInit(emlite::Val::object()) {}
NavigateEventInit NavigateEventInit::clone() const noexcept { return *this; }

NavigationType NavigateEventInit::navigationType() const {
    return emlite::Val::get("navigationType").as<NavigationType>();
}

void NavigateEventInit::navigationType(const NavigationType& value) {
    emlite::Val::set("navigationType", value);
}

NavigationDestination NavigateEventInit::destination() const {
    return emlite::Val::get("destination").as<NavigationDestination>();
}

void NavigateEventInit::destination(const NavigationDestination& value) {
    emlite::Val::set("destination", value);
}

bool NavigateEventInit::canIntercept() const {
    return emlite::Val::get("canIntercept").as<bool>();
}

void NavigateEventInit::canIntercept(bool value) {
    emlite::Val::set("canIntercept", value);
}

bool NavigateEventInit::userInitiated() const {
    return emlite::Val::get("userInitiated").as<bool>();
}

void NavigateEventInit::userInitiated(bool value) {
    emlite::Val::set("userInitiated", value);
}

bool NavigateEventInit::hashChange() const {
    return emlite::Val::get("hashChange").as<bool>();
}

void NavigateEventInit::hashChange(bool value) {
    emlite::Val::set("hashChange", value);
}

AbortSignal NavigateEventInit::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NavigateEventInit::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

FormData NavigateEventInit::formData() const {
    return emlite::Val::get("formData").as<FormData>();
}

void NavigateEventInit::formData(const FormData& value) {
    emlite::Val::set("formData", value);
}

jsbind::String NavigateEventInit::downloadRequest() const {
    return emlite::Val::get("downloadRequest").as<jsbind::String>();
}

void NavigateEventInit::downloadRequest(const jsbind::String& value) {
    emlite::Val::set("downloadRequest", value);
}

jsbind::Any NavigateEventInit::info() const {
    return emlite::Val::get("info").as<jsbind::Any>();
}

void NavigateEventInit::info(const jsbind::Any& value) {
    emlite::Val::set("info", value);
}

bool NavigateEventInit::hasUAVisualTransition() const {
    return emlite::Val::get("hasUAVisualTransition").as<bool>();
}

void NavigateEventInit::hasUAVisualTransition(bool value) {
    emlite::Val::set("hasUAVisualTransition", value);
}

Element NavigateEventInit::sourceElement() const {
    return emlite::Val::get("sourceElement").as<Element>();
}

void NavigateEventInit::sourceElement(const Element& value) {
    emlite::Val::set("sourceElement", value);
}


} // namespace webbind