#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ForDebuggingOnly class.
/// [`ForDebuggingOnly`](https://developer.mozilla.org/en-US/docs/Web/API/ForDebuggingOnly)
class ForDebuggingOnly : public emlite::Val {
    explicit ForDebuggingOnly(Handle h) noexcept;

public:
    explicit ForDebuggingOnly(const emlite::Val &val) noexcept;
    static ForDebuggingOnly take_ownership(Handle h) noexcept;

    [[nodiscard]] ForDebuggingOnly clone() const noexcept;
    /// The reportAdAuctionWin method.
    /// [`ForDebuggingOnly.reportAdAuctionWin`](https://developer.mozilla.org/en-US/docs/Web/API/ForDebuggingOnly/reportAdAuctionWin)
    jsbind::Undefined reportAdAuctionWin(const jsbind::String& url);
    /// The reportAdAuctionLoss method.
    /// [`ForDebuggingOnly.reportAdAuctionLoss`](https://developer.mozilla.org/en-US/docs/Web/API/ForDebuggingOnly/reportAdAuctionLoss)
    jsbind::Undefined reportAdAuctionLoss(const jsbind::String& url);
};

