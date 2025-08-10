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
    /// Getter of the `initiatorType` attribute.
    /// [`PerformanceResourceTiming.initiatorType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/initiatorType)
    [[nodiscard]] jsbind::String initiatorType() const;
    /// Getter of the `deliveryType` attribute.
    /// [`PerformanceResourceTiming.deliveryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/deliveryType)
    [[nodiscard]] jsbind::String deliveryType() const;
    /// Getter of the `nextHopProtocol` attribute.
    /// [`PerformanceResourceTiming.nextHopProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/nextHopProtocol)
    [[nodiscard]] jsbind::String nextHopProtocol() const;
    /// Getter of the `workerStart` attribute.
    /// [`PerformanceResourceTiming.workerStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/workerStart)
    [[nodiscard]] jsbind::Any workerStart() const;
    /// Getter of the `redirectStart` attribute.
    /// [`PerformanceResourceTiming.redirectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectStart)
    [[nodiscard]] jsbind::Any redirectStart() const;
    /// Getter of the `redirectEnd` attribute.
    /// [`PerformanceResourceTiming.redirectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/redirectEnd)
    [[nodiscard]] jsbind::Any redirectEnd() const;
    /// Getter of the `fetchStart` attribute.
    /// [`PerformanceResourceTiming.fetchStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/fetchStart)
    [[nodiscard]] jsbind::Any fetchStart() const;
    /// Getter of the `domainLookupStart` attribute.
    /// [`PerformanceResourceTiming.domainLookupStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupStart)
    [[nodiscard]] jsbind::Any domainLookupStart() const;
    /// Getter of the `domainLookupEnd` attribute.
    /// [`PerformanceResourceTiming.domainLookupEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/domainLookupEnd)
    [[nodiscard]] jsbind::Any domainLookupEnd() const;
    /// Getter of the `connectStart` attribute.
    /// [`PerformanceResourceTiming.connectStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectStart)
    [[nodiscard]] jsbind::Any connectStart() const;
    /// Getter of the `connectEnd` attribute.
    /// [`PerformanceResourceTiming.connectEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/connectEnd)
    [[nodiscard]] jsbind::Any connectEnd() const;
    /// Getter of the `secureConnectionStart` attribute.
    /// [`PerformanceResourceTiming.secureConnectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/secureConnectionStart)
    [[nodiscard]] jsbind::Any secureConnectionStart() const;
    /// Getter of the `requestStart` attribute.
    /// [`PerformanceResourceTiming.requestStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/requestStart)
    [[nodiscard]] jsbind::Any requestStart() const;
    /// Getter of the `finalResponseHeadersStart` attribute.
    /// [`PerformanceResourceTiming.finalResponseHeadersStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/finalResponseHeadersStart)
    [[nodiscard]] jsbind::Any finalResponseHeadersStart() const;
    /// Getter of the `firstInterimResponseStart` attribute.
    /// [`PerformanceResourceTiming.firstInterimResponseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/firstInterimResponseStart)
    [[nodiscard]] jsbind::Any firstInterimResponseStart() const;
    /// Getter of the `responseStart` attribute.
    /// [`PerformanceResourceTiming.responseStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStart)
    [[nodiscard]] jsbind::Any responseStart() const;
    /// Getter of the `responseEnd` attribute.
    /// [`PerformanceResourceTiming.responseEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseEnd)
    [[nodiscard]] jsbind::Any responseEnd() const;
    /// Getter of the `transferSize` attribute.
    /// [`PerformanceResourceTiming.transferSize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/transferSize)
    [[nodiscard]] long long transferSize() const;
    /// Getter of the `encodedBodySize` attribute.
    /// [`PerformanceResourceTiming.encodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/encodedBodySize)
    [[nodiscard]] long long encodedBodySize() const;
    /// Getter of the `decodedBodySize` attribute.
    /// [`PerformanceResourceTiming.decodedBodySize`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/decodedBodySize)
    [[nodiscard]] long long decodedBodySize() const;
    /// Getter of the `responseStatus` attribute.
    /// [`PerformanceResourceTiming.responseStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/responseStatus)
    [[nodiscard]] unsigned short responseStatus() const;
    /// Getter of the `renderBlockingStatus` attribute.
    /// [`PerformanceResourceTiming.renderBlockingStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/renderBlockingStatus)
    [[nodiscard]] RenderBlockingStatusType renderBlockingStatus() const;
    /// Getter of the `contentType` attribute.
    /// [`PerformanceResourceTiming.contentType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentType)
    [[nodiscard]] jsbind::String contentType() const;
    /// Getter of the `contentEncoding` attribute.
    /// [`PerformanceResourceTiming.contentEncoding`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/contentEncoding)
    [[nodiscard]] jsbind::String contentEncoding() const;
    /// The toJSON method.
    /// [`PerformanceResourceTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `serverTiming` attribute.
    /// [`PerformanceResourceTiming.serverTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming/serverTiming)
    [[nodiscard]] jsbind::TypedArray<PerformanceServerTiming> serverTiming() const;
};

} // namespace webbind