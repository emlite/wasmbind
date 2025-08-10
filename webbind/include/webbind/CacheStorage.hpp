#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MultiCacheQueryOptions;
class Cache;

/// Interface CacheStorage
/// [`CacheStorage`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage)
class CacheStorage : public emlite::Val {
    explicit CacheStorage(Handle h) noexcept;
public:
    explicit CacheStorage(const emlite::Val &val) noexcept;
    static CacheStorage take_ownership(Handle h) noexcept;
    [[nodiscard]] CacheStorage clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The match method.
    /// [`CacheStorage.match`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/match)
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request);
    /// The match method.
    /// [`CacheStorage.match`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/match)
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request, const MultiCacheQueryOptions& options);
    /// The has method.
    /// [`CacheStorage.has`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/has)
    jsbind::Promise<bool> has(const jsbind::String& cacheName);
    /// The open method.
    /// [`CacheStorage.open`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/open)
    jsbind::Promise<Cache> open(const jsbind::String& cacheName);
    /// The delete method.
    /// [`CacheStorage.delete`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/delete)
    jsbind::Promise<bool> delete_(const jsbind::String& cacheName);
    /// The keys method.
    /// [`CacheStorage.keys`](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage/keys)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> keys();
};

} // namespace webbind