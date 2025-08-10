#include "webbind/PerformanceResourceTiming.hpp"
#include "webbind/PerformanceServerTiming.hpp"

namespace webbind {

PerformanceResourceTiming PerformanceResourceTiming::take_ownership(Handle h) noexcept {
        return PerformanceResourceTiming(h);
    }
PerformanceResourceTiming PerformanceResourceTiming::clone() const noexcept { return *this; }
emlite::Val PerformanceResourceTiming::instance() noexcept { return emlite::Val::global("PerformanceResourceTiming"); }
PerformanceResourceTiming::PerformanceResourceTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceResourceTiming::PerformanceResourceTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

jsbind::String PerformanceResourceTiming::initiatorType() const {
    return PerformanceEntry::get("initiatorType").as<jsbind::String>();
}

jsbind::String PerformanceResourceTiming::deliveryType() const {
    return PerformanceEntry::get("deliveryType").as<jsbind::String>();
}

jsbind::String PerformanceResourceTiming::nextHopProtocol() const {
    return PerformanceEntry::get("nextHopProtocol").as<jsbind::String>();
}

jsbind::Any PerformanceResourceTiming::workerStart() const {
    return PerformanceEntry::get("workerStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::redirectStart() const {
    return PerformanceEntry::get("redirectStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::redirectEnd() const {
    return PerformanceEntry::get("redirectEnd").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::fetchStart() const {
    return PerformanceEntry::get("fetchStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::domainLookupStart() const {
    return PerformanceEntry::get("domainLookupStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::domainLookupEnd() const {
    return PerformanceEntry::get("domainLookupEnd").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::connectStart() const {
    return PerformanceEntry::get("connectStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::connectEnd() const {
    return PerformanceEntry::get("connectEnd").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::secureConnectionStart() const {
    return PerformanceEntry::get("secureConnectionStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::requestStart() const {
    return PerformanceEntry::get("requestStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::finalResponseHeadersStart() const {
    return PerformanceEntry::get("finalResponseHeadersStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::firstInterimResponseStart() const {
    return PerformanceEntry::get("firstInterimResponseStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::responseStart() const {
    return PerformanceEntry::get("responseStart").as<jsbind::Any>();
}

jsbind::Any PerformanceResourceTiming::responseEnd() const {
    return PerformanceEntry::get("responseEnd").as<jsbind::Any>();
}

long long PerformanceResourceTiming::transferSize() const {
    return PerformanceEntry::get("transferSize").as<long long>();
}

long long PerformanceResourceTiming::encodedBodySize() const {
    return PerformanceEntry::get("encodedBodySize").as<long long>();
}

long long PerformanceResourceTiming::decodedBodySize() const {
    return PerformanceEntry::get("decodedBodySize").as<long long>();
}

unsigned short PerformanceResourceTiming::responseStatus() const {
    return PerformanceEntry::get("responseStatus").as<unsigned short>();
}

RenderBlockingStatusType PerformanceResourceTiming::renderBlockingStatus() const {
    return PerformanceEntry::get("renderBlockingStatus").as<RenderBlockingStatusType>();
}

jsbind::String PerformanceResourceTiming::contentType() const {
    return PerformanceEntry::get("contentType").as<jsbind::String>();
}

jsbind::String PerformanceResourceTiming::contentEncoding() const {
    return PerformanceEntry::get("contentEncoding").as<jsbind::String>();
}

jsbind::Object PerformanceResourceTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

jsbind::TypedArray<PerformanceServerTiming> PerformanceResourceTiming::serverTiming() const {
    return PerformanceEntry::get("serverTiming").as<jsbind::TypedArray<PerformanceServerTiming>>();
}


} // namespace webbind