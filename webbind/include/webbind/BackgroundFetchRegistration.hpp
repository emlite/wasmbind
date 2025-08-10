#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "CacheQueryOptions.hpp"
#include "enums.hpp"

namespace webbind {

class BackgroundFetchRecord;

/// Interface BackgroundFetchRegistration
/// [`BackgroundFetchRegistration`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration)
class BackgroundFetchRegistration : public EventTarget {
    explicit BackgroundFetchRegistration(Handle h) noexcept;
public:
    explicit BackgroundFetchRegistration(const emlite::Val &val) noexcept;
    static BackgroundFetchRegistration take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchRegistration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`BackgroundFetchRegistration.id`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/id)
    /// [`BackgroundFetchRegistration.id`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`BackgroundFetchRegistration.uploadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploadTotal)
    /// [`BackgroundFetchRegistration.uploadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploadTotal)
    [[nodiscard]] long long uploadTotal() const;
    /// [`BackgroundFetchRegistration.uploaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploaded)
    /// [`BackgroundFetchRegistration.uploaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/uploaded)
    [[nodiscard]] long long uploaded() const;
    /// [`BackgroundFetchRegistration.downloadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloadTotal)
    /// [`BackgroundFetchRegistration.downloadTotal`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloadTotal)
    [[nodiscard]] long long downloadTotal() const;
    /// [`BackgroundFetchRegistration.downloaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloaded)
    /// [`BackgroundFetchRegistration.downloaded`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/downloaded)
    [[nodiscard]] long long downloaded() const;
    /// [`BackgroundFetchRegistration.result`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/result)
    /// [`BackgroundFetchRegistration.result`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/result)
    [[nodiscard]] BackgroundFetchResult result() const;
    /// [`BackgroundFetchRegistration.failureReason`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/failureReason)
    /// [`BackgroundFetchRegistration.failureReason`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/failureReason)
    [[nodiscard]] BackgroundFetchFailureReason failureReason() const;
    /// [`BackgroundFetchRegistration.recordsAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/recordsAvailable)
    /// [`BackgroundFetchRegistration.recordsAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/recordsAvailable)
    [[nodiscard]] bool recordsAvailable() const;
    /// [`BackgroundFetchRegistration.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration/onprogress)
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

} // namespace webbind