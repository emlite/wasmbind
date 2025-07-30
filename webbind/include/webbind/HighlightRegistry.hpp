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
    HighlightHitResult clone() const noexcept;
    Highlight highlight() const;
    void highlight(const Highlight& value);
    jsbind::TypedArray<AbstractRange> ranges() const;
    void ranges(const jsbind::TypedArray<AbstractRange>& value);
};

class HighlightsFromPointOptions : public emlite::Val {
  explicit HighlightsFromPointOptions(Handle h) noexcept;
public:
    static HighlightsFromPointOptions take_ownership(Handle h) noexcept;
    explicit HighlightsFromPointOptions(const emlite::Val &val) noexcept;
    HighlightsFromPointOptions() noexcept;
    HighlightsFromPointOptions clone() const noexcept;
    jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

class HighlightRegistry : public emlite::Val {
    explicit HighlightRegistry(Handle h) noexcept;

public:
    explicit HighlightRegistry(const emlite::Val &val) noexcept;
    static HighlightRegistry take_ownership(Handle h) noexcept;

    HighlightRegistry clone() const noexcept;
    jsbind::TypedArray<HighlightHitResult> highlightsFromPoint(float x, float y);
    jsbind::TypedArray<HighlightHitResult> highlightsFromPoint(float x, float y, const HighlightsFromPointOptions& options);
};

