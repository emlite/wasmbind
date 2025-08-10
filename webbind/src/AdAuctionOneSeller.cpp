#include "webbind/AdAuctionOneSeller.hpp"

using emlite::Val;
namespace webbind {

AdAuctionOneSeller::AdAuctionOneSeller(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionOneSeller AdAuctionOneSeller::take_ownership(Handle h) noexcept {
        return AdAuctionOneSeller(h);
    }
AdAuctionOneSeller::AdAuctionOneSeller(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionOneSeller::AdAuctionOneSeller() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionOneSeller AdAuctionOneSeller::clone() const noexcept { return *this; }

jsbind::String AdAuctionOneSeller::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AdAuctionOneSeller::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::String AdAuctionOneSeller::coordinatorOrigin() const {
    return emlite::Val::get("coordinatorOrigin").as<jsbind::String>();
}

void AdAuctionOneSeller::coordinatorOrigin(const jsbind::String& value) {
    emlite::Val::set("coordinatorOrigin", value);
}


} // namespace webbind