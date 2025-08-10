#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ObservableEventListenerOptions
class ObservableEventListenerOptions : public emlite::Val {
  explicit ObservableEventListenerOptions(Handle h) noexcept;
public:
    static ObservableEventListenerOptions take_ownership(Handle h) noexcept;
    explicit ObservableEventListenerOptions(const emlite::Val &val) noexcept;
    ObservableEventListenerOptions() noexcept;
    [[nodiscard]] ObservableEventListenerOptions clone() const noexcept;
    /// Getter of the `capture` attribute.
    [[nodiscard]] bool capture() const;
    /// Setter of the `capture` attribute.
    void capture(bool value);
    /// Getter of the `passive` attribute.
    [[nodiscard]] bool passive() const;
    /// Setter of the `passive` attribute.
    void passive(bool value);
};

} // namespace webbind