#include <webbind/PaymentRequestEvent.hpp>
#include <webbind/WindowClient.hpp>


PaymentMethodData::PaymentMethodData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentMethodData PaymentMethodData::take_ownership(Handle h) noexcept {
        return PaymentMethodData(h);
    }
PaymentMethodData::PaymentMethodData(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentMethodData::PaymentMethodData() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentMethodData PaymentMethodData::clone() const noexcept { return *this; }

jsbind::String PaymentMethodData::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::String>();
}

void PaymentMethodData::supportedMethods(const jsbind::String& value) {
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

jsbind::String PaymentDetailsModifier::supportedMethods() const {
    return emlite::Val::get("supportedMethods").as<jsbind::String>();
}

void PaymentDetailsModifier::supportedMethods(const jsbind::String& value) {
    emlite::Val::set("supportedMethods", value);
}

jsbind::Any PaymentDetailsModifier::total() const {
    return emlite::Val::get("total").as<jsbind::Any>();
}

void PaymentDetailsModifier::total(const jsbind::Any& value) {
    emlite::Val::set("total", value);
}

jsbind::TypedArray<jsbind::Any> PaymentDetailsModifier::additionalDisplayItems() const {
    return emlite::Val::get("additionalDisplayItems").as<jsbind::TypedArray<jsbind::Any>>();
}

void PaymentDetailsModifier::additionalDisplayItems(const jsbind::TypedArray<jsbind::Any>& value) {
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

jsbind::String PaymentShippingOption::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void PaymentShippingOption::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String PaymentShippingOption::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void PaymentShippingOption::label(const jsbind::String& value) {
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

jsbind::String PaymentRequestDetailsUpdate::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void PaymentRequestDetailsUpdate::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}

jsbind::Any PaymentRequestDetailsUpdate::total() const {
    return emlite::Val::get("total").as<jsbind::Any>();
}

void PaymentRequestDetailsUpdate::total(const jsbind::Any& value) {
    emlite::Val::set("total", value);
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentRequestDetailsUpdate::modifiers() const {
    return emlite::Val::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

void PaymentRequestDetailsUpdate::modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value) {
    emlite::Val::set("modifiers", value);
}

jsbind::TypedArray<PaymentShippingOption> PaymentRequestDetailsUpdate::shippingOptions() const {
    return emlite::Val::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

void PaymentRequestDetailsUpdate::shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value) {
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

jsbind::String AddressInit::country() const {
    return emlite::Val::get("country").as<jsbind::String>();
}

void AddressInit::country(const jsbind::String& value) {
    emlite::Val::set("country", value);
}

jsbind::TypedArray<jsbind::String> AddressInit::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::TypedArray<jsbind::String>>();
}

void AddressInit::addressLine(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("addressLine", value);
}

jsbind::String AddressInit::region() const {
    return emlite::Val::get("region").as<jsbind::String>();
}

void AddressInit::region(const jsbind::String& value) {
    emlite::Val::set("region", value);
}

jsbind::String AddressInit::city() const {
    return emlite::Val::get("city").as<jsbind::String>();
}

void AddressInit::city(const jsbind::String& value) {
    emlite::Val::set("city", value);
}

jsbind::String AddressInit::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::String>();
}

void AddressInit::dependentLocality(const jsbind::String& value) {
    emlite::Val::set("dependentLocality", value);
}

jsbind::String AddressInit::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::String>();
}

void AddressInit::postalCode(const jsbind::String& value) {
    emlite::Val::set("postalCode", value);
}

jsbind::String AddressInit::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::String>();
}

void AddressInit::sortingCode(const jsbind::String& value) {
    emlite::Val::set("sortingCode", value);
}

jsbind::String AddressInit::organization() const {
    return emlite::Val::get("organization").as<jsbind::String>();
}

void AddressInit::organization(const jsbind::String& value) {
    emlite::Val::set("organization", value);
}

jsbind::String AddressInit::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::String>();
}

void AddressInit::recipient(const jsbind::String& value) {
    emlite::Val::set("recipient", value);
}

jsbind::String AddressInit::phone() const {
    return emlite::Val::get("phone").as<jsbind::String>();
}

void AddressInit::phone(const jsbind::String& value) {
    emlite::Val::set("phone", value);
}

