#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PerformanceTiming : public emlite::Val {
    explicit PerformanceTiming(Handle h) noexcept;

public:
    explicit PerformanceTiming(const emlite::Val &val) noexcept;
    static PerformanceTiming take_ownership(Handle h) noexcept;

    PerformanceTiming clone() const noexcept;
    long long navigationStart() const;
    long long unloadEventStart() const;
    long long unloadEventEnd() const;
    long long redirectStart() const;
    long long redirectEnd() const;
    long long fetchStart() const;
    long long domainLookupStart() const;
    long long domainLookupEnd() const;
    long long connectStart() const;
    long long connectEnd() const;
    long long secureConnectionStart() const;
    long long requestStart() const;
    long long responseStart() const;
    long long responseEnd() const;
    long long domLoading() const;
    long long domInteractive() const;
    long long domContentLoadedEventStart() const;
    long long domContentLoadedEventEnd() const;
    long long domComplete() const;
    long long loadEventStart() const;
    long long loadEventEnd() const;
    jsbind::Object toJSON();
};

