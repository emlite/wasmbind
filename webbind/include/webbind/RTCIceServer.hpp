#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceServer
class RTCIceServer : public emlite::Val {
  explicit RTCIceServer(Handle h) noexcept;
public:
    static RTCIceServer take_ownership(Handle h) noexcept;
    explicit RTCIceServer(const emlite::Val &val) noexcept;
    RTCIceServer() noexcept;
    [[nodiscard]] RTCIceServer clone() const noexcept;
    /// Getter of the `urls` attribute.
    [[nodiscard]] jsbind::Any urls() const;
    /// Setter of the `urls` attribute.
    void urls(const jsbind::Any& value);
    /// Getter of the `username` attribute.
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    void username(const jsbind::String& value);
    /// Getter of the `credential` attribute.
    [[nodiscard]] jsbind::String credential() const;
    /// Setter of the `credential` attribute.
    void credential(const jsbind::String& value);
};

} // namespace webbind