PaymentHandlerResponse::PaymentHandlerResponse(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentHandlerResponse PaymentHandlerResponse::take_ownership(Handle h) noexcept {
        return PaymentHandlerResponse(h);
    }
PaymentHandlerResponse::PaymentHandlerResponse(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentHandlerResponse::PaymentHandlerResponse() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentHandlerResponse PaymentHandlerResponse::clone() const noexcept { return *this; }

jsbind::String PaymentHandlerResponse::methodName() const {
    return emlite::Val::get("methodName").as<jsbind::String>();
}

void PaymentHandlerResponse::methodName(const jsbind::String& value) {
    emlite::Val::set("methodName", value);
}

jsbind::Object PaymentHandlerResponse::details() const {
    return emlite::Val::get("details").as<jsbind::Object>();
}

void PaymentHandlerResponse::details(const jsbind::Object& value) {
    emlite::Val::set("details", value);
}

jsbind::String PaymentHandlerResponse::payerName() const {
    return emlite::Val::get("payerName").as<jsbind::String>();
}

void PaymentHandlerResponse::payerName(const jsbind::String& value) {
    emlite::Val::set("payerName", value);
}

jsbind::String PaymentHandlerResponse::payerEmail() const {
    return emlite::Val::get("payerEmail").as<jsbind::String>();
}

void PaymentHandlerResponse::payerEmail(const jsbind::String& value) {
    emlite::Val::set("payerEmail", value);
}

jsbind::String PaymentHandlerResponse::payerPhone() const {
    return emlite::Val::get("payerPhone").as<jsbind::String>();
}

void PaymentHandlerResponse::payerPhone(const jsbind::String& value) {
    emlite::Val::set("payerPhone", value);
}

AddressInit PaymentHandlerResponse::shippingAddress() const {
    return emlite::Val::get("shippingAddress").as<AddressInit>();
}

void PaymentHandlerResponse::shippingAddress(const AddressInit& value) {
    emlite::Val::set("shippingAddress", value);
}

jsbind::String PaymentHandlerResponse::shippingOption() const {
    return emlite::Val::get("shippingOption").as<jsbind::String>();
}

void PaymentHandlerResponse::shippingOption(const jsbind::String& value) {
    emlite::Val::set("shippingOption", value);
}

PaymentRequestEvent PaymentRequestEvent::take_ownership(Handle h) noexcept {
        return PaymentRequestEvent(h);
    }
PaymentRequestEvent PaymentRequestEvent::clone() const noexcept { return *this; }
PaymentRequestEvent::PaymentRequestEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PaymentRequestEvent::PaymentRequestEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


PaymentRequestEvent::PaymentRequestEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("PaymentRequestEvent").new_(type)) {}

PaymentRequestEvent::PaymentRequestEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("PaymentRequestEvent").new_(type, eventInitDict)) {}

jsbind::String PaymentRequestEvent::topOrigin() const {
    return ExtendableEvent::get("topOrigin").as<jsbind::String>();
}

jsbind::String PaymentRequestEvent::paymentRequestOrigin() const {
    return ExtendableEvent::get("paymentRequestOrigin").as<jsbind::String>();
}

jsbind::String PaymentRequestEvent::paymentRequestId() const {
    return ExtendableEvent::get("paymentRequestId").as<jsbind::String>();
}

jsbind::TypedArray<PaymentMethodData> PaymentRequestEvent::methodData() const {
    return ExtendableEvent::get("methodData").as<jsbind::TypedArray<PaymentMethodData>>();
}

jsbind::Object PaymentRequestEvent::total() const {
    return ExtendableEvent::get("total").as<jsbind::Object>();
}

jsbind::TypedArray<PaymentDetailsModifier> PaymentRequestEvent::modifiers() const {
    return ExtendableEvent::get("modifiers").as<jsbind::TypedArray<PaymentDetailsModifier>>();
}

jsbind::Object PaymentRequestEvent::paymentOptions() const {
    return ExtendableEvent::get("paymentOptions").as<jsbind::Object>();
}

jsbind::TypedArray<PaymentShippingOption> PaymentRequestEvent::shippingOptions() const {
    return ExtendableEvent::get("shippingOptions").as<jsbind::TypedArray<PaymentShippingOption>>();
}

jsbind::Promise<WindowClient> PaymentRequestEvent::openWindow(const jsbind::String& url) {
    return ExtendableEvent::call("openWindow", url).as<jsbind::Promise<WindowClient>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changePaymentMethod(const jsbind::String& methodName) {
    return ExtendableEvent::call("changePaymentMethod", methodName).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changePaymentMethod(const jsbind::String& methodName, const jsbind::Object& methodDetails) {
    return ExtendableEvent::call("changePaymentMethod", methodName, methodDetails).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingAddress() {
    return ExtendableEvent::call("changeShippingAddress").as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingAddress(const AddressInit& shippingAddress) {
    return ExtendableEvent::call("changeShippingAddress", shippingAddress).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Promise<PaymentRequestDetailsUpdate> PaymentRequestEvent::changeShippingOption(const jsbind::String& shippingOption) {
    return ExtendableEvent::call("changeShippingOption", shippingOption).as<jsbind::Promise<PaymentRequestDetailsUpdate>>();
}

jsbind::Undefined PaymentRequestEvent::respondWith(const jsbind::Promise<PaymentHandlerResponse>& handlerResponsePromise) {
    return ExtendableEvent::call("respondWith", handlerResponsePromise).as<jsbind::Undefined>();
}

