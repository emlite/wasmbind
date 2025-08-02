#include <webbind/ForDebuggingOnly.hpp>


ForDebuggingOnly ForDebuggingOnly::take_ownership(Handle h) noexcept {
        return ForDebuggingOnly(h);
    }
ForDebuggingOnly ForDebuggingOnly::clone() const noexcept { return *this; }
emlite::Val ForDebuggingOnly::instance() noexcept { return emlite::Val::global("ForDebuggingOnly"); }
ForDebuggingOnly::ForDebuggingOnly(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ForDebuggingOnly::ForDebuggingOnly(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined ForDebuggingOnly::reportAdAuctionWin(const jsbind::String& url) {
    return emlite::Val::call("reportAdAuctionWin", url).as<jsbind::Undefined>();
}

jsbind::Undefined ForDebuggingOnly::reportAdAuctionLoss(const jsbind::String& url) {
    return emlite::Val::call("reportAdAuctionLoss", url).as<jsbind::Undefined>();
}

