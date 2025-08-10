#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PADebugModeOptions
/// [`PADebugModeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PADebugModeOptions)
class PADebugModeOptions : public emlite::Val {
  explicit PADebugModeOptions(Handle h) noexcept;
public:
    static PADebugModeOptions take_ownership(Handle h) noexcept;
    explicit PADebugModeOptions(const emlite::Val &val) noexcept;
    PADebugModeOptions() noexcept;
    [[nodiscard]] PADebugModeOptions clone() const noexcept;
    [[nodiscard]] long long debugKey() const;
    void debugKey(long long value);
};

} // namespace webbind