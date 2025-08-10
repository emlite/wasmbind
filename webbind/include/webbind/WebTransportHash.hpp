#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportHash
/// [`WebTransportHash`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportHash)
class WebTransportHash : public emlite::Val {
  explicit WebTransportHash(Handle h) noexcept;
public:
    static WebTransportHash take_ownership(Handle h) noexcept;
    explicit WebTransportHash(const emlite::Val &val) noexcept;
    WebTransportHash() noexcept;
    [[nodiscard]] WebTransportHash clone() const noexcept;
    [[nodiscard]] jsbind::String algorithm() const;
    void algorithm(const jsbind::String& value);
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

} // namespace webbind