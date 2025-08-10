#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSNumericValue;

/// Dictionary type TimelineRangeOffset
class TimelineRangeOffset : public emlite::Val {
  explicit TimelineRangeOffset(Handle h) noexcept;
public:
    static TimelineRangeOffset take_ownership(Handle h) noexcept;
    explicit TimelineRangeOffset(const emlite::Val &val) noexcept;
    TimelineRangeOffset() noexcept;
    [[nodiscard]] TimelineRangeOffset clone() const noexcept;
    /// Getter of the `rangeName` attribute.
    [[nodiscard]] jsbind::String rangeName() const;
    /// Setter of the `rangeName` attribute.
    void rangeName(const jsbind::String& value);
    /// Getter of the `offset` attribute.
    [[nodiscard]] CSSNumericValue offset() const;
    /// Setter of the `offset` attribute.
    void offset(const CSSNumericValue& value);
};

} // namespace webbind