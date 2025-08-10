#include <webbind/SharedStorageRunOperationMethodOptions.hpp>
#include <webbind/SharedStoragePrivateAggregationConfig.hpp>

using emlite::Val;
namespace webbind {

SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions::take_ownership(Handle h) noexcept {
        return SharedStorageRunOperationMethodOptions(h);
    }
SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions::clone() const noexcept { return *this; }

jsbind::Object SharedStorageRunOperationMethodOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void SharedStorageRunOperationMethodOptions::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}

bool SharedStorageRunOperationMethodOptions::resolveToConfig() const {
    return emlite::Val::get("resolveToConfig").as<bool>();
}

void SharedStorageRunOperationMethodOptions::resolveToConfig(bool value) {
    emlite::Val::set("resolveToConfig", value);
}

bool SharedStorageRunOperationMethodOptions::keepAlive() const {
    return emlite::Val::get("keepAlive").as<bool>();
}

void SharedStorageRunOperationMethodOptions::keepAlive(bool value) {
    emlite::Val::set("keepAlive", value);
}

SharedStoragePrivateAggregationConfig SharedStorageRunOperationMethodOptions::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<SharedStoragePrivateAggregationConfig>();
}

void SharedStorageRunOperationMethodOptions::privateAggregationConfig(const SharedStoragePrivateAggregationConfig& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

jsbind::String SharedStorageRunOperationMethodOptions::savedQuery() const {
    return emlite::Val::get("savedQuery").as<jsbind::String>();
}

void SharedStorageRunOperationMethodOptions::savedQuery(const jsbind::String& value) {
    emlite::Val::set("savedQuery", value);
}


} // namespace webbind