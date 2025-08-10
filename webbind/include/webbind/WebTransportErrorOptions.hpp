#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportErrorOptions
class WebTransportErrorOptions : public emlite::Val {
  explicit WebTransportErrorOptions(Handle h) noexcept;
public:
    static WebTransportErrorOptions take_ownership(Handle h) noexcept;
    explicit WebTransportErrorOptions(const emlite::Val &val) noexcept;
    WebTransportErrorOptions() noexcept;
    [[nodiscard]] WebTransportErrorOptions clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] WebTransportErrorSource source() const;
    /// Setter of the `source` attribute.
    void source(const WebTransportErrorSource& value);
    /// Getter of the `streamErrorCode` attribute.
    [[nodiscard]] unsigned long streamErrorCode() const;
    /// Setter of the `streamErrorCode` attribute.
    void streamErrorCode(unsigned long value);
};

} // namespace webbind