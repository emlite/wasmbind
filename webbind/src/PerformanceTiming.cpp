#include <webbind/PerformanceTiming.hpp>

namespace webbind {

PerformanceTiming PerformanceTiming::take_ownership(Handle h) noexcept {
        return PerformanceTiming(h);
    }
PerformanceTiming PerformanceTiming::clone() const noexcept { return *this; }
emlite::Val PerformanceTiming::instance() noexcept { return emlite::Val::global("PerformanceTiming"); }
PerformanceTiming::PerformanceTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceTiming::PerformanceTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}

long long PerformanceTiming::navigationStart() const {
    return emlite::Val::get("navigationStart").as<long long>();
}

long long PerformanceTiming::unloadEventStart() const {
    return emlite::Val::get("unloadEventStart").as<long long>();
}

long long PerformanceTiming::unloadEventEnd() const {
    return emlite::Val::get("unloadEventEnd").as<long long>();
}

long long PerformanceTiming::redirectStart() const {
    return emlite::Val::get("redirectStart").as<long long>();
}

long long PerformanceTiming::redirectEnd() const {
    return emlite::Val::get("redirectEnd").as<long long>();
}

long long PerformanceTiming::fetchStart() const {
    return emlite::Val::get("fetchStart").as<long long>();
}

long long PerformanceTiming::domainLookupStart() const {
    return emlite::Val::get("domainLookupStart").as<long long>();
}

long long PerformanceTiming::domainLookupEnd() const {
    return emlite::Val::get("domainLookupEnd").as<long long>();
}

long long PerformanceTiming::connectStart() const {
    return emlite::Val::get("connectStart").as<long long>();
}

long long PerformanceTiming::connectEnd() const {
    return emlite::Val::get("connectEnd").as<long long>();
}

long long PerformanceTiming::secureConnectionStart() const {
    return emlite::Val::get("secureConnectionStart").as<long long>();
}

long long PerformanceTiming::requestStart() const {
    return emlite::Val::get("requestStart").as<long long>();
}

long long PerformanceTiming::responseStart() const {
    return emlite::Val::get("responseStart").as<long long>();
}

long long PerformanceTiming::responseEnd() const {
    return emlite::Val::get("responseEnd").as<long long>();
}

long long PerformanceTiming::domLoading() const {
    return emlite::Val::get("domLoading").as<long long>();
}

long long PerformanceTiming::domInteractive() const {
    return emlite::Val::get("domInteractive").as<long long>();
}

long long PerformanceTiming::domContentLoadedEventStart() const {
    return emlite::Val::get("domContentLoadedEventStart").as<long long>();
}

long long PerformanceTiming::domContentLoadedEventEnd() const {
    return emlite::Val::get("domContentLoadedEventEnd").as<long long>();
}

long long PerformanceTiming::domComplete() const {
    return emlite::Val::get("domComplete").as<long long>();
}

long long PerformanceTiming::loadEventStart() const {
    return emlite::Val::get("loadEventStart").as<long long>();
}

long long PerformanceTiming::loadEventEnd() const {
    return emlite::Val::get("loadEventEnd").as<long long>();
}

jsbind::Object PerformanceTiming::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind