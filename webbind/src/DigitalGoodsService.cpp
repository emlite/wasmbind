#include <webbind/DigitalGoodsService.hpp>
#include <webbind/ItemDetails.hpp>
#include <webbind/PurchaseDetails.hpp>

namespace webbind {

DigitalGoodsService DigitalGoodsService::take_ownership(Handle h) noexcept {
        return DigitalGoodsService(h);
    }
DigitalGoodsService DigitalGoodsService::clone() const noexcept { return *this; }
emlite::Val DigitalGoodsService::instance() noexcept { return emlite::Val::global("DigitalGoodsService"); }
DigitalGoodsService::DigitalGoodsService(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalGoodsService::DigitalGoodsService(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::TypedArray<ItemDetails>> DigitalGoodsService::getDetails(const jsbind::TypedArray<jsbind::String>& itemIds) {
    return emlite::Val::call("getDetails", itemIds).as<jsbind::Promise<jsbind::TypedArray<ItemDetails>>>();
}

jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> DigitalGoodsService::listPurchases() {
    return emlite::Val::call("listPurchases").as<jsbind::Promise<jsbind::TypedArray<PurchaseDetails>>>();
}

jsbind::Promise<jsbind::TypedArray<PurchaseDetails>> DigitalGoodsService::listPurchaseHistory() {
    return emlite::Val::call("listPurchaseHistory").as<jsbind::Promise<jsbind::TypedArray<PurchaseDetails>>>();
}

jsbind::Promise<jsbind::Undefined> DigitalGoodsService::consume(const jsbind::String& purchaseToken) {
    return emlite::Val::call("consume", purchaseToken).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind