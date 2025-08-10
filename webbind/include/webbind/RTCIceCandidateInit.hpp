#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidateInit
/// [`RTCIceCandidateInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidateInit)
class RTCIceCandidateInit : public emlite::Val {
  explicit RTCIceCandidateInit(Handle h) noexcept;
public:
    static RTCIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateInit(const emlite::Val &val) noexcept;
    RTCIceCandidateInit() noexcept;
    [[nodiscard]] RTCIceCandidateInit clone() const noexcept;
    [[nodiscard]] jsbind::String candidate() const;
    void candidate(const jsbind::String& value);
    [[nodiscard]] jsbind::String sdpMid() const;
    void sdpMid(const jsbind::String& value);
    [[nodiscard]] unsigned short sdpMLineIndex() const;
    void sdpMLineIndex(unsigned short value);
    [[nodiscard]] jsbind::String usernameFragment() const;
    void usernameFragment(const jsbind::String& value);
};

} // namespace webbind