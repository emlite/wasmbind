#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MultiCacheQueryOptions;
class Cache;


class MultiCacheQueryOptions : public emlite::Val {
  explicit MultiCacheQueryOptions(Handle h) noexcept;
public:
    static MultiCacheQueryOptions take_ownership(Handle h) noexcept;
    explicit MultiCacheQueryOptions(const emlite::Val &val) noexcept;
    MultiCacheQueryOptions() noexcept;
    MultiCacheQueryOptions clone() const noexcept;
    jsbind::DOMString cacheName() const;
    void cacheName(const jsbind::DOMString& value);
};

class CacheStorage : public emlite::Val {
    explicit CacheStorage(Handle h) noexcept;

public:
    explicit CacheStorage(const emlite::Val &val) noexcept;
    static CacheStorage take_ownership(Handle h) noexcept;

    CacheStorage clone() const noexcept;
    jsbind::Promise match(const jsbind::Any& request);
    jsbind::Promise match(const jsbind::Any& request, const MultiCacheQueryOptions& options);
    jsbind::Promise has(const jsbind::DOMString& cacheName);
    jsbind::Promise open(const jsbind::DOMString& cacheName);
    jsbind::Promise delete_(const jsbind::DOMString& cacheName);
    jsbind::Promise keys();
};

