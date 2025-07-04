#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class Node;


class PerformanceEventTiming : public PerformanceEntry {
    explicit PerformanceEventTiming(Handle h) noexcept;

public:
    explicit PerformanceEventTiming(const emlite::Val &val) noexcept;
    static PerformanceEventTiming take_ownership(Handle h) noexcept;

    PerformanceEventTiming clone() const noexcept;
    jsbind::Any processingStart() const;
    jsbind::Any processingEnd() const;
    bool cancelable() const;
    Node target() const;
    long long interactionId() const;
    jsbind::Object toJSON();
};

