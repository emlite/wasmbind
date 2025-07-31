#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


/// The RTCError class.
/// [`RTCError`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError)
class RTCError : public DOMException {
    explicit RTCError(Handle h) noexcept;

public:
    explicit RTCError(const emlite::Val &val) noexcept;
    static RTCError take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCError clone() const noexcept;
    /// The `new RTCError(..)` constructor, creating a new RTCError instance
    RTCError(const jsbind::Any& init);
    /// The `new RTCError(..)` constructor, creating a new RTCError instance
    RTCError(const jsbind::Any& init, const jsbind::String& message);
    /// Getter of the `errorDetail` attribute.
    /// [`RTCError.errorDetail`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/errorDetail)
    [[nodiscard]] RTCErrorDetailType errorDetail() const;
    /// Getter of the `sdpLineNumber` attribute.
    /// [`RTCError.sdpLineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sdpLineNumber)
    [[nodiscard]] long sdpLineNumber() const;
    /// Getter of the `sctpCauseCode` attribute.
    /// [`RTCError.sctpCauseCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sctpCauseCode)
    [[nodiscard]] long sctpCauseCode() const;
    /// Getter of the `receivedAlert` attribute.
    /// [`RTCError.receivedAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/receivedAlert)
    [[nodiscard]] unsigned long receivedAlert() const;
    /// Getter of the `sentAlert` attribute.
    /// [`RTCError.sentAlert`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/sentAlert)
    [[nodiscard]] unsigned long sentAlert() const;
    /// Getter of the `httpRequestStatusCode` attribute.
    /// [`RTCError.httpRequestStatusCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCError/httpRequestStatusCode)
    [[nodiscard]] long httpRequestStatusCode() const;
};

