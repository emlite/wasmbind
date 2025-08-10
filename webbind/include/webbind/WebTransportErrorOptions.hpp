#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportErrorOptions
/// [`WebTransportErrorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportErrorOptions)
class WebTransportErrorOptions : public emlite::Val {
  explicit WebTransportErrorOptions(Handle h) noexcept;
public:
    static WebTransportErrorOptions take_ownership(Handle h) noexcept;
    explicit WebTransportErrorOptions(const emlite::Val &val) noexcept;
    WebTransportErrorOptions() noexcept;
    [[nodiscard]] WebTransportErrorOptions clone() const noexcept;
    [[nodiscard]] WebTransportErrorSource source() const;
    void source(const WebTransportErrorSource& value);
    [[nodiscard]] unsigned long streamErrorCode() const;
    void streamErrorCode(unsigned long value);
};

} // namespace webbind