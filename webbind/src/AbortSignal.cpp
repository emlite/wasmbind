#include <webbind/AbortSignal.hpp>


AbortSignal AbortSignal::take_ownership(Handle h) noexcept {
        return AbortSignal(h);
    }
AbortSignal AbortSignal::clone() const noexcept { return *this; }
AbortSignal::AbortSignal(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AbortSignal::AbortSignal(const emlite::Val &val) noexcept: EventTarget(val) {}


AbortSignal AbortSignal::abort() {
    return emlite::Val::global("abortsignal").call("abort").as<AbortSignal>();
}

AbortSignal AbortSignal::abort(const jsbind::Any& reason) {
    return emlite::Val::global("abortsignal").call("abort", reason).as<AbortSignal>();
}

AbortSignal AbortSignal::timeout(long long milliseconds) {
    return emlite::Val::global("abortsignal").call("timeout", milliseconds).as<AbortSignal>();
}

AbortSignal AbortSignal::any(const jsbind::Sequence<AbortSignal>& signals) {
    return emlite::Val::global("abortsignal").call("any", signals).as<AbortSignal>();
}

bool AbortSignal::aborted() const {
    return EventTarget::get("aborted").as<bool>();
}

jsbind::Any AbortSignal::reason() const {
    return EventTarget::get("reason").as<jsbind::Any>();
}

jsbind::Undefined AbortSignal::throwIfAborted() {
    return EventTarget::call("throwIfAborted").as<jsbind::Undefined>();
}

jsbind::Any AbortSignal::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void AbortSignal::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

