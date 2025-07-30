#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ForDebuggingOnly : public emlite::Val {
    explicit ForDebuggingOnly(Handle h) noexcept;

public:
    explicit ForDebuggingOnly(const emlite::Val &val) noexcept;
    static ForDebuggingOnly take_ownership(Handle h) noexcept;

    ForDebuggingOnly clone() const noexcept;
    jsbind::Undefined reportAdAuctionWin(const jsbind::String& url);
    jsbind::Undefined reportAdAuctionLoss(const jsbind::String& url);
};

