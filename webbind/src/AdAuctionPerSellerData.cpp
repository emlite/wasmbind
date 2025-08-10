#include <webbind/AdAuctionPerSellerData.hpp>

namespace webbind {

AdAuctionPerSellerData::AdAuctionPerSellerData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionPerSellerData AdAuctionPerSellerData::take_ownership(Handle h) noexcept {
    return AdAuctionPerSellerData(h);
}

AdAuctionPerSellerData::AdAuctionPerSellerData(const emlite::Val &val) noexcept: emlite::Val(val) {}

AdAuctionPerSellerData::AdAuctionPerSellerData() noexcept: emlite::Val(emlite::Val::object()) {}

AdAuctionPerSellerData AdAuctionPerSellerData::clone() const noexcept { return *this; }

jsbind::String AdAuctionPerSellerData::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AdAuctionPerSellerData::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::Uint8Array AdAuctionPerSellerData::request() const {
    return emlite::Val::get("request").as<jsbind::Uint8Array>();
}

void AdAuctionPerSellerData::request(const jsbind::Uint8Array& value) {
    emlite::Val::set("request", value);
}

jsbind::String AdAuctionPerSellerData::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void AdAuctionPerSellerData::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind