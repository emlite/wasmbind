#include <webbind/SharedStorageWorkletGlobalScope.hpp>
#include <webbind/SharedStorage.hpp>
#include <webbind/PrivateAggregation.hpp>
#include <webbind/SharedStorageWorkletNavigator.hpp>


StorageInterestGroup::StorageInterestGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageInterestGroup StorageInterestGroup::take_ownership(Handle h) noexcept {
        return StorageInterestGroup(h);
    }
StorageInterestGroup::StorageInterestGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}
StorageInterestGroup::StorageInterestGroup() noexcept: emlite::Val(emlite::Val::object()) {}
StorageInterestGroup StorageInterestGroup::clone() const noexcept { return *this; }

long long StorageInterestGroup::joinCount() const {
    return emlite::Val::get("joinCount").as<long long>();
}

void StorageInterestGroup::joinCount(long long value) {
    emlite::Val::set("joinCount", value);
}

long long StorageInterestGroup::bidCount() const {
    return emlite::Val::get("bidCount").as<long long>();
}

void StorageInterestGroup::bidCount(long long value) {
    emlite::Val::set("bidCount", value);
}

jsbind::Sequence<jsbind::Any> StorageInterestGroup::prevWinsMs() const {
    return emlite::Val::get("prevWinsMs").as<jsbind::Sequence<jsbind::Any>>();
}

void StorageInterestGroup::prevWinsMs(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("prevWinsMs", value);
}

jsbind::USVString StorageInterestGroup::joiningOrigin() const {
    return emlite::Val::get("joiningOrigin").as<jsbind::USVString>();
}

void StorageInterestGroup::joiningOrigin(const jsbind::USVString& value) {
    emlite::Val::set("joiningOrigin", value);
}

long long StorageInterestGroup::timeSinceGroupJoinedMs() const {
    return emlite::Val::get("timeSinceGroupJoinedMs").as<long long>();
}

void StorageInterestGroup::timeSinceGroupJoinedMs(long long value) {
    emlite::Val::set("timeSinceGroupJoinedMs", value);
}

long long StorageInterestGroup::lifetimeRemainingMs() const {
    return emlite::Val::get("lifetimeRemainingMs").as<long long>();
}

void StorageInterestGroup::lifetimeRemainingMs(long long value) {
    emlite::Val::set("lifetimeRemainingMs", value);
}

long long StorageInterestGroup::timeSinceLastUpdateMs() const {
    return emlite::Val::get("timeSinceLastUpdateMs").as<long long>();
}

void StorageInterestGroup::timeSinceLastUpdateMs(long long value) {
    emlite::Val::set("timeSinceLastUpdateMs", value);
}

long long StorageInterestGroup::timeUntilNextUpdateMs() const {
    return emlite::Val::get("timeUntilNextUpdateMs").as<long long>();
}

void StorageInterestGroup::timeUntilNextUpdateMs(long long value) {
    emlite::Val::set("timeUntilNextUpdateMs", value);
}

long long StorageInterestGroup::estimatedSize() const {
    return emlite::Val::get("estimatedSize").as<long long>();
}

void StorageInterestGroup::estimatedSize(long long value) {
    emlite::Val::set("estimatedSize", value);
}

SharedStorageWorkletGlobalScope SharedStorageWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return SharedStorageWorkletGlobalScope(h);
    }
SharedStorageWorkletGlobalScope SharedStorageWorkletGlobalScope::clone() const noexcept { return *this; }
SharedStorageWorkletGlobalScope::SharedStorageWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
SharedStorageWorkletGlobalScope::SharedStorageWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}


jsbind::Undefined SharedStorageWorkletGlobalScope::register_(const jsbind::DOMString& name, const jsbind::Function& operationCtor) {
    return WorkletGlobalScope::call("register", name, operationCtor).as<jsbind::Undefined>();
}

SharedStorage SharedStorageWorkletGlobalScope::sharedStorage() const {
    return WorkletGlobalScope::get("sharedStorage").as<SharedStorage>();
}

PrivateAggregation SharedStorageWorkletGlobalScope::privateAggregation() const {
    return WorkletGlobalScope::get("privateAggregation").as<PrivateAggregation>();
}

jsbind::Promise<jsbind::Sequence<StorageInterestGroup>> SharedStorageWorkletGlobalScope::interestGroups() {
    return WorkletGlobalScope::call("interestGroups").as<jsbind::Promise<jsbind::Sequence<StorageInterestGroup>>>();
}

SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope::navigator() const {
    return WorkletGlobalScope::get("navigator").as<SharedStorageWorkletNavigator>();
}

