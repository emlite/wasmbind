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
    [[nodiscard]] CacheQueryOptions clone() const noexcept;
    [[nodiscard]] bool ignoreSearch() const;
    void ignoreSearch(bool value);
    [[nodiscard]] bool ignoreMethod() const;
    void ignoreMethod(bool value);
    [[nodiscard]] bool ignoreVary() const;
    void ignoreVary(bool value);
};

/// The BackgroundFetchRegistration class.
/// [`BackgroundFetchRegistration`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration)
class BackgroundFetchRegistration : public EventTarget {
    explicit BackgroundFetchRegistration(Handle h) noexcept;

public:
    explicit BackgroundFetchRegistration(const emlite::Val &val) noexcept;
    static BackgroundFetchRegistration take_ownership(Handle h) noexcept;

    [[nodiscard]] BackgroundFetchRegistration clone() const noexcept;
    /// Getter of the `id` attribute.
    /// [`BackgroundFetchRegistration.id`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `uploadTotal` attribute.
    /// [`BackgroundFetchRegistration.uploadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploadTotal)
    [[nodiscard]] long long uploadTotal() const;
    /// Getter of the `uploaded` attribute.
    /// [`BackgroundFetchRegistration.uploaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploaded)
    [[nodiscard]] long long uploaded() const;
    /// Getter of the `downloadTotal` attribute.
    /// [`BackgroundFetchRegistration.downloadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloadTotal)
    [[nodiscard]] long long downloadTotal() const;
    /// Getter of the `downloaded` attribute.
    /// [`BackgroundFetchRegistration.downloaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloaded)
    [[nodiscard]] long long downloaded() const;
    /// Getter of the `result` attribute.
    /// [`BackgroundFetchRegistration.result`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/result)
    [[nodiscard]] BackgroundFetchResult result() const;
    /// Getter of the `failureReason` attribute.
    /// [`BackgroundFetchRegistration.failureReason`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/failureReason)
    [[nodiscard]] BackgroundFetchFailureReason failureReason() const;
    /// Getter of the `recordsAvailable` attribute.
    /// [`BackgroundFetchRegistration.recordsAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/recordsAvailable)
    [[nodiscard]] bool recordsAvailable() const;
    /// Getter of the `onprogress` attribute.
    /// [`BackgroundFetchRegistration.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/onprogress)
    [[nodiscard]] jsbind::Any onprogress() const;
    /// Setter of the `onprogress` attribute.
    /// [`BackgroundFetchRegistration.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/onprogress)
    void onprogress(const jsbind::Any& value);
    /// The abort method.
    /// [`BackgroundFetchRegistration.abort`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/abort)
    jsbind::Promise<bool> abort();
    /// The match method.
    /// [`BackgroundFetchRegistration.match`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/match)
    jsbind::Promise<BackgroundFetchRecord> match(const jsbind::Any& request);
    /// The match method.
    /// [`BackgroundFetchRegistration.match`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/match)
    jsbind::Promise<BackgroundFetchRecord> match(const jsbind::Any& request, const CacheQueryOptions& options);
    /// The matchAll method.
    /// [`BackgroundFetchRegistration.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/matchAll)
    jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> matchAll();
    /// The matchAll method.
    /// [`BackgroundFetchRegistration.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/matchAll)
    jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> matchAll(const jsbind::Any& request);
    /// The matchAll method.
    /// [`BackgroundFetchRegistration.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/matchAll)
    jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> matchAll(const jsbind::Any& request, const CacheQueryOptions& options);
};

