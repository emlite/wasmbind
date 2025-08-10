#include "webbind/StorageBucketOptions.hpp"

using emlite::Val;
namespace webbind {

StorageBucketOptions::StorageBucketOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucketOptions StorageBucketOptions::take_ownership(Handle h) noexcept {
        return StorageBucketOptions(h);
    }
StorageBucketOptions::StorageBucketOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StorageBucketOptions::StorageBucketOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StorageBucketOptions StorageBucketOptions::clone() const noexcept { return *this; }

bool StorageBucketOptions::persisted() const {
    return emlite::Val::get("persisted").as<bool>();
}

void StorageBucketOptions::persisted(bool value) {
    emlite::Val::set("persisted", value);
}

long long StorageBucketOptions::quota() const {
    return emlite::Val::get("quota").as<long long>();
}

void StorageBucketOptions::quota(long long value) {
    emlite::Val::set("quota", value);
}

jsbind::Any StorageBucketOptions::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void StorageBucketOptions::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}


} // namespace webbind