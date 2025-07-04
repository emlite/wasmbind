#include <webbind/Client.hpp>
#include <webbind/MessagePort.hpp>


Client Client::take_ownership(Handle h) noexcept {
        return Client(h);
    }
Client Client::clone() const noexcept { return *this; }
Client::Client(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Client::Client(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString Client::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

FrameType Client::frameType() const {
    return emlite::Val::get("frameType").as<FrameType>();
}

jsbind::DOMString Client::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

ClientType Client::type() const {
    return emlite::Val::get("type").as<ClientType>();
}

jsbind::Undefined Client::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return emlite::Val::call("postMessage", message, options).as<jsbind::Undefined>();
}

ClientLifecycleState Client::lifecycleState() const {
    return emlite::Val::get("lifecycleState").as<ClientLifecycleState>();
}

