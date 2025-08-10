#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IsInputPendingOptions
/// [`IsInputPendingOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IsInputPendingOptions)
class IsInputPendingOptions : public emlite::Val {
  explicit IsInputPendingOptions(Handle h) noexcept;
public:
    static IsInputPendingOptions take_ownership(Handle h) noexcept;
    explicit IsInputPendingOptions(const emlite::Val &val) noexcept;
    IsInputPendingOptions() noexcept;
    [[nodiscard]] IsInputPendingOptions clone() const noexcept;
    [[nodiscard]] bool includeContinuous() const;
    void includeContinuous(bool value);
};

} // namespace webbind