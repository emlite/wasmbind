#include <webbind/PushSubscriptionOptionsInit.hpp>

using emlite::Val;
namespace webbind {

PushSubscriptionOptionsInit::PushSubscriptionOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionOptionsInit PushSubscriptionOptionsInit::take_ownership(Handle h) noexcept {
        return PushSubscriptionOptionsInit(h);
    }
PushSubscriptionOptionsInit::PushSubscriptionOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
PushSubscriptionOptionsInit::PushSubscriptionOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}
PushSubscriptionOptionsInit PushSubscriptionOptionsInit::clone() const noexcept { return *this; }

bool PushSubscriptionOptionsInit::userVisibleOnly() const {
    return emlite::Val::get("userVisibleOnly").as<bool>();
}

void PushSubscriptionOptionsInit::userVisibleOnly(bool value) {
    emlite::Val::set("userVisibleOnly", value);
}

jsbind::Any PushSubscriptionOptionsInit::applicationServerKey() const {
    return emlite::Val::get("applicationServerKey").as<jsbind::Any>();
}

void PushSubscriptionOptionsInit::applicationServerKey(const jsbind::Any& value) {
    emlite::Val::set("applicationServerKey", value);
}


} // namespace webbind