#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class VisualViewport : public EventTarget {
    explicit VisualViewport(Handle h) noexcept;

public:
    explicit VisualViewport(const emlite::Val &val) noexcept;
    static VisualViewport take_ownership(Handle h) noexcept;

    VisualViewport clone() const noexcept;
    double offsetLeft() const;
    double offsetTop() const;
    double pageLeft() const;
    double pageTop() const;
    double width() const;
    double height() const;
    double scale() const;
    jsbind::Any onresize() const;
    void onresize(const jsbind::Any& value);
    jsbind::Any onscroll() const;
    void onscroll(const jsbind::Any& value);
    jsbind::Any onscrollend() const;
    void onscrollend(const jsbind::Any& value);
};

