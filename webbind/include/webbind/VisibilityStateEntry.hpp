#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


/// The VisibilityStateEntry class.
/// [`VisibilityStateEntry`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry)
class VisibilityStateEntry : public PerformanceEntry {
    explicit VisibilityStateEntry(Handle h) noexcept;

public:
    explicit VisibilityStateEntry(const emlite::Val &val) noexcept;
    static VisibilityStateEntry take_ownership(Handle h) noexcept;

    [[nodiscard]] VisibilityStateEntry clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`VisibilityStateEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `entryType` attribute.
    /// [`VisibilityStateEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// Getter of the `startTime` attribute.
    /// [`VisibilityStateEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Getter of the `duration` attribute.
    /// [`VisibilityStateEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/duration)
    [[nodiscard]] unsigned long duration() const;
};

