#include <webbind/CacheQueryOptions.hpp>

using emlite::Val;
namespace webbind {

CacheQueryOptions::CacheQueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CacheQueryOptions CacheQueryOptions::take_ownership(Handle h) noexcept {
        return CacheQueryOptions(h);
    }
CacheQueryOptions::CacheQueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CacheQueryOptions::CacheQueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CacheQueryOptions CacheQueryOptions::clone() const noexcept { return *this; }

bool CacheQueryOptions::ignoreSearch() const {
    return emlite::Val::get("ignoreSearch").as<bool>();
}

void CacheQueryOptions::ignoreSearch(bool value) {
    emlite::Val::set("ignoreSearch", value);
}

bool CacheQueryOptions::ignoreMethod() const {
    return emlite::Val::get("ignoreMethod").as<bool>();
}

void CacheQueryOptions::ignoreMethod(bool value) {
    emlite::Val::set("ignoreMethod", value);
}

bool CacheQueryOptions::ignoreVary() const {
    return emlite::Val::get("ignoreVary").as<bool>();
}

void CacheQueryOptions::ignoreVary(bool value) {
    emlite::Val::set("ignoreVary", value);
}


} // namespace webbind