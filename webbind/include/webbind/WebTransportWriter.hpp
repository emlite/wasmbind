#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStreamDefaultWriter.hpp"
#include "enums.hpp"


/// The WebTransportWriter class.
/// [`WebTransportWriter`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportWriter)
class WebTransportWriter : public WritableStreamDefaultWriter {
    explicit WebTransportWriter(Handle h) noexcept;

public:
    explicit WebTransportWriter(const emlite::Val &val) noexcept;
    static WebTransportWriter take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportWriter clone() const noexcept;
    /// The atomicWrite method.
    /// [`WebTransportWriter.atomicWrite`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportWriter/atomicWrite)
    jsbind::Promise<jsbind::Undefined> atomicWrite();
    /// The atomicWrite method.
    /// [`WebTransportWriter.atomicWrite`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportWriter/atomicWrite)
    jsbind::Promise<jsbind::Undefined> atomicWrite(const jsbind::Any& chunk);
    /// The commit method.
    /// [`WebTransportWriter.commit`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportWriter/commit)
    jsbind::Undefined commit();
};

