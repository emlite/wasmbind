#include <webbind/EventSource.hpp>
#include <webbind/EventSourceInit.hpp>

namespace webbind {

EventSource EventSource::take_ownership(Handle h) noexcept {
        return EventSource(h);
    }
EventSource EventSource::clone() const noexcept { return *this; }
emlite::Val EventSource::instance() noexcept { return emlite::Val::global("EventSource"); }
EventSource::EventSource(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
EventSource::EventSource(const emlite::Val &val) noexcept: EventTarget(val) {}

EventSource::EventSource(const jsbind::String& url) : EventTarget(emlite::Val::global("EventSource").new_(url)) {}

EventSource::EventSource(const jsbind::String& url, const EventSourceInit& eventSourceInitDict) : EventTarget(emlite::Val::global("EventSource").new_(url, eventSourceInitDict)) {}

jsbind::String EventSource::url() const {
    return EventTarget::get("url").as<jsbind::String>();
}

bool EventSource::withCredentials() const {
    return EventTarget::get("withCredentials").as<bool>();
}

unsigned short EventSource::readyState() const {
    return EventTarget::get("readyState").as<unsigned short>();
}

jsbind::Any EventSource::onopen() const {
    return EventTarget::get("onopen").as<jsbind::Any>();
}

void EventSource::onopen(const jsbind::Any& value) {
    EventTarget::set("onopen", value);
}

jsbind::Any EventSource::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void EventSource::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any EventSource::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void EventSource::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Undefined EventSource::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}


} // namespace webbind