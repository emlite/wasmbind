#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebTransportSendGroup;

/// Dictionary type WebTransportSendOptions
class WebTransportSendOptions : public emlite::Val {
  explicit WebTransportSendOptions(Handle h) noexcept;
public:
    static WebTransportSendOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendOptions(const emlite::Val &val) noexcept;
    WebTransportSendOptions() noexcept;
    [[nodiscard]] WebTransportSendOptions clone() const noexcept;
    /// Getter of the `sendGroup` attribute.
    [[nodiscard]] WebTransportSendGroup sendGroup() const;
    /// Setter of the `sendGroup` attribute.
    void sendGroup(const WebTransportSendGroup& value);
    /// Getter of the `sendOrder` attribute.
    [[nodiscard]] long long sendOrder() const;
    /// Setter of the `sendOrder` attribute.
    void sendOrder(long long value);
};

} // namespace webbind