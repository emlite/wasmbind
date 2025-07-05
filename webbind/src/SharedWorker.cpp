#include <webbind/SharedWorker.hpp>
#include <webbind/MessagePort.hpp>


SharedWorker SharedWorker::take_ownership(Handle h) noexcept {
        return SharedWorker(h);
    }
SharedWorker SharedWorker::clone() const noexcept { return *this; }
SharedWorker::SharedWorker(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SharedWorker::SharedWorker(const emlite::Val &val) noexcept: EventTarget(val) {}


SharedWorker::SharedWorker(const jsbind::Any& scriptURL) : EventTarget(emlite::Val::global("SharedWorker").new_(scriptURL)) {}

SharedWorker::SharedWorker(const jsbind::Any& scriptURL, const jsbind::Any& options) : EventTarget(emlite::Val::global("SharedWorker").new_(scriptURL, options)) {}

jsbind::Any SharedWorker::port() const {
    return EventTarget::get("port").as<jsbind::Any>();
}

jsbind::Any SharedWorker::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SharedWorker::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

