#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebTransportSendStream.hpp"
#include "enums.hpp"


class WebTransportSendGroup : public emlite::Val {
    explicit WebTransportSendGroup(Handle h) noexcept;

public:
    explicit WebTransportSendGroup(const emlite::Val &val) noexcept;
    static WebTransportSendGroup take_ownership(Handle h) noexcept;

    WebTransportSendGroup clone() const noexcept;
    jsbind::Promise getStats();
};

