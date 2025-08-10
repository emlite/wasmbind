#include <webbind/MessageEventInit.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

MessageEventInit::MessageEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MessageEventInit MessageEventInit::take_ownership(Handle h) noexcept {
    return MessageEventInit(h);
}

MessageEventInit::MessageEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

MessageEventInit::MessageEventInit() noexcept: EventInit(emlite::Val::object()) {}

MessageEventInit MessageEventInit::clone() const noexcept { return *this; }

jsbind::Any MessageEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void MessageEventInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::String MessageEventInit::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void MessageEventInit::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

jsbind::String MessageEventInit::lastEventId() const {
    return emlite::Val::get("lastEventId").as<jsbind::String>();
}

void MessageEventInit::lastEventId(const jsbind::String& value) {
    emlite::Val::set("lastEventId", value);
}

jsbind::Any MessageEventInit::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void MessageEventInit::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

jsbind::TypedArray<MessagePort> MessageEventInit::ports() const {
    return emlite::Val::get("ports").as<jsbind::TypedArray<MessagePort>>();
}

void MessageEventInit::ports(const jsbind::TypedArray<MessagePort>& value) {
    emlite::Val::set("ports", value);
}


} // namespace webbind