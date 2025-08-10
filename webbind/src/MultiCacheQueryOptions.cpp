#include "webbind/MultiCacheQueryOptions.hpp"

using emlite::Val;
namespace webbind {

MultiCacheQueryOptions::MultiCacheQueryOptions(Handle h) noexcept : CacheQueryOptions(emlite::Val::take_ownership(h)) {}
MultiCacheQueryOptions MultiCacheQueryOptions::take_ownership(Handle h) noexcept {
        return MultiCacheQueryOptions(h);
    }
MultiCacheQueryOptions::MultiCacheQueryOptions(const emlite::Val &val) noexcept: CacheQueryOptions(val) {}
MultiCacheQueryOptions::MultiCacheQueryOptions() noexcept: CacheQueryOptions(emlite::Val::object()) {}
MultiCacheQueryOptions MultiCacheQueryOptions::clone() const noexcept { return *this; }

jsbind::String MultiCacheQueryOptions::cacheName() const {
    return emlite::Val::get("cacheName").as<jsbind::String>();
}

void MultiCacheQueryOptions::cacheName(const jsbind::String& value) {
    emlite::Val::set("cacheName", value);
}


} // namespace webbind