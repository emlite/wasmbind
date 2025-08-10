#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class TimeRanges;

/// Dictionary type BufferedChangeEventInit
class BufferedChangeEventInit : public EventInit {
  explicit BufferedChangeEventInit(Handle h) noexcept;
public:
    static BufferedChangeEventInit take_ownership(Handle h) noexcept;
    explicit BufferedChangeEventInit(const emlite::Val &val) noexcept;
    BufferedChangeEventInit() noexcept;
    [[nodiscard]] BufferedChangeEventInit clone() const noexcept;
    /// Getter of the `addedRanges` attribute.
    [[nodiscard]] TimeRanges addedRanges() const;
    /// Setter of the `addedRanges` attribute.
    void addedRanges(const TimeRanges& value);
    /// Getter of the `removedRanges` attribute.
    [[nodiscard]] TimeRanges removedRanges() const;
    /// Setter of the `removedRanges` attribute.
    void removedRanges(const TimeRanges& value);
};

} // namespace webbind