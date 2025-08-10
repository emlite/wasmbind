#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ObservableEventListenerOptions
/// [`ObservableEventListenerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ObservableEventListenerOptions)
class ObservableEventListenerOptions : public emlite::Val {
  explicit ObservableEventListenerOptions(Handle h) noexcept;
public:
    static ObservableEventListenerOptions take_ownership(Handle h) noexcept;
    explicit ObservableEventListenerOptions(const emlite::Val &val) noexcept;
    ObservableEventListenerOptions() noexcept;
    [[nodiscard]] ObservableEventListenerOptions clone() const noexcept;
    [[nodiscard]] bool capture() const;
    void capture(bool value);
    [[nodiscard]] bool passive() const;
    void passive(bool value);
};

} // namespace webbind