#include "webbind/StorageInterestGroup.hpp"

using emlite::Val;
namespace webbind {

StorageInterestGroup::StorageInterestGroup(Handle h) noexcept : AuctionAdInterestGroup(emlite::Val::take_ownership(h)) {}
StorageInterestGroup StorageInterestGroup::take_ownership(Handle h) noexcept {
        return StorageInterestGroup(h);
    }
StorageInterestGroup::StorageInterestGroup(const emlite::Val &val) noexcept: AuctionAdInterestGroup(val) {}
StorageInterestGroup::StorageInterestGroup() noexcept: AuctionAdInterestGroup(emlite::Val::object()) {}
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

jsbind::TypedArray<jsbind::Any> StorageInterestGroup::prevWinsMs() const {
    return emlite::Val::get("prevWinsMs").as<jsbind::TypedArray<jsbind::Any>>();
}

void StorageInterestGroup::prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("prevWinsMs", value);
}

jsbind::String StorageInterestGroup::joiningOrigin() const {
    return emlite::Val::get("joiningOrigin").as<jsbind::String>();
}

void StorageInterestGroup::joiningOrigin(const jsbind::String& value) {
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


} // namespace webbind