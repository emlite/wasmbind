#include <webbind/AuctionAd.hpp>

namespace webbind {

AuctionAd::AuctionAd(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAd AuctionAd::take_ownership(Handle h) noexcept {
    return AuctionAd(h);
}

AuctionAd::AuctionAd(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuctionAd::AuctionAd() noexcept: emlite::Val(emlite::Val::object()) {}

AuctionAd AuctionAd::clone() const noexcept { return *this; }

jsbind::String AuctionAd::renderURL() const {
    return emlite::Val::get("renderURL").as<jsbind::String>();
}

void AuctionAd::renderURL(const jsbind::String& value) {
    emlite::Val::set("renderURL", value);
}

jsbind::String AuctionAd::sizeGroup() const {
    return emlite::Val::get("sizeGroup").as<jsbind::String>();
}

void AuctionAd::sizeGroup(const jsbind::String& value) {
    emlite::Val::set("sizeGroup", value);
}

jsbind::Any AuctionAd::metadata() const {
    return emlite::Val::get("metadata").as<jsbind::Any>();
}

void AuctionAd::metadata(const jsbind::Any& value) {
    emlite::Val::set("metadata", value);
}

jsbind::String AuctionAd::buyerReportingId() const {
    return emlite::Val::get("buyerReportingId").as<jsbind::String>();
}

void AuctionAd::buyerReportingId(const jsbind::String& value) {
    emlite::Val::set("buyerReportingId", value);
}

jsbind::String AuctionAd::buyerAndSellerReportingId() const {
    return emlite::Val::get("buyerAndSellerReportingId").as<jsbind::String>();
}

void AuctionAd::buyerAndSellerReportingId(const jsbind::String& value) {
    emlite::Val::set("buyerAndSellerReportingId", value);
}

jsbind::TypedArray<jsbind::String> AuctionAd::selectableBuyerAndSellerReportingIds() const {
    return emlite::Val::get("selectableBuyerAndSellerReportingIds").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAd::selectableBuyerAndSellerReportingIds(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("selectableBuyerAndSellerReportingIds", value);
}

jsbind::TypedArray<jsbind::String> AuctionAd::allowedReportingOrigins() const {
    return emlite::Val::get("allowedReportingOrigins").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAd::allowedReportingOrigins(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("allowedReportingOrigins", value);
}

jsbind::String AuctionAd::adRenderId() const {
    return emlite::Val::get("adRenderId").as<jsbind::String>();
}

void AuctionAd::adRenderId(const jsbind::String& value) {
    emlite::Val::set("adRenderId", value);
}

jsbind::String AuctionAd::creativeScanningMetadata() const {
    return emlite::Val::get("creativeScanningMetadata").as<jsbind::String>();
}

void AuctionAd::creativeScanningMetadata(const jsbind::String& value) {
    emlite::Val::set("creativeScanningMetadata", value);
}


} // namespace webbind