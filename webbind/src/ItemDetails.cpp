#include "webbind/ItemDetails.hpp"
#include "webbind/PaymentCurrencyAmount.hpp"

using emlite::Val;
namespace webbind {

ItemDetails::ItemDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ItemDetails ItemDetails::take_ownership(Handle h) noexcept {
        return ItemDetails(h);
    }
ItemDetails::ItemDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
ItemDetails::ItemDetails() noexcept: emlite::Val(emlite::Val::object()) {}
ItemDetails ItemDetails::clone() const noexcept { return *this; }

jsbind::String ItemDetails::itemId() const {
    return emlite::Val::get("itemId").as<jsbind::String>();
}

void ItemDetails::itemId(const jsbind::String& value) {
    emlite::Val::set("itemId", value);
}

jsbind::String ItemDetails::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void ItemDetails::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

PaymentCurrencyAmount ItemDetails::price() const {
    return emlite::Val::get("price").as<PaymentCurrencyAmount>();
}

void ItemDetails::price(const PaymentCurrencyAmount& value) {
    emlite::Val::set("price", value);
}

ItemType ItemDetails::type() const {
    return emlite::Val::get("type").as<ItemType>();
}

void ItemDetails::type(const ItemType& value) {
    emlite::Val::set("type", value);
}

jsbind::String ItemDetails::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

void ItemDetails::description(const jsbind::String& value) {
    emlite::Val::set("description", value);
}

jsbind::TypedArray<jsbind::String> ItemDetails::iconURLs() const {
    return emlite::Val::get("iconURLs").as<jsbind::TypedArray<jsbind::String>>();
}

void ItemDetails::iconURLs(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("iconURLs", value);
}

jsbind::String ItemDetails::subscriptionPeriod() const {
    return emlite::Val::get("subscriptionPeriod").as<jsbind::String>();
}

void ItemDetails::subscriptionPeriod(const jsbind::String& value) {
    emlite::Val::set("subscriptionPeriod", value);
}

jsbind::String ItemDetails::freeTrialPeriod() const {
    return emlite::Val::get("freeTrialPeriod").as<jsbind::String>();
}

void ItemDetails::freeTrialPeriod(const jsbind::String& value) {
    emlite::Val::set("freeTrialPeriod", value);
}

PaymentCurrencyAmount ItemDetails::introductoryPrice() const {
    return emlite::Val::get("introductoryPrice").as<PaymentCurrencyAmount>();
}

void ItemDetails::introductoryPrice(const PaymentCurrencyAmount& value) {
    emlite::Val::set("introductoryPrice", value);
}

jsbind::String ItemDetails::introductoryPricePeriod() const {
    return emlite::Val::get("introductoryPricePeriod").as<jsbind::String>();
}

void ItemDetails::introductoryPricePeriod(const jsbind::String& value) {
    emlite::Val::set("introductoryPricePeriod", value);
}

long long ItemDetails::introductoryPriceCycles() const {
    return emlite::Val::get("introductoryPriceCycles").as<long long>();
}

void ItemDetails::introductoryPriceCycles(long long value) {
    emlite::Val::set("introductoryPriceCycles", value);
}


} // namespace webbind