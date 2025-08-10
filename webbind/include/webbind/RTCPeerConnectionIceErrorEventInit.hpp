#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type RTCPeerConnectionIceErrorEventInit
class RTCPeerConnectionIceErrorEventInit : public EventInit {
  explicit RTCPeerConnectionIceErrorEventInit(Handle h) noexcept;
public:
    static RTCPeerConnectionIceErrorEventInit take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionIceErrorEventInit(const emlite::Val &val) noexcept;
    RTCPeerConnectionIceErrorEventInit() noexcept;
    [[nodiscard]] RTCPeerConnectionIceErrorEventInit clone() const noexcept;
    /// Getter of the `address` attribute.
    [[nodiscard]] jsbind::String address() const;
    /// Setter of the `address` attribute.
    void address(const jsbind::String& value);
    /// Getter of the `port` attribute.
    [[nodiscard]] unsigned short port() const;
    /// Setter of the `port` attribute.
    void port(unsigned short value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `errorCode` attribute.
    [[nodiscard]] unsigned short errorCode() const;
    /// Setter of the `errorCode` attribute.
    void errorCode(unsigned short value);
    /// Getter of the `errorText` attribute.
    [[nodiscard]] jsbind::String errorText() const;
    /// Setter of the `errorText` attribute.
    void errorText(const jsbind::String& value);
};

} // namespace webbind