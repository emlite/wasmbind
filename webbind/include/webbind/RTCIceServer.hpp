#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIceServer
/// [`RTCIceServer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceServer)
class RTCIceServer : public emlite::Val {
  explicit RTCIceServer(Handle h) noexcept;
public:
    static RTCIceServer take_ownership(Handle h) noexcept;
    explicit RTCIceServer(const emlite::Val &val) noexcept;
    RTCIceServer() noexcept;
    [[nodiscard]] RTCIceServer clone() const noexcept;
    [[nodiscard]] jsbind::Any urls() const;
    void urls(const jsbind::Any& value);
    [[nodiscard]] jsbind::String username() const;
    void username(const jsbind::String& value);
    [[nodiscard]] jsbind::String credential() const;
    void credential(const jsbind::String& value);
};

} // namespace webbind