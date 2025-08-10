#include <webbind/WorkerGlobalScope.hpp>
#include <webbind/WorkerGlobalScope.hpp>
#include <webbind/WorkerLocation.hpp>
#include <webbind/WorkerNavigator.hpp>
#include <webbind/FontFaceSet.hpp>
#include <webbind/Crypto.hpp>

namespace webbind {

WorkerGlobalScope WorkerGlobalScope::take_ownership(Handle h) noexcept {
    return WorkerGlobalScope(h);
}

WorkerGlobalScope WorkerGlobalScope::clone() const noexcept { return *this; }

emlite::Val WorkerGlobalScope::instance() noexcept { return emlite::Val::global("WorkerGlobalScope"); }

WorkerGlobalScope::WorkerGlobalScope(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

WorkerGlobalScope::WorkerGlobalScope(const emlite::Val &val) noexcept: EventTarget(val) {}

WorkerGlobalScope WorkerGlobalScope::self() const {
    return EventTarget::get("self").as<WorkerGlobalScope>();
}

WorkerLocation WorkerGlobalScope::location() const {
    return EventTarget::get("location").as<WorkerLocation>();
}

WorkerNavigator WorkerGlobalScope::navigator() const {
    return EventTarget::get("navigator").as<WorkerNavigator>();
}

jsbind::Undefined WorkerGlobalScope::importScripts(const jsbind::Any& urls) {
    return EventTarget::call("importScripts", urls).as<jsbind::Undefined>();
}

jsbind::Any WorkerGlobalScope::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void WorkerGlobalScope::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any WorkerGlobalScope::onlanguagechange() const {
    return EventTarget::get("onlanguagechange").as<jsbind::Any>();
}

void WorkerGlobalScope::onlanguagechange(const jsbind::Any& value) {
    EventTarget::set("onlanguagechange", value);
}

jsbind::Any WorkerGlobalScope::onoffline() const {
    return EventTarget::get("onoffline").as<jsbind::Any>();
}

void WorkerGlobalScope::onoffline(const jsbind::Any& value) {
    EventTarget::set("onoffline", value);
}

jsbind::Any WorkerGlobalScope::ononline() const {
    return EventTarget::get("ononline").as<jsbind::Any>();
}

void WorkerGlobalScope::ononline(const jsbind::Any& value) {
    EventTarget::set("ononline", value);
}

jsbind::Any WorkerGlobalScope::onrejectionhandled() const {
    return EventTarget::get("onrejectionhandled").as<jsbind::Any>();
}

void WorkerGlobalScope::onrejectionhandled(const jsbind::Any& value) {
    EventTarget::set("onrejectionhandled", value);
}

jsbind::Any WorkerGlobalScope::onunhandledrejection() const {
    return EventTarget::get("onunhandledrejection").as<jsbind::Any>();
}

void WorkerGlobalScope::onunhandledrejection(const jsbind::Any& value) {
    EventTarget::set("onunhandledrejection", value);
}

FontFaceSet WorkerGlobalScope::fonts() const {
    return EventTarget::get("fonts").as<FontFaceSet>();
}

Crypto WorkerGlobalScope::crypto() const {
    return EventTarget::get("crypto").as<Crypto>();
}


} // namespace webbind