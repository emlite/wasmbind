#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMException.hpp"
#include "enums.hpp"

namespace webbind {

class RTCErrorInit;

/// Interface RTCError
/// [`RTCError`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError)
class RTCError : public DOMException {
    explicit RTCError(Handle h) noexcept;
public:
    explicit RTCError(const emlite::Val &val) noexcept;
    static RTCError take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCError(..)` constructor, creating a new RTCError instance
    RTCError(const RTCErrorInit& init);
    /// The `new RTCError(..)` constructor, creating a new RTCError instance
    RTCError(const RTCErrorInit& init, const jsbind::String& message);
    /// [`RTCError.errorDetail`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/errorDetail)
    /// [`RTCError.errorDetail`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/errorDetail)
    [[nodiscard]] RTCErrorDetailType errorDetail() const;
    /// [`RTCError.sdpLineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sdpLineNumber)
    /// [`RTCError.sdpLineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sdpLineNumber)
    [[nodiscard]] long sdpLineNumber() const;
    /// [`RTCError.sctpCauseCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sctpCauseCode)
    /// [`RTCError.sctpCauseCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sctpCauseCode)
    [[nodiscard]] long sctpCauseCode() const;
    /// [`RTCError.receivedAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/receivedAlert)
    /// [`RTCError.receivedAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/receivedAlert)
    [[nodiscard]] unsigned long receivedAlert() const;
    /// [`RTCError.sentAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sentAlert)
    /// [`RTCError.sentAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sentAlert)
    [[nodiscard]] unsigned long sentAlert() const;
    /// [`RTCError.httpRequestStatusCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/httpRequestStatusCode)
    /// [`RTCError.httpRequestStatusCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/httpRequestStatusCode)
    [[nodiscard]] long httpRequestStatusCode() const;
};

} // namespace webbind