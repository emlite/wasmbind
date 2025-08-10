#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface PerformanceTiming
/// [`PerformanceTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming)
class PerformanceTiming : public emlite::Val {
    explicit PerformanceTiming(Handle h) noexcept;
public:
    explicit PerformanceTiming(const emlite::Val &val) noexcept;
    static PerformanceTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceTiming.navigationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/navigationStart)
    /// [`PerformanceTiming.navigationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/navigationStart)
    [[nodiscard]] long long navigationStart() const;
    /// [`PerformanceTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventStart)
    /// [`PerformanceTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventStart)
    [[nodiscard]] long long unloadEventStart() const;
    /// [`PerformanceTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventEnd)
    /// [`PerformanceTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventEnd)
    [[nodiscard]] long long unloadEventEnd() const;
    /// [`PerformanceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectStart)
    /// [`PerformanceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectStart)
    [[nodiscard]] long long redirectStart() const;
    /// [`PerformanceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectEnd)
    /// [`PerformanceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectEnd)
    [[nodiscard]] long long redirectEnd() const;
    /// [`PerformanceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/fetchStart)
    /// [`PerformanceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/fetchStart)
    [[nodiscard]] long long fetchStart() const;
    /// [`PerformanceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupStart)
    /// [`PerformanceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupStart)
    [[nodiscard]] long long domainLookupStart() const;
    /// [`PerformanceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupEnd)
    /// [`PerformanceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupEnd)
    [[nodiscard]] long long domainLookupEnd() const;
    /// [`PerformanceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectStart)
    /// [`PerformanceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectStart)
    [[nodiscard]] long long connectStart() const;
    /// [`PerformanceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectEnd)
    /// [`PerformanceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectEnd)
    [[nodiscard]] long long connectEnd() const;
    /// [`PerformanceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/secureConnectionStart)
    /// [`PerformanceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/secureConnectionStart)
    [[nodiscard]] long long secureConnectionStart() const;
    /// [`PerformanceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/requestStart)
    /// [`PerformanceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/requestStart)
    [[nodiscard]] long long requestStart() const;
    /// [`PerformanceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseStart)
    /// [`PerformanceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseStart)
    [[nodiscard]] long long responseStart() const;
    /// [`PerformanceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseEnd)
    /// [`PerformanceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseEnd)
    [[nodiscard]] long long responseEnd() const;
    /// [`PerformanceTiming.domLoading`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domLoading)
    /// [`PerformanceTiming.domLoading`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domLoading)
    [[nodiscard]] long long domLoading() const;
    /// [`PerformanceTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domInteractive)
    /// [`PerformanceTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domInteractive)
    [[nodiscard]] long long domInteractive() const;
    /// [`PerformanceTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventStart)
    /// [`PerformanceTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventStart)
    [[nodiscard]] long long domContentLoadedEventStart() const;
    /// [`PerformanceTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventEnd)
    /// [`PerformanceTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventEnd)
    [[nodiscard]] long long domContentLoadedEventEnd() const;
    /// [`PerformanceTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domComplete)
    /// [`PerformanceTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domComplete)
    [[nodiscard]] long long domComplete() const;
    /// [`PerformanceTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventStart)
    /// [`PerformanceTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventStart)
    [[nodiscard]] long long loadEventStart() const;
    /// [`PerformanceTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventEnd)
    /// [`PerformanceTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventEnd)
    [[nodiscard]] long long loadEventEnd() const;
    /// The toJSON method.
    /// [`PerformanceTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind