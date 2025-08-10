#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class TimeRanges;

/// Dictionary type BufferedChangeEventInit
/// [`BufferedChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEventInit)
class BufferedChangeEventInit : public EventInit {
  explicit BufferedChangeEventInit(Handle h) noexcept;
public:
    static BufferedChangeEventInit take_ownership(Handle h) noexcept;
    explicit BufferedChangeEventInit(const emlite::Val &val) noexcept;
    BufferedChangeEventInit() noexcept;
    [[nodiscard]] BufferedChangeEventInit clone() const noexcept;
    [[nodiscard]] TimeRanges addedRanges() const;
    void addedRanges(const TimeRanges& value);
    [[nodiscard]] TimeRanges removedRanges() const;
    void removedRanges(const TimeRanges& value);
};

} // namespace webbind