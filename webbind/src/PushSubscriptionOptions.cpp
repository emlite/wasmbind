#include <webbind/PushSubscriptionOptions.hpp>

namespace webbind {

PushSubscriptionOptions PushSubscriptionOptions::take_ownership(Handle h) noexcept {
        return PushSubscriptionOptions(h);
    }
PushSubscriptionOptions PushSubscriptionOptions::clone() const noexcept { return *this; }
emlite::Val PushSubscriptionOptions::instance() noexcept { return emlite::Val::global("PushSubscriptionOptions"); }
PushSubscriptionOptions::PushSubscriptionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionOptions::PushSubscriptionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool PushSubscriptionOptions::userVisibleOnly() const {
    return emlite::Val::get("userVisibleOnly").as<bool>();
}

jsbind::ArrayBuffer PushSubscriptionOptions::applicationServerKey() const {
    return emlite::Val::get("applicationServerKey").as<jsbind::ArrayBuffer>();
}


} // namespace webbind