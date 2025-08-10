#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMRectInit.hpp"

namespace webbind {

class Element;

/// Dictionary type IntersectionObserverEntryInit
/// [`IntersectionObserverEntryInit`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverEntryInit)
class IntersectionObserverEntryInit : public emlite::Val {
  explicit IntersectionObserverEntryInit(Handle h) noexcept;
public:
    static IntersectionObserverEntryInit take_ownership(Handle h) noexcept;
    explicit IntersectionObserverEntryInit(const emlite::Val &val) noexcept;
    IntersectionObserverEntryInit() noexcept;
    [[nodiscard]] IntersectionObserverEntryInit clone() const noexcept;
    [[nodiscard]] jsbind::Any time() const;
    void time(const jsbind::Any& value);
    [[nodiscard]] DOMRectInit rootBounds() const;
    void rootBounds(const DOMRectInit& value);
    [[nodiscard]] DOMRectInit boundingClientRect() const;
    void boundingClientRect(const DOMRectInit& value);
    [[nodiscard]] DOMRectInit intersectionRect() const;
    void intersectionRect(const DOMRectInit& value);
    [[nodiscard]] bool isIntersecting() const;
    void isIntersecting(bool value);
    [[nodiscard]] bool isVisible() const;
    void isVisible(bool value);
    [[nodiscard]] double intersectionRatio() const;
    void intersectionRatio(double value);
    [[nodiscard]] Element target() const;
    void target(const Element& value);
};

} // namespace webbind