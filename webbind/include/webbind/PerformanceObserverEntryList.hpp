#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PerformanceObserverEntryList class.
/// [`PerformanceObserverEntryList`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList)
class PerformanceObserverEntryList : public emlite::Val {
    explicit PerformanceObserverEntryList(Handle h) noexcept;

public:
    explicit PerformanceObserverEntryList(const emlite::Val &val) noexcept;
    static PerformanceObserverEntryList take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceObserverEntryList clone() const noexcept;
    /// The getEntries method.
    /// [`PerformanceObserverEntryList.getEntries`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList/getEntries)
    jsbind::Any getEntries();
    /// The getEntriesByType method.
    /// [`PerformanceObserverEntryList.getEntriesByType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList/getEntriesByType)
    jsbind::Any getEntriesByType(const jsbind::String& type);
    /// The getEntriesByName method.
    /// [`PerformanceObserverEntryList.getEntriesByName`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList/getEntriesByName)
    jsbind::Any getEntriesByName(const jsbind::String& name);
    /// The getEntriesByName method.
    /// [`PerformanceObserverEntryList.getEntriesByName`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList/getEntriesByName)
    jsbind::Any getEntriesByName(const jsbind::String& name, const jsbind::String& type);
};

