#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


class RTCError : public DOMException {
    explicit RTCError(Handle h) noexcept;

public:
    explicit RTCError(const emlite::Val &val) noexcept;
    static RTCError take_ownership(Handle h) noexcept;

    RTCError clone() const noexcept;
    RTCError(const jsbind::Any& init, const jsbind::DOMString& message);
    RTCErrorDetailType errorDetail() const;
    long sdpLineNumber() const;
    long sctpCauseCode() const;
    unsigned long receivedAlert() const;
    unsigned long sentAlert() const;
    long httpRequestStatusCode() const;
};

