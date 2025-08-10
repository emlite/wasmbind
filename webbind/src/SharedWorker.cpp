#include <webbind/SharedWorker.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

SharedWorker SharedWorker::take_ownership(Handle h) noexcept {
    return SharedWorker(h);
}

SharedWorker SharedWorker::clone() const noexcept { return *this; }

emlite::Val SharedWorker::instance() noexcept { return emlite::Val::global("SharedWorker"); }

SharedWorker::SharedWorker(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

SharedWorker::SharedWorker(const emlite::Val &val) noexcept: EventTarget(val) {}

SharedWorker::SharedWorker(const jsbind::Any& scriptURL) : EventTarget(emlite::Val::global("SharedWorker").new_(scriptURL)) {}

SharedWorker::SharedWorker(const jsbind::Any& scriptURL, const jsbind::Any& options) : EventTarget(emlite::Val::global("SharedWorker").new_(scriptURL, options)) {}

MessagePort SharedWorker::port() const {
    return EventTarget::get("port").as<MessagePort>();
}

jsbind::Any SharedWorker::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SharedWorker::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind