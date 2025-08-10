#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Highlight;
class AbstractRange;

/// Dictionary type HighlightHitResult
class HighlightHitResult : public emlite::Val {
  explicit HighlightHitResult(Handle h) noexcept;
public:
    static HighlightHitResult take_ownership(Handle h) noexcept;
    explicit HighlightHitResult(const emlite::Val &val) noexcept;
    HighlightHitResult() noexcept;
    [[nodiscard]] HighlightHitResult clone() const noexcept;
    /// Getter of the `highlight` attribute.
    [[nodiscard]] Highlight highlight() const;
    /// Setter of the `highlight` attribute.
    void highlight(const Highlight& value);
    /// Getter of the `ranges` attribute.
    [[nodiscard]] jsbind::TypedArray<AbstractRange> ranges() const;
    /// Setter of the `ranges` attribute.
    void ranges(const jsbind::TypedArray<AbstractRange>& value);
};

} // namespace webbind