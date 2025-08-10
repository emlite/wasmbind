#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRectInit;
class Element;

/// Dictionary type IntersectionObserverEntryInit
class IntersectionObserverEntryInit : public emlite::Val {
  explicit IntersectionObserverEntryInit(Handle h) noexcept;
public:
    static IntersectionObserverEntryInit take_ownership(Handle h) noexcept;
    explicit IntersectionObserverEntryInit(const emlite::Val &val) noexcept;
    IntersectionObserverEntryInit() noexcept;
    [[nodiscard]] IntersectionObserverEntryInit clone() const noexcept;
    /// Getter of the `time` attribute.
    [[nodiscard]] jsbind::Any time() const;
    /// Setter of the `time` attribute.
    void time(const jsbind::Any& value);
    /// Getter of the `rootBounds` attribute.
    [[nodiscard]] DOMRectInit rootBounds() const;
    /// Setter of the `rootBounds` attribute.
    void rootBounds(const DOMRectInit& value);
    /// Getter of the `boundingClientRect` attribute.
    [[nodiscard]] DOMRectInit boundingClientRect() const;
    /// Setter of the `boundingClientRect` attribute.
    void boundingClientRect(const DOMRectInit& value);
    /// Getter of the `intersectionRect` attribute.
    [[nodiscard]] DOMRectInit intersectionRect() const;
    /// Setter of the `intersectionRect` attribute.
    void intersectionRect(const DOMRectInit& value);
    /// Getter of the `isIntersecting` attribute.
    [[nodiscard]] bool isIntersecting() const;
    /// Setter of the `isIntersecting` attribute.
    void isIntersecting(bool value);
    /// Getter of the `isVisible` attribute.
    [[nodiscard]] bool isVisible() const;
    /// Setter of the `isVisible` attribute.
    void isVisible(bool value);
    /// Getter of the `intersectionRatio` attribute.
    [[nodiscard]] double intersectionRatio() const;
    /// Setter of the `intersectionRatio` attribute.
    void intersectionRatio(double value);
    /// Getter of the `target` attribute.
    [[nodiscard]] Element target() const;
    /// Setter of the `target` attribute.
    void target(const Element& value);
};

} // namespace webbind