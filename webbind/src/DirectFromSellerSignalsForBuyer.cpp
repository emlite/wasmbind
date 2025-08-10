#include "webbind/DirectFromSellerSignalsForBuyer.hpp"

using emlite::Val;
namespace webbind {

DirectFromSellerSignalsForBuyer::DirectFromSellerSignalsForBuyer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DirectFromSellerSignalsForBuyer DirectFromSellerSignalsForBuyer::take_ownership(Handle h) noexcept {
        return DirectFromSellerSignalsForBuyer(h);
    }
DirectFromSellerSignalsForBuyer::DirectFromSellerSignalsForBuyer(const emlite::Val &val) noexcept: emlite::Val(val) {}
DirectFromSellerSignalsForBuyer::DirectFromSellerSignalsForBuyer() noexcept: emlite::Val(emlite::Val::object()) {}
DirectFromSellerSignalsForBuyer DirectFromSellerSignalsForBuyer::clone() const noexcept { return *this; }

jsbind::Any DirectFromSellerSignalsForBuyer::auctionSignals() const {
    return emlite::Val::get("auctionSignals").as<jsbind::Any>();
}

void DirectFromSellerSignalsForBuyer::auctionSignals(const jsbind::Any& value) {
    emlite::Val::set("auctionSignals", value);
}

jsbind::Any DirectFromSellerSignalsForBuyer::perBuyerSignals() const {
    return emlite::Val::get("perBuyerSignals").as<jsbind::Any>();
}

void DirectFromSellerSignalsForBuyer::perBuyerSignals(const jsbind::Any& value) {
    emlite::Val::set("perBuyerSignals", value);
}


} // namespace webbind