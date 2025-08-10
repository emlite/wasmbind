#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportHash.hpp"

namespace webbind {

/// Dictionary type WebTransportOptions
/// [`WebTransportOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportOptions)
class WebTransportOptions : public emlite::Val {
  explicit WebTransportOptions(Handle h) noexcept;
public:
    static WebTransportOptions take_ownership(Handle h) noexcept;
    explicit WebTransportOptions(const emlite::Val &val) noexcept;
    WebTransportOptions() noexcept;
    [[nodiscard]] WebTransportOptions clone() const noexcept;
    [[nodiscard]] bool allowPooling() const;
    void allowPooling(bool value);
    [[nodiscard]] bool requireUnreliable() const;
    void requireUnreliable(bool value);
    [[nodiscard]] jsbind::TypedArray<WebTransportHash> serverCertificateHashes() const;
    void serverCertificateHashes(const jsbind::TypedArray<WebTransportHash>& value);
    [[nodiscard]] WebTransportCongestionControl congestionControl() const;
    void congestionControl(const WebTransportCongestionControl& value);
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingUnidirectionalStreams() const;
    void anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value);
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingBidirectionalStreams() const;
    void anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> protocols() const;
    void protocols(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind