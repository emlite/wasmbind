#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCSessionDescriptionInit
/// [`RTCSessionDescriptionInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescriptionInit)
class RTCSessionDescriptionInit : public emlite::Val {
  explicit RTCSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCSessionDescriptionInit() noexcept;
    [[nodiscard]] RTCSessionDescriptionInit clone() const noexcept;
    [[nodiscard]] RTCSdpType type() const;
    void type(const RTCSdpType& value);
    [[nodiscard]] jsbind::String sdp() const;
    void sdp(const jsbind::String& value);
};

} // namespace webbind