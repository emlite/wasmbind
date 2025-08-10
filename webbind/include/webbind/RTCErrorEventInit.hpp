#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCError;

/// Dictionary type RTCErrorEventInit
/// [`RTCErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEventInit)
class RTCErrorEventInit : public EventInit {
  explicit RTCErrorEventInit(Handle h) noexcept;
public:
    static RTCErrorEventInit take_ownership(Handle h) noexcept;
    explicit RTCErrorEventInit(const emlite::Val &val) noexcept;
    RTCErrorEventInit() noexcept;
    [[nodiscard]] RTCErrorEventInit clone() const noexcept;
    [[nodiscard]] RTCError error() const;
    void error(const RTCError& value);
};

} // namespace webbind