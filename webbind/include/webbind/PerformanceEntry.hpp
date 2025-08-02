#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PerformanceEntry class.
/// [`PerformanceEntry`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry)
class PerformanceEntry : public emlite::Val {
    explicit PerformanceEntry(Handle h) noexcept;

public:
    explicit PerformanceEntry(const emlite::Val &val) noexcept;
    static PerformanceEntry take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `id` attribute.
    /// [`PerformanceEntry.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/id)
    [[nodiscard]] long long id() const;
    /// Getter of the `name` attribute.
    /// [`PerformanceEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `entryType` attribute.
    /// [`PerformanceEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// Getter of the `startTime` attribute.
    /// [`PerformanceEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Getter of the `duration` attribute.
    /// [`PerformanceEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// Getter of the `navigationId` attribute.
    /// [`PerformanceEntry.navigationId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/navigationId)
    [[nodiscard]] long long navigationId() const;
    /// The toJSON method.
    /// [`PerformanceEntry.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry/toJSON)
    jsbind::Object toJSON();
};

