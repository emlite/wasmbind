#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceObserverInit
class PerformanceObserverInit : public emlite::Val {
  explicit PerformanceObserverInit(Handle h) noexcept;
public:
    static PerformanceObserverInit take_ownership(Handle h) noexcept;
    explicit PerformanceObserverInit(const emlite::Val &val) noexcept;
    PerformanceObserverInit() noexcept;
    [[nodiscard]] PerformanceObserverInit clone() const noexcept;
    /// Getter of the `entryTypes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> entryTypes() const;
    /// Setter of the `entryTypes` attribute.
    void entryTypes(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `buffered` attribute.
    [[nodiscard]] bool buffered() const;
    /// Setter of the `buffered` attribute.
    void buffered(bool value);
};

} // namespace webbind