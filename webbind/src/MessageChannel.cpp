#include <webbind/MessageChannel.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

MessageChannel MessageChannel::take_ownership(Handle h) noexcept {
    return MessageChannel(h);
}

MessageChannel MessageChannel::clone() const noexcept { return *this; }

emlite::Val MessageChannel::instance() noexcept { return emlite::Val::global("MessageChannel"); }

MessageChannel::MessageChannel(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

MessageChannel::MessageChannel(const emlite::Val &val) noexcept: emlite::Val(val) {}

MessageChannel::MessageChannel() : emlite::Val(emlite::Val::global("MessageChannel").new_()) {}

MessagePort MessageChannel::port1() const {
    return emlite::Val::get("port1").as<MessagePort>();
}

MessagePort MessageChannel::port2() const {
    return emlite::Val::get("port2").as<MessagePort>();
}


} // namespace webbind