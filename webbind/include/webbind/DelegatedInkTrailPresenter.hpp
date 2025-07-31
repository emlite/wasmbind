#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;
class PointerEvent;
class InkTrailStyle;


class InkTrailStyle : public emlite::Val {
  explicit InkTrailStyle(Handle h) noexcept;
public:
    static InkTrailStyle take_ownership(Handle h) noexcept;
    explicit InkTrailStyle(const emlite::Val &val) noexcept;
    InkTrailStyle() noexcept;
    [[nodiscard]] InkTrailStyle clone() const noexcept;
    [[nodiscard]] jsbind::String color() const;
    void color(const jsbind::String& value);
    [[nodiscard]] double diameter() const;
    void diameter(double value);
};

/// The DelegatedInkTrailPresenter class.
/// [`DelegatedInkTrailPresenter`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter)
class DelegatedInkTrailPresenter : public emlite::Val {
    explicit DelegatedInkTrailPresenter(Handle h) noexcept;

public:
    explicit DelegatedInkTrailPresenter(const emlite::Val &val) noexcept;
    static DelegatedInkTrailPresenter take_ownership(Handle h) noexcept;

    [[nodiscard]] DelegatedInkTrailPresenter clone() const noexcept;
    /// Getter of the `presentationArea` attribute.
    /// [`DelegatedInkTrailPresenter.presentationArea`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter/presentationArea)
    [[nodiscard]] Element presentationArea() const;
    /// The updateInkTrailStartPoint method.
    /// [`DelegatedInkTrailPresenter.updateInkTrailStartPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter/updateInkTrailStartPoint)
    jsbind::Undefined updateInkTrailStartPoint(const PointerEvent& event, const InkTrailStyle& style);
};

