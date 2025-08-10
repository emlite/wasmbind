#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCDataChannelInit
/// [`RTCDataChannelInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelInit)
class RTCDataChannelInit : public emlite::Val {
  explicit RTCDataChannelInit(Handle h) noexcept;
public:
    static RTCDataChannelInit take_ownership(Handle h) noexcept;
    explicit RTCDataChannelInit(const emlite::Val &val) noexcept;
    RTCDataChannelInit() noexcept;
    [[nodiscard]] RTCDataChannelInit clone() const noexcept;
    [[nodiscard]] bool ordered() const;
    void ordered(bool value);
    [[nodiscard]] unsigned short maxPacketLifeTime() const;
    void maxPacketLifeTime(unsigned short value);
    [[nodiscard]] unsigned short maxRetransmits() const;
    void maxRetransmits(unsigned short value);
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] bool negotiated() const;
    void negotiated(bool value);
    [[nodiscard]] unsigned short id() const;
    void id(unsigned short value);
};

} // namespace webbind