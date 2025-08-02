#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Highlight;
class HighlightsFromPointOptions;
class ShadowRoot;
class AbstractRange;


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

class HighlightsFromPointOptions : public emlite::Val {
  explicit HighlightsFromPointOptions(Handle h) noexcept;
public:
    static HighlightsFromPointOptions take_ownership(Handle h) noexcept;
    explicit HighlightsFromPointOptions(const emlite::Val &val) noexcept;
    HighlightsFromPointOptions() noexcept;
    [[nodiscard]] HighlightsFromPointOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

/// The HighlightRegistry class.
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

