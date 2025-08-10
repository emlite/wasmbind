#include "webbind/AdAuctionData.hpp"
#include "webbind/AdAuctionPerSellerData.hpp"

using emlite::Val;
namespace webbind {

AdAuctionData::AdAuctionData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionData AdAuctionData::take_ownership(Handle h) noexcept {
        return AdAuctionData(h);
    }
AdAuctionData::AdAuctionData(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionData::AdAuctionData() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionData AdAuctionData::clone() const noexcept { return *this; }

jsbind::String AdAuctionData::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::String>();
}

void AdAuctionData::requestId(const jsbind::String& value) {
    emlite::Val::set("requestId", value);
}

jsbind::Uint8Array AdAuctionData::request() const {
    return emlite::Val::get("request").as<jsbind::Uint8Array>();
}

void AdAuctionData::request(const jsbind::Uint8Array& value) {
    emlite::Val::set("request", value);
}

jsbind::TypedArray<AdAuctionPerSellerData> AdAuctionData::requests() const {
    return emlite::Val::get("requests").as<jsbind::TypedArray<AdAuctionPerSellerData>>();
}

void AdAuctionData::requests(const jsbind::TypedArray<AdAuctionPerSellerData>& value) {
    emlite::Val::set("requests", value);
}


} // namespace webbind