#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStream.hpp"
#include "enums.hpp"

class WebTransportSendGroup;


class WebTransportDatagramsWritable : public WritableStream {
    explicit WebTransportDatagramsWritable(Handle h) noexcept;

public:
    explicit WebTransportDatagramsWritable(const emlite::Val &val) noexcept;
    static WebTransportDatagramsWritable take_ownership(Handle h) noexcept;

    WebTransportDatagramsWritable clone() const noexcept;
    WebTransportSendGroup sendGroup() const;
    void sendGroup(const WebTransportSendGroup& value);
    long long sendOrder() const;
    void sendOrder(long long value);
};

