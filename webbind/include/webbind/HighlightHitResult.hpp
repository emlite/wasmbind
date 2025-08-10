#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Highlight;
class AbstractRange;

/// Dictionary type HighlightHitResult
/// [`HighlightHitResult`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightHitResult)
class HighlightHitResult : public emlite::Val {
  explicit HighlightHitResult(Handle h) noexcept;
public:
    static HighlightHitResult take_ownership(Handle h) noexcept;
    explicit HighlightHitResult(const emlite::Val &val) noexcept;
    HighlightHitResult() noexcept;
    [[nodiscard]] HighlightHitResult clone() const noexcept;
    [[nodiscard]] Highlight highlight() const;
    void highlight(const Highlight& value);
    [[nodiscard]] jsbind::TypedArray<AbstractRange> ranges() const;
    void ranges(const jsbind::TypedArray<AbstractRange>& value);
};

} // namespace webbind