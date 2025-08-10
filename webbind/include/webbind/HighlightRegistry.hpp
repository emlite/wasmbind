#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HighlightHitResult;
class HighlightsFromPointOptions;

/// Interface HighlightRegistry
/// [`HighlightRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightRegistry)
class HighlightRegistry : public emlite::Val {
    explicit HighlightRegistry(Handle h) noexcept;
public:
    explicit HighlightRegistry(const emlite::Val &val) noexcept;
    static HighlightRegistry take_ownership(Handle h) noexcept;
    [[nodiscard]] HighlightRegistry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The highlightsFromPoint method.
    /// [`HighlightRegistry.highlightsFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightRegistry/highlightsFromPoint)
    jsbind::TypedArray<HighlightHitResult> highlightsFromPoint(float x, float y);
    /// The highlightsFromPoint method.
    /// [`HighlightRegistry.highlightsFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightRegistry/highlightsFromPoint)
    jsbind::TypedArray<HighlightHitResult> highlightsFromPoint(float x, float y, const HighlightsFromPointOptions& options);
};

} // namespace webbind