#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCErrorInit
class RTCErrorInit : public emlite::Val {
  explicit RTCErrorInit(Handle h) noexcept;
public:
    static RTCErrorInit take_ownership(Handle h) noexcept;
    explicit RTCErrorInit(const emlite::Val &val) noexcept;
    RTCErrorInit() noexcept;
    [[nodiscard]] RTCErrorInit clone() const noexcept;
    /// Getter of the `errorDetail` attribute.
    [[nodiscard]] RTCErrorDetailType errorDetail() const;
    /// Setter of the `errorDetail` attribute.
    void errorDetail(const RTCErrorDetailType& value);
    /// Getter of the `sdpLineNumber` attribute.
    [[nodiscard]] long sdpLineNumber() const;
    /// Setter of the `sdpLineNumber` attribute.
    void sdpLineNumber(long value);
    /// Getter of the `sctpCauseCode` attribute.
    [[nodiscard]] long sctpCauseCode() const;
    /// Setter of the `sctpCauseCode` attribute.
    void sctpCauseCode(long value);
    /// Getter of the `receivedAlert` attribute.
    [[nodiscard]] unsigned long receivedAlert() const;
    /// Setter of the `receivedAlert` attribute.
    void receivedAlert(unsigned long value);
    /// Getter of the `sentAlert` attribute.
    [[nodiscard]] unsigned long sentAlert() const;
    /// Setter of the `sentAlert` attribute.
    void sentAlert(unsigned long value);
};

} // namespace webbind