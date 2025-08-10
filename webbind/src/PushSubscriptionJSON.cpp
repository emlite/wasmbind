#include <webbind/PushSubscriptionJSON.hpp>

using emlite::Val;
namespace webbind {

PushSubscriptionJSON::PushSubscriptionJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionJSON PushSubscriptionJSON::take_ownership(Handle h) noexcept {
        return PushSubscriptionJSON(h);
    }
PushSubscriptionJSON::PushSubscriptionJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PushSubscriptionJSON::PushSubscriptionJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PushSubscriptionJSON PushSubscriptionJSON::clone() const noexcept { return *this; }

jsbind::String PushSubscriptionJSON::endpoint() const {
    return emlite::Val::get("endpoint").as<jsbind::String>();
}

void PushSubscriptionJSON::endpoint(const jsbind::String& value) {
    emlite::Val::set("endpoint", value);
}

jsbind::Any PushSubscriptionJSON::expirationTime() const {
    return emlite::Val::get("expirationTime").as<jsbind::Any>();
}

void PushSubscriptionJSON::expirationTime(const jsbind::Any& value) {
    emlite::Val::set("expirationTime", value);
}

jsbind::Record<jsbind::String, jsbind::String> PushSubscriptionJSON::keys() const {
    return emlite::Val::get("keys").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void PushSubscriptionJSON::keys(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("keys", value);
}


} // namespace webbind