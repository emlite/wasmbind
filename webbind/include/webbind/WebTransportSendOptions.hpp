#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebTransportSendGroup;

/// Dictionary type WebTransportSendOptions
/// [`WebTransportSendOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendOptions)
class WebTransportSendOptions : public emlite::Val {
  explicit WebTransportSendOptions(Handle h) noexcept;
public:
    static WebTransportSendOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendOptions(const emlite::Val &val) noexcept;
    WebTransportSendOptions() noexcept;
    [[nodiscard]] WebTransportSendOptions clone() const noexcept;
    [[nodiscard]] WebTransportSendGroup sendGroup() const;
    void sendGroup(const WebTransportSendGroup& value);
    [[nodiscard]] long long sendOrder() const;
    void sendOrder(long long value);
};

} // namespace webbind