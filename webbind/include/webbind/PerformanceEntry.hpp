#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PerformanceEntry : public emlite::Val {
    explicit PerformanceEntry(Handle h) noexcept;

public:
    explicit PerformanceEntry(const emlite::Val &val) noexcept;
    static PerformanceEntry take_ownership(Handle h) noexcept;

    PerformanceEntry clone() const noexcept;
    long long id() const;
    jsbind::String name() const;
    jsbind::String entryType() const;
    jsbind::Any startTime() const;
    jsbind::Any duration() const;
    long long navigationId() const;
    jsbind::Object toJSON();
};

