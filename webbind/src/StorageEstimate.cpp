#include <webbind/StorageEstimate.hpp>

using emlite::Val;
namespace webbind {

StorageEstimate::StorageEstimate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageEstimate StorageEstimate::take_ownership(Handle h) noexcept {
        return StorageEstimate(h);
    }
StorageEstimate::StorageEstimate(const emlite::Val &val) noexcept: emlite::Val(val) {}
StorageEstimate::StorageEstimate() noexcept: emlite::Val(emlite::Val::object()) {}
StorageEstimate StorageEstimate::clone() const noexcept { return *this; }

long long StorageEstimate::usage() const {
    return emlite::Val::get("usage").as<long long>();
}

void StorageEstimate::usage(long long value) {
    emlite::Val::set("usage", value);
}

long long StorageEstimate::quota() const {
    return emlite::Val::get("quota").as<long long>();
}

void StorageEstimate::quota(long long value) {
    emlite::Val::set("quota", value);
}


} // namespace webbind