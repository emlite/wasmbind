#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface PerformanceEntry
/// [`PerformanceEntry`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry)
class PerformanceEntry : public emlite::Val {
    explicit PerformanceEntry(Handle h) noexcept;
public:
    explicit PerformanceEntry(const emlite::Val &val) noexcept;
    static PerformanceEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/id)
    /// [`PerformanceEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/id)
    [[nodiscard]] long long id() const;
    /// [`PerformanceEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/name)
    /// [`PerformanceEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`PerformanceEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/entryType)
    /// [`PerformanceEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`PerformanceEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/startTime)
    /// [`PerformanceEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`PerformanceEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/duration)
    /// [`PerformanceEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// [`PerformanceEntry.navigationId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/navigationId)
    /// [`PerformanceEntry.navigationId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/navigationId)
    [[nodiscard]] long long navigationId() const;
    /// The toJSON method.
    /// [`PerformanceEntry.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind