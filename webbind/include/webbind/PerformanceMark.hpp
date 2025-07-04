#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class PerformanceMarkOptions;


class PerformanceMark : public PerformanceEntry {
    explicit PerformanceMark(Handle h) noexcept;

public:
    explicit PerformanceMark(const emlite::Val &val) noexcept;
    static PerformanceMark take_ownership(Handle h) noexcept;

    PerformanceMark clone() const noexcept;
    PerformanceMark(const jsbind::DOMString& markName, const PerformanceMarkOptions& markOptions);
    jsbind::Any detail() const;
};

