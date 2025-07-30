#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


class VisibilityStateEntry : public PerformanceEntry {
    explicit VisibilityStateEntry(Handle h) noexcept;

public:
    explicit VisibilityStateEntry(const emlite::Val &val) noexcept;
    static VisibilityStateEntry take_ownership(Handle h) noexcept;

    VisibilityStateEntry clone() const noexcept;
    jsbind::String name() const;
    jsbind::String entryType() const;
    jsbind::Any startTime() const;
    unsigned long duration() const;
};

