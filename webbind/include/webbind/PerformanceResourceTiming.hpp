#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class PerformanceServerTiming;


class PerformanceResourceTiming : public PerformanceEntry {
    explicit PerformanceResourceTiming(Handle h) noexcept;

public:
    explicit PerformanceResourceTiming(const emlite::Val &val) noexcept;
    static PerformanceResourceTiming take_ownership(Handle h) noexcept;

    PerformanceResourceTiming clone() const noexcept;
    jsbind::DOMString initiatorType() const;
    jsbind::DOMString deliveryType() const;
    jsbind::ByteString nextHopProtocol() const;
    jsbind::Any workerStart() const;
    jsbind::Any redirectStart() const;
    jsbind::Any redirectEnd() const;
    jsbind::Any fetchStart() const;
    jsbind::Any domainLookupStart() const;
    jsbind::Any domainLookupEnd() const;
    jsbind::Any connectStart() const;
    jsbind::Any connectEnd() const;
    jsbind::Any secureConnectionStart() const;
    jsbind::Any requestStart() const;
    jsbind::Any finalResponseHeadersStart() const;
    jsbind::Any firstInterimResponseStart() const;
    jsbind::Any responseStart() const;
    jsbind::Any responseEnd() const;
    long long transferSize() const;
    long long encodedBodySize() const;
    long long decodedBodySize() const;
    unsigned short responseStatus() const;
    RenderBlockingStatusType renderBlockingStatus() const;
    jsbind::DOMString contentType() const;
    jsbind::DOMString contentEncoding() const;
    jsbind::Object toJSON();
    jsbind::FrozenArray<PerformanceServerTiming> serverTiming() const;
};

