#include <webbind/ExtendableMessageEventInit.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

ExtendableMessageEventInit::ExtendableMessageEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
ExtendableMessageEventInit ExtendableMessageEventInit::take_ownership(Handle h) noexcept {
    return ExtendableMessageEventInit(h);
}

ExtendableMessageEventInit::ExtendableMessageEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}

ExtendableMessageEventInit::ExtendableMessageEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}

ExtendableMessageEventInit ExtendableMessageEventInit::clone() const noexcept { return *this; }

jsbind::Any ExtendableMessageEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void ExtendableMessageEventInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::String ExtendableMessageEventInit::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void ExtendableMessageEventInit::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

jsbind::String ExtendableMessageEventInit::lastEventId() const {
    return emlite::Val::get("lastEventId").as<jsbind::String>();
}

void ExtendableMessageEventInit::lastEventId(const jsbind::String& value) {
    emlite::Val::set("lastEventId", value);
}

jsbind::Any ExtendableMessageEventInit::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void ExtendableMessageEventInit::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

jsbind::TypedArray<MessagePort> ExtendableMessageEventInit::ports() const {
    return emlite::Val::get("ports").as<jsbind::TypedArray<MessagePort>>();
}

void ExtendableMessageEventInit::ports(const jsbind::TypedArray<MessagePort>& value) {
    emlite::Val::set("ports", value);
}


} // namespace webbind