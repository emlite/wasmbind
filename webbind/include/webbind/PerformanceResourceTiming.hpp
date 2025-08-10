#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"
#include "enums.hpp"

namespace webbind {

class PerformanceServerTiming;

/// Interface PerformanceResourceTiming
/// [`PerformanceResourceTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming)
class PerformanceResourceTiming : public PerformanceEntry {
    explicit PerformanceResourceTiming(Handle h) noexcept;
public:
    explicit PerformanceResourceTiming(const emlite::Val &val) noexcept;
    static PerformanceResourceTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceResourceTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceResourceTiming.initiatorType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/initiatorType)
    /// [`PerformanceResourceTiming.initiatorType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/initiatorType)
    [[nodiscard]] jsbind::String initiatorType() const;
    /// [`PerformanceResourceTiming.deliveryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/deliveryType)
    /// [`PerformanceResourceTiming.deliveryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/deliveryType)
    [[nodiscard]] jsbind::String deliveryType() const;
    /// [`PerformanceResourceTiming.nextHopProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/nextHopProtocol)
    /// [`PerformanceResourceTiming.nextHopProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/nextHopProtocol)
    [[nodiscard]] jsbind::String nextHopProtocol() const;
    /// [`PerformanceResourceTiming.workerStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/workerStart)
    /// [`PerformanceResourceTiming.workerStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/workerStart)
    [[nodiscard]] jsbind::Any workerStart() const;
    /// [`PerformanceResourceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectStart)
    /// [`PerformanceResourceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectStart)
    [[nodiscard]] jsbind::Any redirectStart() const;
    /// [`PerformanceResourceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectEnd)
    /// [`PerformanceResourceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectEnd)
    [[nodiscard]] jsbind::Any redirectEnd() const;
    /// [`PerformanceResourceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/fetchStart)
    /// [`PerformanceResourceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/fetchStart)
    [[nodiscard]] jsbind::Any fetchStart() const;
    /// [`PerformanceResourceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupStart)
    /// [`PerformanceResourceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupStart)
    [[nodiscard]] jsbind::Any domainLookupStart() const;
    /// [`PerformanceResourceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupEnd)
    /// [`PerformanceResourceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupEnd)
    [[nodiscard]] jsbind::Any domainLookupEnd() const;
    /// [`PerformanceResourceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectStart)
    /// [`PerformanceResourceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectStart)
    [[nodiscard]] jsbind::Any connectStart() const;
    /// [`PerformanceResourceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectEnd)
    /// [`PerformanceResourceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectEnd)
    [[nodiscard]] jsbind::Any connectEnd() const;
    /// [`PerformanceResourceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/secureConnectionStart)
    /// [`PerformanceResourceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/secureConnectionStart)
    [[nodiscard]] jsbind::Any secureConnectionStart() const;
    /// [`PerformanceResourceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/requestStart)
    /// [`PerformanceResourceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/requestStart)
    [[nodiscard]] jsbind::Any requestStart() const;
    /// [`PerformanceResourceTiming.finalResponseHeadersStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/finalResponseHeadersStart)
    /// [`PerformanceResourceTiming.finalResponseHeadersStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/finalResponseHeadersStart)
    [[nodiscard]] jsbind::Any finalResponseHeadersStart() const;
    /// [`PerformanceResourceTiming.firstInterimResponseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/firstInterimResponseStart)
    /// [`PerformanceResourceTiming.firstInterimResponseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/firstInterimResponseStart)
    [[nodiscard]] jsbind::Any firstInterimResponseStart() const;
    /// [`PerformanceResourceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStart)
    /// [`PerformanceResourceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStart)
    [[nodiscard]] jsbind::Any responseStart() const;
    /// [`PerformanceResourceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseEnd)
    /// [`PerformanceResourceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseEnd)
    [[nodiscard]] jsbind::Any responseEnd() const;
    /// [`PerformanceResourceTiming.transferSize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/transferSize)
    /// [`PerformanceResourceTiming.transferSize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/transferSize)
    [[nodiscard]] long long transferSize() const;
    /// [`PerformanceResourceTiming.encodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/encodedBodySize)
    /// [`PerformanceResourceTiming.encodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/encodedBodySize)
    [[nodiscard]] long long encodedBodySize() const;
    /// [`PerformanceResourceTiming.decodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/decodedBodySize)
    /// [`PerformanceResourceTiming.decodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/decodedBodySize)
    [[nodiscard]] long long decodedBodySize() const;
    /// [`PerformanceResourceTiming.responseStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStatus)
    /// [`PerformanceResourceTiming.responseStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStatus)
    [[nodiscard]] unsigned short responseStatus() const;
    /// [`PerformanceResourceTiming.renderBlockingStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/renderBlockingStatus)
    /// [`PerformanceResourceTiming.renderBlockingStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/renderBlockingStatus)
    [[nodiscard]] RenderBlockingStatusType renderBlockingStatus() const;
    /// [`PerformanceResourceTiming.contentType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentType)
    /// [`PerformanceResourceTiming.contentType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentType)
    [[nodiscard]] jsbind::String contentType() const;
    /// [`PerformanceResourceTiming.contentEncoding`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentEncoding)
    /// [`PerformanceResourceTiming.contentEncoding`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentEncoding)
    [[nodiscard]] jsbind::String contentEncoding() const;
    /// The toJSON method.
    /// [`PerformanceResourceTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/toJSON)
    jsbind::Object toJSON();
    /// [`PerformanceResourceTiming.serverTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/serverTiming)
    /// [`PerformanceResourceTiming.serverTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/serverTiming)
    [[nodiscard]] jsbind::TypedArray<PerformanceServerTiming> serverTiming() const;
};

} // namespace webbind