#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCErrorInit
/// [`RTCErrorInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorInit)
class RTCErrorInit : public emlite::Val {
  explicit RTCErrorInit(Handle h) noexcept;
public:
    static RTCErrorInit take_ownership(Handle h) noexcept;
    explicit RTCErrorInit(const emlite::Val &val) noexcept;
    RTCErrorInit() noexcept;
    [[nodiscard]] RTCErrorInit clone() const noexcept;
    [[nodiscard]] RTCErrorDetailType errorDetail() const;
    void errorDetail(const RTCErrorDetailType& value);
    [[nodiscard]] long sdpLineNumber() const;
    void sdpLineNumber(long value);
    [[nodiscard]] long sctpCauseCode() const;
    void sctpCauseCode(long value);
    [[nodiscard]] unsigned long receivedAlert() const;
    void receivedAlert(unsigned long value);
    [[nodiscard]] unsigned long sentAlert() const;
    void sentAlert(unsigned long value);
};

} // namespace webbind