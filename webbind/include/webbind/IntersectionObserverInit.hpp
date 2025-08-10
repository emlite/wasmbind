#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IntersectionObserverInit
/// [`IntersectionObserverInit`](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserverInit)
class IntersectionObserverInit : public emlite::Val {
  explicit IntersectionObserverInit(Handle h) noexcept;
public:
    static IntersectionObserverInit take_ownership(Handle h) noexcept;
    explicit IntersectionObserverInit(const emlite::Val &val) noexcept;
    IntersectionObserverInit() noexcept;
    [[nodiscard]] IntersectionObserverInit clone() const noexcept;
    [[nodiscard]] jsbind::Any root() const;
    void root(const jsbind::Any& value);
    [[nodiscard]] jsbind::String rootMargin() const;
    void rootMargin(const jsbind::String& value);
    [[nodiscard]] jsbind::String scrollMargin() const;
    void scrollMargin(const jsbind::String& value);
    [[nodiscard]] jsbind::Any threshold() const;
    void threshold(const jsbind::Any& value);
    [[nodiscard]] long delay() const;
    void delay(long value);
    [[nodiscard]] bool trackVisibility() const;
    void trackVisibility(bool value);
};

} // namespace webbind