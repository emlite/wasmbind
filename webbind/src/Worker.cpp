#include <webbind/Worker.hpp>
#include <webbind/WorkerOptions.hpp>
#include <webbind/StructuredSerializeOptions.hpp>

namespace webbind {

Worker Worker::take_ownership(Handle h) noexcept {
    return Worker(h);
}

Worker Worker::clone() const noexcept { return *this; }

emlite::Val Worker::instance() noexcept { return emlite::Val::global("Worker"); }

Worker::Worker(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

Worker::Worker(const emlite::Val &val) noexcept: EventTarget(val) {}

Worker::Worker(const jsbind::Any& scriptURL) : EventTarget(emlite::Val::global("Worker").new_(scriptURL)) {}

Worker::Worker(const jsbind::Any& scriptURL, const WorkerOptions& options) : EventTarget(emlite::Val::global("Worker").new_(scriptURL, options)) {}

jsbind::Undefined Worker::terminate() {
    return EventTarget::call("terminate").as<jsbind::Undefined>();
}

jsbind::Undefined Worker::postMessage(const jsbind::Any& message, const jsbind::TypedArray<jsbind::Object>& transfer) {
    return EventTarget::call("postMessage", message, transfer).as<jsbind::Undefined>();
}

jsbind::Undefined Worker::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined Worker::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return EventTarget::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Any Worker::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void Worker::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any Worker::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void Worker::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any Worker::onmessageerror() const {
    return EventTarget::get("onmessageerror").as<jsbind::Any>();
}

void Worker::onmessageerror(const jsbind::Any& value) {
    EventTarget::set("onmessageerror", value);
}


} // namespace webbind