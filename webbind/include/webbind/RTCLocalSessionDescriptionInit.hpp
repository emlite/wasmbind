#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCLocalSessionDescriptionInit
/// [`RTCLocalSessionDescriptionInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCLocalSessionDescriptionInit)
class RTCLocalSessionDescriptionInit : public emlite::Val {
  explicit RTCLocalSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCLocalSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCLocalSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCLocalSessionDescriptionInit() noexcept;
    [[nodiscard]] RTCLocalSessionDescriptionInit clone() const noexcept;
    [[nodiscard]] RTCSdpType type() const;
    void type(const RTCSdpType& value);
    [[nodiscard]] jsbind::String sdp() const;
    void sdp(const jsbind::String& value);
};

} // namespace webbind