#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

/// Interface VisibilityStateEntry
/// [`VisibilityStateEntry`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry)
class VisibilityStateEntry : public PerformanceEntry {
    explicit VisibilityStateEntry(Handle h) noexcept;
public:
    explicit VisibilityStateEntry(const emlite::Val &val) noexcept;
    static VisibilityStateEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] VisibilityStateEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`VisibilityStateEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/name)
    /// [`VisibilityStateEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`VisibilityStateEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/entryType)
    /// [`VisibilityStateEntry.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`VisibilityStateEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/startTime)
    /// [`VisibilityStateEntry.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`VisibilityStateEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/duration)
    /// [`VisibilityStateEntry.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry/duration)
    [[nodiscard]] unsigned long duration() const;
};

} // namespace webbind