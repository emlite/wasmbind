#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCSessionDescriptionInit
class RTCSessionDescriptionInit : public emlite::Val {
  explicit RTCSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCSessionDescriptionInit() noexcept;
    [[nodiscard]] RTCSessionDescriptionInit clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] RTCSdpType type() const;
    /// Setter of the `type` attribute.
    void type(const RTCSdpType& value);
    /// Getter of the `sdp` attribute.
    [[nodiscard]] jsbind::String sdp() const;
    /// Setter of the `sdp` attribute.
    void sdp(const jsbind::String& value);
};

} // namespace webbind