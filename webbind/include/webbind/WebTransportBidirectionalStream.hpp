#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebTransportReceiveStream;
class WebTransportSendStream;


class WebTransportBidirectionalStream : public emlite::Val {
    explicit WebTransportBidirectionalStream(Handle h) noexcept;

public:
    explicit WebTransportBidirectionalStream(const emlite::Val &val) noexcept;
    static WebTransportBidirectionalStream take_ownership(Handle h) noexcept;

    WebTransportBidirectionalStream clone() const noexcept;
    WebTransportReceiveStream readable() const;
    WebTransportSendStream writable() const;
};

