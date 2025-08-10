#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type RTCPeerConnectionIceErrorEventInit
/// [`RTCPeerConnectionIceErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEventInit)
class RTCPeerConnectionIceErrorEventInit : public EventInit {
  explicit RTCPeerConnectionIceErrorEventInit(Handle h) noexcept;
public:
    static RTCPeerConnectionIceErrorEventInit take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionIceErrorEventInit(const emlite::Val &val) noexcept;
    RTCPeerConnectionIceErrorEventInit() noexcept;
    [[nodiscard]] RTCPeerConnectionIceErrorEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String address() const;
    void address(const jsbind::String& value);
    [[nodiscard]] unsigned short port() const;
    void port(unsigned short value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] unsigned short errorCode() const;
    void errorCode(unsigned short value);
    [[nodiscard]] jsbind::String errorText() const;
    void errorText(const jsbind::String& value);
};

} // namespace webbind