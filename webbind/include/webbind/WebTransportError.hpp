#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMException.hpp"
#include "enums.hpp"

namespace webbind {

class WebTransportErrorOptions;

/// Interface WebTransportError
/// [`WebTransportError`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError)
class WebTransportError : public DOMException {
    explicit WebTransportError(Handle h) noexcept;
public:
    explicit WebTransportError(const emlite::Val &val) noexcept;
    static WebTransportError take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WebTransportError(..)` constructor, creating a new WebTransportError instance
    WebTransportError();
    /// The `new WebTransportError(..)` constructor, creating a new WebTransportError instance
    WebTransportError(const jsbind::String& message);
    /// The `new WebTransportError(..)` constructor, creating a new WebTransportError instance
    WebTransportError(const jsbind::String& message, const WebTransportErrorOptions& options);
    /// [`WebTransportError.source`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError/source)
    /// [`WebTransportError.source`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError/source)
    [[nodiscard]] WebTransportErrorSource source() const;
    /// [`WebTransportError.streamErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError/streamErrorCode)
    /// [`WebTransportError.streamErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError/streamErrorCode)
    [[nodiscard]] unsigned long streamErrorCode() const;
};

} // namespace webbind