#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportSendOptions.hpp"

namespace webbind {

/// Dictionary type WebTransportSendStreamOptions
/// [`WebTransportSendStreamOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStreamOptions)
class WebTransportSendStreamOptions : public WebTransportSendOptions {
  explicit WebTransportSendStreamOptions(Handle h) noexcept;
public:
    static WebTransportSendStreamOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendStreamOptions(const emlite::Val &val) noexcept;
    WebTransportSendStreamOptions() noexcept;
    [[nodiscard]] WebTransportSendStreamOptions clone() const noexcept;
    [[nodiscard]] bool waitUntilAvailable() const;
    void waitUntilAvailable(bool value);
};

} // namespace webbind