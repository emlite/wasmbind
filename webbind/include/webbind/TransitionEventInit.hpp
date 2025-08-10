#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TransitionEventInit
/// [`TransitionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEventInit)
class TransitionEventInit : public EventInit {
  explicit TransitionEventInit(Handle h) noexcept;
public:
    static TransitionEventInit take_ownership(Handle h) noexcept;
    explicit TransitionEventInit(const emlite::Val &val) noexcept;
    TransitionEventInit() noexcept;
    [[nodiscard]] TransitionEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String propertyName() const;
    void propertyName(const jsbind::String& value);
    [[nodiscard]] double elapsedTime() const;
    void elapsedTime(double value);
    [[nodiscard]] jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind