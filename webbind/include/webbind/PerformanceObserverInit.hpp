#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceObserverInit
/// [`PerformanceObserverInit`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverInit)
class PerformanceObserverInit : public emlite::Val {
  explicit PerformanceObserverInit(Handle h) noexcept;
public:
    static PerformanceObserverInit take_ownership(Handle h) noexcept;
    explicit PerformanceObserverInit(const emlite::Val &val) noexcept;
    PerformanceObserverInit() noexcept;
    [[nodiscard]] PerformanceObserverInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> entryTypes() const;
    void entryTypes(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] bool buffered() const;
    void buffered(bool value);
};

} // namespace webbind