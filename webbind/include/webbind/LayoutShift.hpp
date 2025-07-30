#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class LayoutShiftAttribution;


class LayoutShift : public PerformanceEntry {
    explicit LayoutShift(Handle h) noexcept;

public:
    explicit LayoutShift(const emlite::Val &val) noexcept;
    static LayoutShift take_ownership(Handle h) noexcept;

    LayoutShift clone() const noexcept;
    double value() const;
    bool hadRecentInput() const;
    jsbind::Any lastInputTime() const;
    jsbind::TypedArray<LayoutShiftAttribution> sources() const;
    jsbind::Object toJSON();
};

