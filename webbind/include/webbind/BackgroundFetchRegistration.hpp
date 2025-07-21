#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BackgroundFetchRecord;
class CacheQueryOptions;


class CacheQueryOptions : public emlite::Val {
  explicit CacheQueryOptions(Handle h) noexcept;
public:
    static CacheQueryOptions take_ownership(Handle h) noexcept;
    explicit CacheQueryOptions(const emlite::Val &val) noexcept;
    CacheQueryOptions() noexcept;
    CacheQueryOptions clone() const noexcept;
    bool ignoreSearch() const;
    void ignoreSearch(bool value);
    bool ignoreMethod() const;
    void ignoreMethod(bool value);
    bool ignoreVary() const;
    void ignoreVary(bool value);
};

class BackgroundFetchRegistration : public EventTarget {
    explicit BackgroundFetchRegistration(Handle h) noexcept;

public:
    explicit BackgroundFetchRegistration(const emlite::Val &val) noexcept;
    static BackgroundFetchRegistration take_ownership(Handle h) noexcept;

    BackgroundFetchRegistration clone() const noexcept;
    jsbind::DOMString id() const;
    long long uploadTotal() const;
    long long uploaded() const;
    long long downloadTotal() const;
    long long downloaded() const;
    BackgroundFetchResult result() const;
    BackgroundFetchFailureReason failureReason() const;
    bool recordsAvailable() const;
    jsbind::Any onprogress() const;
    void onprogress(const jsbind::Any& value);
    jsbind::Promise<bool> abort();
    jsbind::Promise<BackgroundFetchRecord> match(const jsbind::Any& request);
    jsbind::Promise<BackgroundFetchRecord> match(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise<jsbind::Sequence<BackgroundFetchRecord>> matchAll();
    jsbind::Promise<jsbind::Sequence<BackgroundFetchRecord>> matchAll(const jsbind::Any& request);
    jsbind::Promise<jsbind::Sequence<BackgroundFetchRecord>> matchAll(const jsbind::Any& request, const CacheQueryOptions& options);
};

