#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PerformanceObserverEntryList : public emlite::Val {
    explicit PerformanceObserverEntryList(Handle h) noexcept;

public:
    explicit PerformanceObserverEntryList(const emlite::Val &val) noexcept;
    static PerformanceObserverEntryList take_ownership(Handle h) noexcept;

    PerformanceObserverEntryList clone() const noexcept;
    jsbind::Any getEntries();
    jsbind::Any getEntriesByType(const jsbind::DOMString& type);
    jsbind::Any getEntriesByName(const jsbind::DOMString& name, const jsbind::DOMString& type);
};

