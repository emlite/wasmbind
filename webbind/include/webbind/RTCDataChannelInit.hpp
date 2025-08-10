#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCDataChannelInit
class RTCDataChannelInit : public emlite::Val {
  explicit RTCDataChannelInit(Handle h) noexcept;
public:
    static RTCDataChannelInit take_ownership(Handle h) noexcept;
    explicit RTCDataChannelInit(const emlite::Val &val) noexcept;
    RTCDataChannelInit() noexcept;
    [[nodiscard]] RTCDataChannelInit clone() const noexcept;
    /// Getter of the `ordered` attribute.
    [[nodiscard]] bool ordered() const;
    /// Setter of the `ordered` attribute.
    void ordered(bool value);
    /// Getter of the `maxPacketLifeTime` attribute.
    [[nodiscard]] unsigned short maxPacketLifeTime() const;
    /// Setter of the `maxPacketLifeTime` attribute.
    void maxPacketLifeTime(unsigned short value);
    /// Getter of the `maxRetransmits` attribute.
    [[nodiscard]] unsigned short maxRetransmits() const;
    /// Setter of the `maxRetransmits` attribute.
    void maxRetransmits(unsigned short value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `negotiated` attribute.
    [[nodiscard]] bool negotiated() const;
    /// Setter of the `negotiated` attribute.
    void negotiated(bool value);
    /// Getter of the `id` attribute.
    [[nodiscard]] unsigned short id() const;
    /// Setter of the `id` attribute.
    void id(unsigned short value);
};

} // namespace webbind