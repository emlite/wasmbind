#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCTransportStats
/// [`RTCTransportStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTransportStats)
class RTCTransportStats : public RTCStats {
  explicit RTCTransportStats(Handle h) noexcept;
public:
    static RTCTransportStats take_ownership(Handle h) noexcept;
    explicit RTCTransportStats(const emlite::Val &val) noexcept;
    RTCTransportStats() noexcept;
    [[nodiscard]] RTCTransportStats clone() const noexcept;
    [[nodiscard]] long long packetsSent() const;
    void packetsSent(long long value);
    [[nodiscard]] long long packetsReceived() const;
    void packetsReceived(long long value);
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
    [[nodiscard]] RTCIceRole iceRole() const;
    void iceRole(const RTCIceRole& value);
    [[nodiscard]] jsbind::String iceLocalUsernameFragment() const;
    void iceLocalUsernameFragment(const jsbind::String& value);
    [[nodiscard]] RTCDtlsTransportState dtlsState() const;
    void dtlsState(const RTCDtlsTransportState& value);
    [[nodiscard]] RTCIceTransportState iceState() const;
    void iceState(const RTCIceTransportState& value);
    [[nodiscard]] jsbind::String selectedCandidatePairId() const;
    void selectedCandidatePairId(const jsbind::String& value);
    [[nodiscard]] jsbind::String localCertificateId() const;
    void localCertificateId(const jsbind::String& value);
    [[nodiscard]] jsbind::String remoteCertificateId() const;
    void remoteCertificateId(const jsbind::String& value);
    [[nodiscard]] jsbind::String tlsVersion() const;
    void tlsVersion(const jsbind::String& value);
    [[nodiscard]] jsbind::String dtlsCipher() const;
    void dtlsCipher(const jsbind::String& value);
    [[nodiscard]] RTCDtlsRole dtlsRole() const;
    void dtlsRole(const RTCDtlsRole& value);
    [[nodiscard]] jsbind::String srtpCipher() const;
    void srtpCipher(const jsbind::String& value);
    [[nodiscard]] unsigned long selectedCandidatePairChanges() const;
    void selectedCandidatePairChanges(unsigned long value);
    [[nodiscard]] unsigned long ccfbMessagesSent() const;
    void ccfbMessagesSent(unsigned long value);
    [[nodiscard]] unsigned long ccfbMessagesReceived() const;
    void ccfbMessagesReceived(unsigned long value);
};

} // namespace webbind