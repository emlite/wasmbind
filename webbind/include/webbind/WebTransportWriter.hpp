#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStreamDefaultWriter.hpp"
#include "enums.hpp"


class WebTransportWriter : public WritableStreamDefaultWriter {
    explicit WebTransportWriter(Handle h) noexcept;

public:
    explicit WebTransportWriter(const emlite::Val &val) noexcept;
    static WebTransportWriter take_ownership(Handle h) noexcept;

    WebTransportWriter clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> atomicWrite();
    jsbind::Promise<jsbind::Undefined> atomicWrite(const jsbind::Any& chunk);
    jsbind::Undefined commit();
};

