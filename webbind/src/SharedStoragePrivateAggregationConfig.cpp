#include <webbind/SharedStoragePrivateAggregationConfig.hpp>

using emlite::Val;
namespace webbind {

SharedStoragePrivateAggregationConfig::SharedStoragePrivateAggregationConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStoragePrivateAggregationConfig SharedStoragePrivateAggregationConfig::take_ownership(Handle h) noexcept {
        return SharedStoragePrivateAggregationConfig(h);
    }
SharedStoragePrivateAggregationConfig::SharedStoragePrivateAggregationConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStoragePrivateAggregationConfig::SharedStoragePrivateAggregationConfig() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStoragePrivateAggregationConfig SharedStoragePrivateAggregationConfig::clone() const noexcept { return *this; }

jsbind::String SharedStoragePrivateAggregationConfig::aggregationCoordinatorOrigin() const {
    return emlite::Val::get("aggregationCoordinatorOrigin").as<jsbind::String>();
}

void SharedStoragePrivateAggregationConfig::aggregationCoordinatorOrigin(const jsbind::String& value) {
    emlite::Val::set("aggregationCoordinatorOrigin", value);
}

jsbind::String SharedStoragePrivateAggregationConfig::contextId() const {
    return emlite::Val::get("contextId").as<jsbind::String>();
}

void SharedStoragePrivateAggregationConfig::contextId(const jsbind::String& value) {
    emlite::Val::set("contextId", value);
}

long long SharedStoragePrivateAggregationConfig::filteringIdMaxBytes() const {
    return emlite::Val::get("filteringIdMaxBytes").as<long long>();
}

void SharedStoragePrivateAggregationConfig::filteringIdMaxBytes(long long value) {
    emlite::Val::set("filteringIdMaxBytes", value);
}

long long SharedStoragePrivateAggregationConfig::maxContributions() const {
    return emlite::Val::get("maxContributions").as<long long>();
}

void SharedStoragePrivateAggregationConfig::maxContributions(long long value) {
    emlite::Val::set("maxContributions", value);
}


} // namespace webbind