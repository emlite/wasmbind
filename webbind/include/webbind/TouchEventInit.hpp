#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventModifierInit.hpp"

namespace webbind {

class Touch;

/// Dictionary type TouchEventInit
/// [`TouchEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEventInit)
class TouchEventInit : public EventModifierInit {
  explicit TouchEventInit(Handle h) noexcept;
public:
    static TouchEventInit take_ownership(Handle h) noexcept;
    explicit TouchEventInit(const emlite::Val &val) noexcept;
    TouchEventInit() noexcept;
    [[nodiscard]] TouchEventInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<Touch> touches() const;
    void touches(const jsbind::TypedArray<Touch>& value);
    [[nodiscard]] jsbind::TypedArray<Touch> targetTouches() const;
    void targetTouches(const jsbind::TypedArray<Touch>& value);
    [[nodiscard]] jsbind::TypedArray<Touch> changedTouches() const;
    void changedTouches(const jsbind::TypedArray<Touch>& value);
};

} // namespace webbind