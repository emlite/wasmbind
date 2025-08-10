#include "webbind/DirectFromSellerSignalsForSeller.hpp"

using emlite::Val;
namespace webbind {

DirectFromSellerSignalsForSeller::DirectFromSellerSignalsForSeller(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DirectFromSellerSignalsForSeller DirectFromSellerSignalsForSeller::take_ownership(Handle h) noexcept {
        return DirectFromSellerSignalsForSeller(h);
    }
DirectFromSellerSignalsForSeller::DirectFromSellerSignalsForSeller(const emlite::Val &val) noexcept: emlite::Val(val) {}
DirectFromSellerSignalsForSeller::DirectFromSellerSignalsForSeller() noexcept: emlite::Val(emlite::Val::object()) {}
DirectFromSellerSignalsForSeller DirectFromSellerSignalsForSeller::clone() const noexcept { return *this; }

jsbind::Any DirectFromSellerSignalsForSeller::auctionSignals() const {
    return emlite::Val::get("auctionSignals").as<jsbind::Any>();
}

void DirectFromSellerSignalsForSeller::auctionSignals(const jsbind::Any& value) {
    emlite::Val::set("auctionSignals", value);
}

jsbind::Any DirectFromSellerSignalsForSeller::sellerSignals() const {
    return emlite::Val::get("sellerSignals").as<jsbind::Any>();
}

void DirectFromSellerSignalsForSeller::sellerSignals(const jsbind::Any& value) {
    emlite::Val::set("sellerSignals", value);
}


} // namespace webbind