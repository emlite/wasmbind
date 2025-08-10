#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCTransportStats
class RTCTransportStats : public RTCStats {
  explicit RTCTransportStats(Handle h) noexcept;
public:
    static RTCTransportStats take_ownership(Handle h) noexcept;
    explicit RTCTransportStats(const emlite::Val &val) noexcept;
    RTCTransportStats() noexcept;
    [[nodiscard]] RTCTransportStats clone() const noexcept;
    /// Getter of the `packetsSent` attribute.
    [[nodiscard]] long long packetsSent() const;
    /// Setter of the `packetsSent` attribute.
    void packetsSent(long long value);
    /// Getter of the `packetsReceived` attribute.
    [[nodiscard]] long long packetsReceived() const;
    /// Setter of the `packetsReceived` attribute.
    void packetsReceived(long long value);
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
    /// Getter of the `iceRole` attribute.
    [[nodiscard]] RTCIceRole iceRole() const;
    /// Setter of the `iceRole` attribute.
    void iceRole(const RTCIceRole& value);
    /// Getter of the `iceLocalUsernameFragment` attribute.
    [[nodiscard]] jsbind::String iceLocalUsernameFragment() const;
    /// Setter of the `iceLocalUsernameFragment` attribute.
    void iceLocalUsernameFragment(const jsbind::String& value);
    /// Getter of the `dtlsState` attribute.
    [[nodiscard]] RTCDtlsTransportState dtlsState() const;
    /// Setter of the `dtlsState` attribute.
    void dtlsState(const RTCDtlsTransportState& value);
    /// Getter of the `iceState` attribute.
    [[nodiscard]] RTCIceTransportState iceState() const;
    /// Setter of the `iceState` attribute.
    void iceState(const RTCIceTransportState& value);
    /// Getter of the `selectedCandidatePairId` attribute.
    [[nodiscard]] jsbind::String selectedCandidatePairId() const;
    /// Setter of the `selectedCandidatePairId` attribute.
    void selectedCandidatePairId(const jsbind::String& value);
    /// Getter of the `localCertificateId` attribute.
    [[nodiscard]] jsbind::String localCertificateId() const;
    /// Setter of the `localCertificateId` attribute.
    void localCertificateId(const jsbind::String& value);
    /// Getter of the `remoteCertificateId` attribute.
    [[nodiscard]] jsbind::String remoteCertificateId() const;
    /// Setter of the `remoteCertificateId` attribute.
    void remoteCertificateId(const jsbind::String& value);
    /// Getter of the `tlsVersion` attribute.
    [[nodiscard]] jsbind::String tlsVersion() const;
    /// Setter of the `tlsVersion` attribute.
    void tlsVersion(const jsbind::String& value);
    /// Getter of the `dtlsCipher` attribute.
    [[nodiscard]] jsbind::String dtlsCipher() const;
    /// Setter of the `dtlsCipher` attribute.
    void dtlsCipher(const jsbind::String& value);
    /// Getter of the `dtlsRole` attribute.
    [[nodiscard]] RTCDtlsRole dtlsRole() const;
    /// Setter of the `dtlsRole` attribute.
    void dtlsRole(const RTCDtlsRole& value);
    /// Getter of the `srtpCipher` attribute.
    [[nodiscard]] jsbind::String srtpCipher() const;
    /// Setter of the `srtpCipher` attribute.
    void srtpCipher(const jsbind::String& value);
    /// Getter of the `selectedCandidatePairChanges` attribute.
    [[nodiscard]] unsigned long selectedCandidatePairChanges() const;
    /// Setter of the `selectedCandidatePairChanges` attribute.
    void selectedCandidatePairChanges(unsigned long value);
    /// Getter of the `ccfbMessagesSent` attribute.
    [[nodiscard]] unsigned long ccfbMessagesSent() const;
    /// Setter of the `ccfbMessagesSent` attribute.
    void ccfbMessagesSent(unsigned long value);
    /// Getter of the `ccfbMessagesReceived` attribute.
    [[nodiscard]] unsigned long ccfbMessagesReceived() const;
    /// Setter of the `ccfbMessagesReceived` attribute.
    void ccfbMessagesReceived(unsigned long value);
};

} // namespace webbind