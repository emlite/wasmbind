#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


class WebTransportError : public DOMException {
    explicit WebTransportError(Handle h) noexcept;

public:
    explicit WebTransportError(const emlite::Val &val) noexcept;
    static WebTransportError take_ownership(Handle h) noexcept;

    WebTransportError clone() const noexcept;
    WebTransportError();
    WebTransportError(const jsbind::String& message);
    WebTransportError(const jsbind::String& message, const jsbind::Any& options);
    WebTransportErrorSource source() const;
    unsigned long streamErrorCode() const;
};

