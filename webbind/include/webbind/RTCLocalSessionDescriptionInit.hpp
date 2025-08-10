#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCLocalSessionDescriptionInit
class RTCLocalSessionDescriptionInit : public emlite::Val {
  explicit RTCLocalSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCLocalSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCLocalSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCLocalSessionDescriptionInit() noexcept;
    [[nodiscard]] RTCLocalSessionDescriptionInit clone() const noexcept;
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