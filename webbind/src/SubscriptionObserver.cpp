#include "webbind/SubscriptionObserver.hpp"

using emlite::Val;
namespace webbind {

SubscriptionObserver::SubscriptionObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SubscriptionObserver SubscriptionObserver::take_ownership(Handle h) noexcept {
        return SubscriptionObserver(h);
    }
SubscriptionObserver::SubscriptionObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}
SubscriptionObserver::SubscriptionObserver() noexcept: emlite::Val(emlite::Val::object()) {}
SubscriptionObserver SubscriptionObserver::clone() const noexcept { return *this; }

jsbind::Function SubscriptionObserver::next() const {
    return emlite::Val::get("next").as<jsbind::Function>();
}

void SubscriptionObserver::next(const jsbind::Function& value) {
    emlite::Val::set("next", value);
}

jsbind::Function SubscriptionObserver::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void SubscriptionObserver::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}

jsbind::Function SubscriptionObserver::complete() const {
    return emlite::Val::get("complete").as<jsbind::Function>();
}

void SubscriptionObserver::complete(const jsbind::Function& value) {
    emlite::Val::set("complete", value);
}


} // namespace webbind