#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceParameters
/// [`RTCIceParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceParameters)
class RTCIceParameters : public emlite::Val {
  explicit RTCIceParameters(Handle h) noexcept;
public:
    static RTCIceParameters take_ownership(Handle h) noexcept;
    explicit RTCIceParameters(const emlite::Val &val) noexcept;
    RTCIceParameters() noexcept;
    [[nodiscard]] RTCIceParameters clone() const noexcept;
    [[nodiscard]] jsbind::String usernameFragment() const;
    void usernameFragment(const jsbind::String& value);
    [[nodiscard]] jsbind::String password() const;
    void password(const jsbind::String& value);
};

} // namespace webbind