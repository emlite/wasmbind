#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCSetParameterOptions
/// [`RTCSetParameterOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSetParameterOptions)
class RTCSetParameterOptions : public emlite::Val {
  explicit RTCSetParameterOptions(Handle h) noexcept;
public:
    static RTCSetParameterOptions take_ownership(Handle h) noexcept;
    explicit RTCSetParameterOptions(const emlite::Val &val) noexcept;
    RTCSetParameterOptions() noexcept;
    [[nodiscard]] RTCSetParameterOptions clone() const noexcept;
};

} // namespace webbind