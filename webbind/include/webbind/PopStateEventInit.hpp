#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PopStateEventInit
/// [`PopStateEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEventInit)
class PopStateEventInit : public EventInit {
  explicit PopStateEventInit(Handle h) noexcept;
public:
    static PopStateEventInit take_ownership(Handle h) noexcept;
    explicit PopStateEventInit(const emlite::Val &val) noexcept;
    PopStateEventInit() noexcept;
    [[nodiscard]] PopStateEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
    [[nodiscard]] bool hasUAVisualTransition() const;
    void hasUAVisualTransition(bool value);
};

} // namespace webbind