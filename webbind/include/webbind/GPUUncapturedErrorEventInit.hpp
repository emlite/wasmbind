#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class GPUError;

/// Dictionary type GPUUncapturedErrorEventInit
/// [`GPUUncapturedErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/GPUUncapturedErrorEventInit)
class GPUUncapturedErrorEventInit : public EventInit {
  explicit GPUUncapturedErrorEventInit(Handle h) noexcept;
public:
    static GPUUncapturedErrorEventInit take_ownership(Handle h) noexcept;
    explicit GPUUncapturedErrorEventInit(const emlite::Val &val) noexcept;
    GPUUncapturedErrorEventInit() noexcept;
    [[nodiscard]] GPUUncapturedErrorEventInit clone() const noexcept;
    [[nodiscard]] GPUError error() const;
    void error(const GPUError& value);
};

} // namespace webbind