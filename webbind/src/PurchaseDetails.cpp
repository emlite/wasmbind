#include "webbind/PurchaseDetails.hpp"

using emlite::Val;
namespace webbind {

PurchaseDetails::PurchaseDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PurchaseDetails PurchaseDetails::take_ownership(Handle h) noexcept {
        return PurchaseDetails(h);
    }
PurchaseDetails::PurchaseDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
PurchaseDetails::PurchaseDetails() noexcept: emlite::Val(emlite::Val::object()) {}
PurchaseDetails PurchaseDetails::clone() const noexcept { return *this; }

jsbind::String PurchaseDetails::itemId() const {
    return emlite::Val::get("itemId").as<jsbind::String>();
}

void PurchaseDetails::itemId(const jsbind::String& value) {
    emlite::Val::set("itemId", value);
}

jsbind::String PurchaseDetails::purchaseToken() const {
    return emlite::Val::get("purchaseToken").as<jsbind::String>();
}

void PurchaseDetails::purchaseToken(const jsbind::String& value) {
    emlite::Val::set("purchaseToken", value);
}


} // namespace webbind