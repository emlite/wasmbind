#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidateInit
class RTCIceCandidateInit : public emlite::Val {
  explicit RTCIceCandidateInit(Handle h) noexcept;
public:
    static RTCIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateInit(const emlite::Val &val) noexcept;
    RTCIceCandidateInit() noexcept;
    [[nodiscard]] RTCIceCandidateInit clone() const noexcept;
    /// Getter of the `candidate` attribute.
    [[nodiscard]] jsbind::String candidate() const;
    /// Setter of the `candidate` attribute.
    void candidate(const jsbind::String& value);
    /// Getter of the `sdpMid` attribute.
    [[nodiscard]] jsbind::String sdpMid() const;
    /// Setter of the `sdpMid` attribute.
    void sdpMid(const jsbind::String& value);
    /// Getter of the `sdpMLineIndex` attribute.
    [[nodiscard]] unsigned short sdpMLineIndex() const;
    /// Setter of the `sdpMLineIndex` attribute.
    void sdpMLineIndex(unsigned short value);
    /// Getter of the `usernameFragment` attribute.
    [[nodiscard]] jsbind::String usernameFragment() const;
    /// Setter of the `usernameFragment` attribute.
    void usernameFragment(const jsbind::String& value);
};

} // namespace webbind