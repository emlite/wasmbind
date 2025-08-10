#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventModifierInit.hpp"

namespace webbind {

class Touch;

/// Dictionary type TouchEventInit
class TouchEventInit : public EventModifierInit {
  explicit TouchEventInit(Handle h) noexcept;
public:
    static TouchEventInit take_ownership(Handle h) noexcept;
    explicit TouchEventInit(const emlite::Val &val) noexcept;
    TouchEventInit() noexcept;
    [[nodiscard]] TouchEventInit clone() const noexcept;
    /// Getter of the `touches` attribute.
    [[nodiscard]] jsbind::TypedArray<Touch> touches() const;
    /// Setter of the `touches` attribute.
    void touches(const jsbind::TypedArray<Touch>& value);
    /// Getter of the `targetTouches` attribute.
    [[nodiscard]] jsbind::TypedArray<Touch> targetTouches() const;
    /// Setter of the `targetTouches` attribute.
    void targetTouches(const jsbind::TypedArray<Touch>& value);
    /// Getter of the `changedTouches` attribute.
    [[nodiscard]] jsbind::TypedArray<Touch> changedTouches() const;
    /// Setter of the `changedTouches` attribute.
    void changedTouches(const jsbind::TypedArray<Touch>& value);
};

} // namespace webbind