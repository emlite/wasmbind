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
    /// Getter of the `navigationStart` attribute.
    /// [`PerformanceTiming.navigationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/navigationStart)
    [[nodiscard]] long long navigationStart() const;
    /// Getter of the `unloadEventStart` attribute.
    /// [`PerformanceTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventStart)
    [[nodiscard]] long long unloadEventStart() const;
    /// Getter of the `unloadEventEnd` attribute.
    /// [`PerformanceTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/unloadEventEnd)
    [[nodiscard]] long long unloadEventEnd() const;
    /// Getter of the `redirectStart` attribute.
    /// [`PerformanceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectStart)
    [[nodiscard]] long long redirectStart() const;
    /// Getter of the `redirectEnd` attribute.
    /// [`PerformanceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/redirectEnd)
    [[nodiscard]] long long redirectEnd() const;
    /// Getter of the `fetchStart` attribute.
    /// [`PerformanceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/fetchStart)
    [[nodiscard]] long long fetchStart() const;
    /// Getter of the `domainLookupStart` attribute.
    /// [`PerformanceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupStart)
    [[nodiscard]] long long domainLookupStart() const;
    /// Getter of the `domainLookupEnd` attribute.
    /// [`PerformanceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domainLookupEnd)
    [[nodiscard]] long long domainLookupEnd() const;
    /// Getter of the `connectStart` attribute.
    /// [`PerformanceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectStart)
    [[nodiscard]] long long connectStart() const;
    /// Getter of the `connectEnd` attribute.
    /// [`PerformanceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/connectEnd)
    [[nodiscard]] long long connectEnd() const;
    /// Getter of the `secureConnectionStart` attribute.
    /// [`PerformanceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/secureConnectionStart)
    [[nodiscard]] long long secureConnectionStart() const;
    /// Getter of the `requestStart` attribute.
    /// [`PerformanceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/requestStart)
    [[nodiscard]] long long requestStart() const;
    /// Getter of the `responseStart` attribute.
    /// [`PerformanceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseStart)
    [[nodiscard]] long long responseStart() const;
    /// Getter of the `responseEnd` attribute.
    /// [`PerformanceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/responseEnd)
    [[nodiscard]] long long responseEnd() const;
    /// Getter of the `domLoading` attribute.
    /// [`PerformanceTiming.domLoading`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domLoading)
    [[nodiscard]] long long domLoading() const;
    /// Getter of the `domInteractive` attribute.
    /// [`PerformanceTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domInteractive)
    [[nodiscard]] long long domInteractive() const;
    /// Getter of the `domContentLoadedEventStart` attribute.
    /// [`PerformanceTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventStart)
    [[nodiscard]] long long domContentLoadedEventStart() const;
    /// Getter of the `domContentLoadedEventEnd` attribute.
    /// [`PerformanceTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domContentLoadedEventEnd)
    [[nodiscard]] long long domContentLoadedEventEnd() const;
    /// Getter of the `domComplete` attribute.
    /// [`PerformanceTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/domComplete)
    [[nodiscard]] long long domComplete() const;
    /// Getter of the `loadEventStart` attribute.
    /// [`PerformanceTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventStart)
    [[nodiscard]] long long loadEventStart() const;
    /// Getter of the `loadEventEnd` attribute.
    /// [`PerformanceTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/loadEventEnd)
    [[nodiscard]] long long loadEventEnd() const;
    /// The toJSON method.
    /// [`PerformanceTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind