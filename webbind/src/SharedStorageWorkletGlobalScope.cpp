#include <webbind/SharedStorageWorkletGlobalScope.hpp>
#include <webbind/SharedStorage.hpp>
#include <webbind/PrivateAggregation.hpp>
#include <webbind/StorageInterestGroup.hpp>
#include <webbind/SharedStorageWorkletNavigator.hpp>

namespace webbind {

SharedStorageWorkletGlobalScope SharedStorageWorkletGlobalScope::take_ownership(Handle h) noexcept {
    return SharedStorageWorkletGlobalScope(h);
}

SharedStorageWorkletGlobalScope SharedStorageWorkletGlobalScope::clone() const noexcept { return *this; }

emlite::Val SharedStorageWorkletGlobalScope::instance() noexcept { return emlite::Val::global("SharedStorageWorkletGlobalScope"); }

SharedStorageWorkletGlobalScope::SharedStorageWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}

SharedStorageWorkletGlobalScope::SharedStorageWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}

jsbind::Undefined SharedStorageWorkletGlobalScope::register_(const jsbind::String& name, const jsbind::Function& operationCtor) {
    return WorkletGlobalScope::call("register", name, operationCtor).as<jsbind::Undefined>();
}

SharedStorage SharedStorageWorkletGlobalScope::sharedStorage() const {
    return WorkletGlobalScope::get("sharedStorage").as<SharedStorage>();
}

PrivateAggregation SharedStorageWorkletGlobalScope::privateAggregation() const {
    return WorkletGlobalScope::get("privateAggregation").as<PrivateAggregation>();
}

jsbind::Promise<jsbind::TypedArray<StorageInterestGroup>> SharedStorageWorkletGlobalScope::interestGroups() {
    return WorkletGlobalScope::call("interestGroups").as<jsbind::Promise<jsbind::TypedArray<StorageInterestGroup>>>();
}

SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope::navigator() const {
    return WorkletGlobalScope::get("navigator").as<SharedStorageWorkletNavigator>();
}


} // namespace webbind