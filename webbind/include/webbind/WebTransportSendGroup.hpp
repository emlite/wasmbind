#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebTransportSendStreamStats;

/// Interface WebTransportSendGroup
/// [`WebTransportSendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendGroup)
class WebTransportSendGroup : public emlite::Val {
    explicit WebTransportSendGroup(Handle h) noexcept;
public:
    explicit WebTransportSendGroup(const emlite::Val &val) noexcept;
    static WebTransportSendGroup take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportSendGroup clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getStats method.
    /// [`WebTransportSendGroup.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendGroup/getStats)
    jsbind::Promise<WebTransportSendStreamStats> getStats();
};

} // namespace webbind