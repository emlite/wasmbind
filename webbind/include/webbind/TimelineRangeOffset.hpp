#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSNumericValue;

/// Dictionary type TimelineRangeOffset
/// [`TimelineRangeOffset`](https://developer.mozilla.org/en-US/docs/Web/API/TimelineRangeOffset)
class TimelineRangeOffset : public emlite::Val {
  explicit TimelineRangeOffset(Handle h) noexcept;
public:
    static TimelineRangeOffset take_ownership(Handle h) noexcept;
    explicit TimelineRangeOffset(const emlite::Val &val) noexcept;
    TimelineRangeOffset() noexcept;
    [[nodiscard]] TimelineRangeOffset clone() const noexcept;
    [[nodiscard]] jsbind::String rangeName() const;
    void rangeName(const jsbind::String& value);
    [[nodiscard]] CSSNumericValue offset() const;
    void offset(const CSSNumericValue& value);
};

} // namespace webbind