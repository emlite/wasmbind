#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportHash.hpp"

namespace webbind {

/// Dictionary type WebTransportOptions
class WebTransportOptions : public emlite::Val {
  explicit WebTransportOptions(Handle h) noexcept;
public:
    static WebTransportOptions take_ownership(Handle h) noexcept;
    explicit WebTransportOptions(const emlite::Val &val) noexcept;
    WebTransportOptions() noexcept;
    [[nodiscard]] WebTransportOptions clone() const noexcept;
    /// Getter of the `allowPooling` attribute.
    [[nodiscard]] bool allowPooling() const;
    /// Setter of the `allowPooling` attribute.
    void allowPooling(bool value);
    /// Getter of the `requireUnreliable` attribute.
    [[nodiscard]] bool requireUnreliable() const;
    /// Setter of the `requireUnreliable` attribute.
    void requireUnreliable(bool value);
    /// Getter of the `serverCertificateHashes` attribute.
    [[nodiscard]] jsbind::TypedArray<WebTransportHash> serverCertificateHashes() const;
    /// Setter of the `serverCertificateHashes` attribute.
    void serverCertificateHashes(const jsbind::TypedArray<WebTransportHash>& value);
    /// Getter of the `congestionControl` attribute.
    [[nodiscard]] WebTransportCongestionControl congestionControl() const;
    /// Setter of the `congestionControl` attribute.
    void congestionControl(const WebTransportCongestionControl& value);
    /// Getter of the `anticipatedConcurrentIncomingUnidirectionalStreams` attribute.
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingUnidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingUnidirectionalStreams` attribute.
    void anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value);
    /// Getter of the `anticipatedConcurrentIncomingBidirectionalStreams` attribute.
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingBidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingBidirectionalStreams` attribute.
    void anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value);
    /// Getter of the `protocols` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> protocols() const;
    /// Setter of the `protocols` attribute.
    void protocols(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind