#include <webbind/PaymentManager.hpp>


PaymentManager PaymentManager::take_ownership(Handle h) noexcept {
        return PaymentManager(h);
    }
PaymentManager PaymentManager::clone() const noexcept { return *this; }
PaymentManager::PaymentManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentManager::PaymentManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString PaymentManager::userHint() const {
    return emlite::Val::get("userHint").as<jsbind::DOMString>();
}

void PaymentManager::userHint(const jsbind::DOMString& value) {
    emlite::Val::set("userHint", value);
}

jsbind::Promise<jsbind::Undefined> PaymentManager::enableDelegations(const jsbind::Sequence<PaymentDelegation>& delegations) {
    return emlite::Val::call("enableDelegations", delegations).as<jsbind::Promise<jsbind::Undefined>>();
}

