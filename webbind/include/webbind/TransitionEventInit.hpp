#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TransitionEventInit
class TransitionEventInit : public EventInit {
  explicit TransitionEventInit(Handle h) noexcept;
public:
    static TransitionEventInit take_ownership(Handle h) noexcept;
    explicit TransitionEventInit(const emlite::Val &val) noexcept;
    TransitionEventInit() noexcept;
    [[nodiscard]] TransitionEventInit clone() const noexcept;
    /// Getter of the `propertyName` attribute.
    [[nodiscard]] jsbind::String propertyName() const;
    /// Setter of the `propertyName` attribute.
    void propertyName(const jsbind::String& value);
    /// Getter of the `elapsedTime` attribute.
    [[nodiscard]] double elapsedTime() const;
    /// Setter of the `elapsedTime` attribute.
    void elapsedTime(double value);
    /// Getter of the `pseudoElement` attribute.
    [[nodiscard]] jsbind::String pseudoElement() const;
    /// Setter of the `pseudoElement` attribute.
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind