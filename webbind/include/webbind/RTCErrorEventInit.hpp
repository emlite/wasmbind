#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCError;

/// Dictionary type RTCErrorEventInit
class RTCErrorEventInit : public EventInit {
  explicit RTCErrorEventInit(Handle h) noexcept;
public:
    static RTCErrorEventInit take_ownership(Handle h) noexcept;
    explicit RTCErrorEventInit(const emlite::Val &val) noexcept;
    RTCErrorEventInit() noexcept;
    [[nodiscard]] RTCErrorEventInit clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] RTCError error() const;
    /// Setter of the `error` attribute.
    void error(const RTCError& value);
};

} // namespace webbind