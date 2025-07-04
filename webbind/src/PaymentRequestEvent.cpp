#include <webbind/PaymentRequestEvent.hpp>
#include <webbind/WindowClient.hpp>


PaymentMethodData::PaymentMethodData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentMethodData PaymentMethodData::take_ownership(Handle h) noexcept {
        return PaymentMethodData(h);
    }
PaymentMethodData::PaymentMethodData(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentMethodData::PaymentMethodData() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentMethodData PaymentMethodData::clone() const noexcept { return *this; }

jsbind::DOMString PaymentMethodData::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::DOMString>();
}

void PaymentMethodData::supportedMethods(const jsbind::DOMString& value) {
    emlite::Val::set("supportedMethods", value);
}

jsbind::Object PaymentMethodData::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentMethodData::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}

PaymentDetailsModifier::PaymentDetailsModifier(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentDetailsModifier PaymentDetailsModifier::take_ownership(Handle h) noexcept {
        return PaymentDetailsModifier(h);
    }
PaymentDetailsModifier::PaymentDetailsModifier(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentDetailsModifier::PaymentDetailsModifier() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentDetailsModifier PaymentDetailsModifier::clone() const noexcept { return *this; }

jsbind::DOMString PaymentDetailsModifier::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::DOMString>();
}

void PaymentDetailsModifier::supportedMethods(const jsbind::DOMString& value) {
    emlite::Val::set("supportedMethods", value);
}

jsbind::Any PaymentDetailsModifier::total() const {
    return emlite::Val::get("total").as<jsbind::Any>();
}

void PaymentDetailsModifier::total(const jsbind::Any& value) {
    emlite::Val::set("total", value);
}

jsbind::Sequence<jsbind::Any> PaymentDetailsModifier::additionalDisplayItems() const {
    return emlite::Val::get("additionalDisplayItems").as<jsbind::Sequence<jsbind::Any>>();
}

void PaymentDetailsModifier::additionalDisplayItems(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("additionalDisplayItems", value);
}

jsbind::Object PaymentDetailsModifier::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentDetailsModifier::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}

PaymentShippingOption::PaymentShippingOption(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentShippingOption PaymentShippingOption::take_ownership(Handle h) noexcept {
        return PaymentShippingOption(h);
    }
PaymentShippingOption::PaymentShippingOption(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentShippingOption::PaymentShippingOption() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentShippingOption PaymentShippingOption::clone() const noexcept { return *this; }

jsbind::DOMString PaymentShippingOption::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

void PaymentShippingOption::id(const jsbind::DOMString& value) {
    emlite::Val::set("id", value);
}

jsbind::DOMString PaymentShippingOption::label() const {
    return emlite::Val::get("label").as<jsbind::DOMString>();
}

void PaymentShippingOption::label(const jsbind::DOMString& value) {
    emlite::Val::set("label", value);
}

jsbind::Any PaymentShippingOption::amount() const {
    return emlite::Val::get("amount").as<jsbind::Any>();
}

void PaymentShippingOption::amount(const jsbind::Any& value) {
    emlite::Val::set("amount", value);
}

bool PaymentShippingOption::selected() const {
    return emlite::Val::get("selected").as<bool>();
}

void PaymentShippingOption::selected(bool value) {
    emlite::Val::set("selected", value);
}

PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate::take_ownership(Handle h) noexcept {
        return PaymentRequestDetailsUpdate(h);
    }
PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentRequestDetailsUpdate::PaymentRequestDetailsUpdate() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate::clone() const noexcept { return *this; }

jsbind::DOMString PaymentRequestDetailsUpdate::error() const {
    return emlite::Val::get("error").as<jsbind::DOMString>();
}

void PaymentRequestDetailsUpdate::error(const jsbind::DOMString& value) {
    emlite::Val::set("error", value);
}

jsbind::Any PaymentRequestDetailsUpdate::total() const {
    return emlite::Val::get("total").as<jsbind::Any>();
}

void PaymentRequestDetailsUpdate::total(const jsbind::Any& value) {
    emlite::Val::set("total", value);
}

jsbind::Sequence<PaymentDetailsModifier> PaymentRequestDetailsUpdate::modifiers() const {
    return emlite::Val::get("modifiers").as<jsbind::Sequence<PaymentDetailsModifier>>();
}

void PaymentRequestDetailsUpdate::modifiers(const jsbind::Sequence<PaymentDetailsModifier>& value) {
    emlite::Val::set("modifiers", value);
}

jsbind::Sequence<PaymentShippingOption> PaymentRequestDetailsUpdate::shippingOptions() const {
    return emlite::Val::get("shippingOptions").as<jsbind::Sequence<PaymentShippingOption>>();
}

void PaymentRequestDetailsUpdate::shippingOptions(const jsbind::Sequence<PaymentShippingOption>& value) {
    emlite::Val::set("shippingOptions", value);
}

jsbind::Object PaymentRequestDetailsUpdate::paymentMethodErrors() const {
    return emlite::Val::get("paymentMethodErrors").as<jsbind::Object>();
}

void PaymentRequestDetailsUpdate::paymentMethodErrors(const jsbind::Object& value) {
    emlite::Val::set("paymentMethodErrors", value);
}

jsbind::Any PaymentRequestDetailsUpdate::shippingAddressErrors() const {
    return emlite::Val::get("shippingAddressErrors").as<jsbind::Any>();
}

void PaymentRequestDetailsUpdate::shippingAddressErrors(const jsbind::Any& value) {
    emlite::Val::set("shippingAddressErrors", value);
}

AddressInit::AddressInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AddressInit AddressInit::take_ownership(Handle h) noexcept {
        return AddressInit(h);
    }
AddressInit::AddressInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
AddressInit::AddressInit() noexcept: emlite::Val(emlite::Val::object()) {}
AddressInit AddressInit::clone() const noexcept { return *this; }

jsbind::DOMString AddressInit::country() const {
    return emlite::Val::get("country").as<jsbind::DOMString>();
}

void AddressInit::country(const jsbind::DOMString& value) {
    emlite::Val::set("country", value);
}

jsbind::Sequence<jsbind::DOMString> AddressInit::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::Sequence<jsbind::DOMString>>();
}

void AddressInit::addressLine(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("addressLine", value);
}

jsbind::DOMString AddressInit::region() const {
    return emlite::Val::get("region").as<jsbind::DOMString>();
}

void AddressInit::region(const jsbind::DOMString& value) {
    emlite::Val::set("region", value);
}

jsbind::DOMString AddressInit::city() const {
    return emlite::Val::get("city").as<jsbind::DOMString>();
}

void AddressInit::city(const jsbind::DOMString& value) {
    emlite::Val::set("city", value);
}

jsbind::DOMString AddressInit::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::DOMString>();
}

void AddressInit::dependentLocality(const jsbind::DOMString& value) {
    emlite::Val::set("dependentLocality", value);
}

jsbind::DOMString AddressInit::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::DOMString>();
}

void AddressInit::postalCode(const jsbind::DOMString& value) {
    emlite::Val::set("postalCode", value);
}

jsbind::DOMString AddressInit::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::DOMString>();
}

void AddressInit::sortingCode(const jsbind::DOMString& value) {
    emlite::Val::set("sortingCode", value);
}

jsbind::DOMString AddressInit::organization() const {
    return emlite::Val::get("organization").as<jsbind::DOMString>();
}

void AddressInit::organization(const jsbind::DOMString& value) {
    emlite::Val::set("organization", value);
}

jsbind::DOMString AddressInit::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::DOMString>();
}

void AddressInit::recipient(const jsbind::DOMString& value) {
    emlite::Val::set("recipient", value);
}

jsbind::DOMString AddressInit::phone() const {
    return emlite::Val::get("phone").as<jsbind::DOMString>();
}

void AddressInit::phone(const jsbind::DOMString& value) {
    emlite::Val::set("phone", value);
}

PaymentHandlerResponse::PaymentHandlerResponse(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentHandlerResponse PaymentHandlerResponse::take_ownership(Handle h) noexcept {
        return PaymentHandlerResponse(h);
    }
PaymentHandlerResponse::PaymentHandlerResponse(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentHandlerResponse::PaymentHandlerResponse() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentHandlerResponse PaymentHandlerResponse::clone() const noexcept { return *this; }

jsbind::DOMString PaymentHandlerResponse::methodName() const {
    return emlite::Val::get("methodName").as<jsbind::DOMString>();
}

void PaymentHandlerResponse::methodName(const jsbind::DOMString& value) {
    emlite::Val::set("methodName", value);
}

jsbind::Object PaymentHandlerResponse::details() const {
    return emlite::Val::get("details").as<jsbind::Object>();
}

void PaymentHandlerResponse::details(const jsbind::Object& value) {
    emlite::Val::set("details", value);
}

jsbind::DOMString PaymentHandlerResponse::payerName() const {
    return emlite::Val::get("payerName").as<jsbind::DOMString>();
}

void PaymentHandlerResponse::payerName(const jsbind::DOMString& value) {
    emlite::Val::set("payerName", value);
}

jsbind::DOMString PaymentHandlerResponse::payerEmail() const {
    return emlite::Val::get("payerEmail").as<jsbind::DOMString>();
}

void PaymentHandlerResponse::payerEmail(const jsbind::DOMString& value) {
    emlite::Val::set("payerEmail", value);
}

jsbind::DOMString PaymentHandlerResponse::payerPhone() const {
    return emlite::Val::get("payerPhone").as<jsbind::DOMString>();
}

void PaymentHandlerResponse::payerPhone(const jsbind::DOMString& value) {
    emlite::Val::set("payerPhone", value);
}

AddressInit PaymentHandlerResponse::shippingAddress() const {
    return emlite::Val::get("shippingAddress").as<AddressInit>();
}

void PaymentHandlerResponse::shippingAddress(const AddressInit& value) {
    emlite::Val::set("shippingAddress", value);
}

jsbind::DOMString PaymentHandlerResponse::shippingOption() const {
    return emlite::Val::get("shippingOption").as<jsbind::DOMString>();
}

void PaymentHandlerResponse::shippingOption(const jsbind::DOMString& value) {
    emlite::Val::set("shippingOption", value);
}

PaymentRequestEvent PaymentRequestEvent::take_ownership(Handle h) noexcept {
        return PaymentRequestEvent(h);
    }
PaymentRequestEvent PaymentRequestEvent::clone() const noexcept { return *this; }
PaymentRequestEvent::PaymentRequestEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PaymentRequestEvent::PaymentRequestEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


PaymentRequestEvent::PaymentRequestEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): ExtendableEvent(emlite::Val::global("PaymentRequestEvent").new_(type, eventInitDict)) {}

jsbind::USVString PaymentRequestEvent::topOrigin() const {
    return ExtendableEvent::get("topOrigin").as<jsbind::USVString>();
}

jsbind::USVString PaymentRequestEvent::paymentRequestOrigin() const {
    return ExtendableEvent::get("paymentRequestOrigin").as<jsbind::USVString>();
}

jsbind::DOMString PaymentRequestEvent::paymentRequestId() const {
    return ExtendableEvent::get("paymentRequestId").as<jsbind::DOMString>();
}

jsbind::FrozenArray<PaymentMethodData> PaymentRequestEvent::methodData() const {
    return ExtendableEvent::get("methodData").as<jsbind::FrozenArray<PaymentMethodData>>();
}

jsbind::Object PaymentRequestEvent::total() const {
    return ExtendableEvent::get("total").as<jsbind::Object>();
}

jsbind::FrozenArray<PaymentDetailsModifier> PaymentRequestEvent::modifiers() const {
    return ExtendableEvent::get("modifiers").as<jsbind::FrozenArray<PaymentDetailsModifier>>();
}

jsbind::Object PaymentRequestEvent::paymentOptions() const {
    return ExtendableEvent::get("paymentOptions").as<jsbind::Object>();
}

jsbind::FrozenArray<PaymentShippingOption> PaymentRequestEvent::shippingOptions() const {
    return ExtendableEvent::get("shippingOptions").as<jsbind::FrozenArray<PaymentShippingOption>>();
}

jsbind::Promise PaymentRequestEvent::openWindow(const jsbind::USVString& url) {
    return ExtendableEvent::call("openWindow", url).as<jsbind::Promise>();
}

jsbind::Promise PaymentRequestEvent::changePaymentMethod(const jsbind::DOMString& methodName, const jsbind::Object& methodDetails) {
    return ExtendableEvent::call("changePaymentMethod", methodName, methodDetails).as<jsbind::Promise>();
}

jsbind::Promise PaymentRequestEvent::changeShippingAddress(const AddressInit& shippingAddress) {
    return ExtendableEvent::call("changeShippingAddress", shippingAddress).as<jsbind::Promise>();
}

jsbind::Promise PaymentRequestEvent::changeShippingOption(const jsbind::DOMString& shippingOption) {
    return ExtendableEvent::call("changeShippingOption", shippingOption).as<jsbind::Promise>();
}

jsbind::Undefined PaymentRequestEvent::respondWith(const jsbind::Promise& handlerResponsePromise) {
    return ExtendableEvent::call("respondWith", handlerResponsePromise).as<jsbind::Undefined>();
}

