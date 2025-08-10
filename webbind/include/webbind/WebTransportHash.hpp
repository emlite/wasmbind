#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportHash
class WebTransportHash : public emlite::Val {
  explicit WebTransportHash(Handle h) noexcept;
public:
    static WebTransportHash take_ownership(Handle h) noexcept;
    explicit WebTransportHash(const emlite::Val &val) noexcept;
    WebTransportHash() noexcept;
    [[nodiscard]] WebTransportHash clone() const noexcept;
    /// Getter of the `algorithm` attribute.
    [[nodiscard]] jsbind::String algorithm() const;
    /// Setter of the `algorithm` attribute.
    void algorithm(const jsbind::String& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::Any& value);
};

} // namespace webbind