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
    InkTrailStyle clone() const noexcept;
    jsbind::String color() const;
    void color(const jsbind::String& value);
    double diameter() const;
    void diameter(double value);
};

class DelegatedInkTrailPresenter : public emlite::Val {
    explicit DelegatedInkTrailPresenter(Handle h) noexcept;

public:
    explicit DelegatedInkTrailPresenter(const emlite::Val &val) noexcept;
    static DelegatedInkTrailPresenter take_ownership(Handle h) noexcept;

    DelegatedInkTrailPresenter clone() const noexcept;
    Element presentationArea() const;
    jsbind::Undefined updateInkTrailStartPoint(const PointerEvent& event, const InkTrailStyle& style);
};

