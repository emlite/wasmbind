#include <webbind/XMLHttpRequestEventTarget.hpp>


XMLHttpRequestEventTarget XMLHttpRequestEventTarget::take_ownership(Handle h) noexcept {
        return XMLHttpRequestEventTarget(h);
    }
XMLHttpRequestEventTarget XMLHttpRequestEventTarget::clone() const noexcept { return *this; }
emlite::Val XMLHttpRequestEventTarget::instance() noexcept { return emlite::Val::global("XMLHttpRequestEventTarget"); }
XMLHttpRequestEventTarget::XMLHttpRequestEventTarget(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XMLHttpRequestEventTarget::XMLHttpRequestEventTarget(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any XMLHttpRequestEventTarget::onloadstart() const {
    return EventTarget::get("onloadstart").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onloadstart(const jsbind::Any& value) {
    EventTarget::set("onloadstart", value);
}

jsbind::Any XMLHttpRequestEventTarget::onprogress() const {
    return EventTarget::get("onprogress").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onprogress(const jsbind::Any& value) {
    EventTarget::set("onprogress", value);
}

jsbind::Any XMLHttpRequestEventTarget::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

jsbind::Any XMLHttpRequestEventTarget::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any XMLHttpRequestEventTarget::onload() const {
    return EventTarget::get("onload").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onload(const jsbind::Any& value) {
    EventTarget::set("onload", value);
}

jsbind::Any XMLHttpRequestEventTarget::ontimeout() const {
    return EventTarget::get("ontimeout").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::ontimeout(const jsbind::Any& value) {
    EventTarget::set("ontimeout", value);
}

jsbind::Any XMLHttpRequestEventTarget::onloadend() const {
    return EventTarget::get("onloadend").as<jsbind::Any>();
}

void XMLHttpRequestEventTarget::onloadend(const jsbind::Any& value) {
    EventTarget::set("onloadend", value);
}

