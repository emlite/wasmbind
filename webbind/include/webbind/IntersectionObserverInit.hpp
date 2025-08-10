#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IntersectionObserverInit
class IntersectionObserverInit : public emlite::Val {
  explicit IntersectionObserverInit(Handle h) noexcept;
public:
    static IntersectionObserverInit take_ownership(Handle h) noexcept;
    explicit IntersectionObserverInit(const emlite::Val &val) noexcept;
    IntersectionObserverInit() noexcept;
    [[nodiscard]] IntersectionObserverInit clone() const noexcept;
    /// Getter of the `root` attribute.
    [[nodiscard]] jsbind::Any root() const;
    /// Setter of the `root` attribute.
    void root(const jsbind::Any& value);
    /// Getter of the `rootMargin` attribute.
    [[nodiscard]] jsbind::String rootMargin() const;
    /// Setter of the `rootMargin` attribute.
    void rootMargin(const jsbind::String& value);
    /// Getter of the `scrollMargin` attribute.
    [[nodiscard]] jsbind::String scrollMargin() const;
    /// Setter of the `scrollMargin` attribute.
    void scrollMargin(const jsbind::String& value);
    /// Getter of the `threshold` attribute.
    [[nodiscard]] jsbind::Any threshold() const;
    /// Setter of the `threshold` attribute.
    void threshold(const jsbind::Any& value);
    /// Getter of the `delay` attribute.
    [[nodiscard]] long delay() const;
    /// Setter of the `delay` attribute.
    void delay(long value);
    /// Getter of the `trackVisibility` attribute.
    [[nodiscard]] bool trackVisibility() const;
    /// Setter of the `trackVisibility` attribute.
    void trackVisibility(bool value);
};

} // namespace webbind