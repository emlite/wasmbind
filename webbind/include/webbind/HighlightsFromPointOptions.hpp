#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ShadowRoot;

/// Dictionary type HighlightsFromPointOptions
class HighlightsFromPointOptions : public emlite::Val {
  explicit HighlightsFromPointOptions(Handle h) noexcept;
public:
    static HighlightsFromPointOptions take_ownership(Handle h) noexcept;
    explicit HighlightsFromPointOptions(const emlite::Val &val) noexcept;
    HighlightsFromPointOptions() noexcept;
    [[nodiscard]] HighlightsFromPointOptions clone() const noexcept;
    /// Getter of the `shadowRoots` attribute.
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    /// Setter of the `shadowRoots` attribute.
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

} // namespace webbind