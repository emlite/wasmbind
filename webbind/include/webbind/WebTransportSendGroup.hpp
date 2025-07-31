#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebTransportSendStream.hpp"
#include "enums.hpp"


/// The WebTransportSendGroup class.
/// [`WebTransportSendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendGroup)
class WebTransportSendGroup : public emlite::Val {
    explicit WebTransportSendGroup(Handle h) noexcept;

public:
    explicit WebTransportSendGroup(const emlite::Val &val) noexcept;
    static WebTransportSendGroup take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportSendGroup clone() const noexcept;
    /// The getStats method.
    /// [`WebTransportSendGroup.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendGroup/getStats)
    jsbind::Promise<WebTransportSendStreamStats> getStats();
};

