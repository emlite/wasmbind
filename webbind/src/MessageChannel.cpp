#include <webbind/MessageChannel.hpp>
#include <webbind/MessagePort.hpp>


MessageChannel MessageChannel::take_ownership(Handle h) noexcept {
        return MessageChannel(h);
    }
MessageChannel MessageChannel::clone() const noexcept { return *this; }
MessageChannel::MessageChannel(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MessageChannel::MessageChannel(const emlite::Val &val) noexcept: emlite::Val(val) {}


MessageChannel::MessageChannel(): emlite::Val(emlite::Val::global("MessageChannel").new_()) {}

jsbind::Any MessageChannel::port1() const {
    return emlite::Val::get("port1").as<jsbind::Any>();
}

jsbind::Any MessageChannel::port2() const {
    return emlite::Val::get("port2").as<jsbind::Any>();
}

