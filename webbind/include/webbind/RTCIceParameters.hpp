#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceParameters
class RTCIceParameters : public emlite::Val {
  explicit RTCIceParameters(Handle h) noexcept;
public:
    static RTCIceParameters take_ownership(Handle h) noexcept;
    explicit RTCIceParameters(const emlite::Val &val) noexcept;
    RTCIceParameters() noexcept;
    [[nodiscard]] RTCIceParameters clone() const noexcept;
    /// Getter of the `usernameFragment` attribute.
    [[nodiscard]] jsbind::String usernameFragment() const;
    /// Setter of the `usernameFragment` attribute.
    void usernameFragment(const jsbind::String& value);
    /// Getter of the `password` attribute.
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    void password(const jsbind::String& value);
};

} // namespace webbind