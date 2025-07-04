#include <webbind/DigitalGoodsService.hpp>


ItemDetails::ItemDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ItemDetails ItemDetails::take_ownership(Handle h) noexcept {
        return ItemDetails(h);
    }
ItemDetails::ItemDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
ItemDetails::ItemDetails() noexcept: emlite::Val(emlite::Val::object()) {}
ItemDetails ItemDetails::clone() const noexcept { return *this; }

jsbind::DOMString ItemDetails::itemId() const {
    return emlite::Val::get("itemId").as<jsbind::DOMString>();
}

void ItemDetails::itemId(const jsbind::DOMString& value) {
    emlite::Val::set("itemId", value);
}

jsbind::DOMString ItemDetails::title() const {
    return emlite::Val::get("title").as<jsbind::DOMString>();
}

void ItemDetails::title(const jsbind::DOMString& value) {
    emlite::Val::set("title", value);
}

jsbind::Any ItemDetails::price() const {
    return emlite::Val::get("price").as<jsbind::Any>();
}

void ItemDetails::price(const jsbind::Any& value) {
    emlite::Val::set("price", value);
}

ItemType ItemDetails::type() const {
    return emlite::Val::get("type").as<ItemType>();
}

void ItemDetails::type(const ItemType& value) {
    emlite::Val::set("type", value);
}

jsbind::DOMString ItemDetails::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
}

void ItemDetails::description(const jsbind::DOMString& value) {
    emlite::Val::set("description", value);
}

jsbind::Sequence<jsbind::DOMString> ItemDetails::iconURLs() const {
    return emlite::Val::get("iconURLs").as<jsbind::Sequence<jsbind::DOMString>>();
}

void ItemDetails::iconURLs(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("iconURLs", value);
}

jsbind::DOMString ItemDetails::subscriptionPeriod() const {
    return emlite::Val::get("subscriptionPeriod").as<jsbind::DOMString>();
}

void ItemDetails::subscriptionPeriod(const jsbind::DOMString& value) {
    emlite::Val::set("subscriptionPeriod", value);
}

jsbind::DOMString ItemDetails::freeTrialPeriod() const {
    return emlite::Val::get("freeTrialPeriod").as<jsbind::DOMString>();
}

void ItemDetails::freeTrialPeriod(const jsbind::DOMString& value) {
    emlite::Val::set("freeTrialPeriod", value);
}

jsbind::Any ItemDetails::introductoryPrice() const {
    return emlite::Val::get("introductoryPrice").as<jsbind::Any>();
}

void ItemDetails::introductoryPrice(const jsbind::Any& value) {
    emlite::Val::set("introductoryPrice", value);
}

jsbind::DOMString ItemDetails::introductoryPricePeriod() const {
    return emlite::Val::get("introductoryPricePeriod").as<jsbind::DOMString>();
}

void ItemDetails::introductoryPricePeriod(const jsbind::DOMString& value) {
    emlite::Val::set("introductoryPricePeriod", value);
}

long long ItemDetails::introductoryPriceCycles() const {
    return emlite::Val::get("introductoryPriceCycles").as<long long>();
}

void ItemDetails::introductoryPriceCycles(long long value) {
    emlite::Val::set("introductoryPriceCycles", value);
}

PurchaseDetails::PurchaseDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PurchaseDetails PurchaseDetails::take_ownership(Handle h) noexcept {
        return PurchaseDetails(h);
    }
PurchaseDetails::PurchaseDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
PurchaseDetails::PurchaseDetails() noexcept: emlite::Val(emlite::Val::object()) {}
PurchaseDetails PurchaseDetails::clone() const noexcept { return *this; }

jsbind::DOMString PurchaseDetails::itemId() const {
    return emlite::Val::get("itemId").as<jsbind::DOMString>();
}

void PurchaseDetails::itemId(const jsbind::DOMString& value) {
    emlite::Val::set("itemId", value);
}

jsbind::DOMString PurchaseDetails::purchaseToken() const {
    return emlite::Val::get("purchaseToken").as<jsbind::DOMString>();
}

void PurchaseDetails::purchaseToken(const jsbind::DOMString& value) {
    emlite::Val::set("purchaseToken", value);
}

DigitalGoodsService DigitalGoodsService::take_ownership(Handle h) noexcept {
        return DigitalGoodsService(h);
    }
DigitalGoodsService DigitalGoodsService::clone() const noexcept { return *this; }
DigitalGoodsService::DigitalGoodsService(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalGoodsService::DigitalGoodsService(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise DigitalGoodsService::getDetails(const jsbind::Sequence<jsbind::DOMString>& itemIds) {
    return emlite::Val::call("getDetails", itemIds).as<jsbind::Promise>();
}

jsbind::Promise DigitalGoodsService::listPurchases() {
    return emlite::Val::call("listPurchases").as<jsbind::Promise>();
}

jsbind::Promise DigitalGoodsService::listPurchaseHistory() {
    return emlite::Val::call("listPurchaseHistory").as<jsbind::Promise>();
}

jsbind::Promise DigitalGoodsService::consume(const jsbind::DOMString& purchaseToken) {
    return emlite::Val::call("consume", purchaseToken).as<jsbind::Promise>();
}

