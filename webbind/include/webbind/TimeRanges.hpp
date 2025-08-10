#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface TimeRanges
/// [`TimeRanges`](https://developer.mozilla.org/en-US/docs/Web/API/TimeRanges)
class TimeRanges : public emlite::Val {
    explicit TimeRanges(Handle h) noexcept;
public:
    explicit TimeRanges(const emlite::Val &val) noexcept;
    static TimeRanges take_ownership(Handle h) noexcept;
    [[nodiscard]] TimeRanges clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`TimeRanges.length`](https://developer.mozilla.org/en-US/docs/Web/API/TimeRanges/length)
    [[nodiscard]] unsigned long length() const;
    /// The start method.
    /// [`TimeRanges.start`](https://developer.mozilla.org/en-US/docs/Web/API/TimeRanges/start)
    double start(unsigned long index);
    /// The end method.
    /// [`TimeRanges.end`](https://developer.mozilla.org/en-US/docs/Web/API/TimeRanges/end)
    double end(unsigned long index);
};

} // namespace webbind