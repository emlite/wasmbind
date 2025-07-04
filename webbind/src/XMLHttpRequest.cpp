#include <webbind/XMLHttpRequest.hpp>
#include <webbind/XMLHttpRequestUpload.hpp>
#include <webbind/Document.hpp>


AttributionReportingRequestOptions::AttributionReportingRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionReportingRequestOptions AttributionReportingRequestOptions::take_ownership(Handle h) noexcept {
        return AttributionReportingRequestOptions(h);
    }
AttributionReportingRequestOptions::AttributionReportingRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionReportingRequestOptions::AttributionReportingRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionReportingRequestOptions AttributionReportingRequestOptions::clone() const noexcept { return *this; }

bool AttributionReportingRequestOptions::eventSourceEligible() const {
    return emlite::Val::get("eventSourceEligible").as<bool>();
}

void AttributionReportingRequestOptions::eventSourceEligible(bool value) {
    emlite::Val::set("eventSourceEligible", value);
}

bool AttributionReportingRequestOptions::triggerEligible() const {
    return emlite::Val::get("triggerEligible").as<bool>();
}

void AttributionReportingRequestOptions::triggerEligible(bool value) {
    emlite::Val::set("triggerEligible", value);
}

PrivateToken::PrivateToken(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PrivateToken PrivateToken::take_ownership(Handle h) noexcept {
        return PrivateToken(h);
    }
PrivateToken::PrivateToken(const emlite::Val &val) noexcept: emlite::Val(val) {}
PrivateToken::PrivateToken() noexcept: emlite::Val(emlite::Val::object()) {}
PrivateToken PrivateToken::clone() const noexcept { return *this; }

TokenVersion PrivateToken::version() const {
    return emlite::Val::get("version").as<TokenVersion>();
}

void PrivateToken::version(const TokenVersion& value) {
    emlite::Val::set("version", value);
}

OperationType PrivateToken::operation() const {
    return emlite::Val::get("operation").as<OperationType>();
}

void PrivateToken::operation(const OperationType& value) {
    emlite::Val::set("operation", value);
}

RefreshPolicy PrivateToken::refreshPolicy() const {
    return emlite::Val::get("refreshPolicy").as<RefreshPolicy>();
}

void PrivateToken::refreshPolicy(const RefreshPolicy& value) {
    emlite::Val::set("refreshPolicy", value);
}

jsbind::Sequence<jsbind::USVString> PrivateToken::issuers() const {
    return emlite::Val::get("issuers").as<jsbind::Sequence<jsbind::USVString>>();
}

void PrivateToken::issuers(const jsbind::Sequence<jsbind::USVString>& value) {
    emlite::Val::set("issuers", value);
}

XMLHttpRequest XMLHttpRequest::take_ownership(Handle h) noexcept {
        return XMLHttpRequest(h);
    }
XMLHttpRequest XMLHttpRequest::clone() const noexcept { return *this; }
XMLHttpRequest::XMLHttpRequest(Handle h) noexcept : XMLHttpRequestEventTarget(emlite::Val::take_ownership(h)) {}
XMLHttpRequest::XMLHttpRequest(const emlite::Val &val) noexcept: XMLHttpRequestEventTarget(val) {}


XMLHttpRequest::XMLHttpRequest(): XMLHttpRequestEventTarget(emlite::Val::global("XMLHttpRequest").new_()) {}

jsbind::Any XMLHttpRequest::onreadystatechange() const {
    return XMLHttpRequestEventTarget::get("onreadystatechange").as<jsbind::Any>();
}

void XMLHttpRequest::onreadystatechange(const jsbind::Any& value) {
    XMLHttpRequestEventTarget::set("onreadystatechange", value);
}

unsigned short XMLHttpRequest::readyState() const {
    return XMLHttpRequestEventTarget::get("readyState").as<unsigned short>();
}

jsbind::Undefined XMLHttpRequest::open(const jsbind::ByteString& method, const jsbind::USVString& url, bool async, const jsbind::USVString& username, const jsbind::USVString& password) {
    return XMLHttpRequestEventTarget::call("open", method, url, async, username, password).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::setRequestHeader(const jsbind::ByteString& name, const jsbind::ByteString& value) {
    return XMLHttpRequestEventTarget::call("setRequestHeader", name, value).as<jsbind::Undefined>();
}

unsigned long XMLHttpRequest::timeout() const {
    return XMLHttpRequestEventTarget::get("timeout").as<unsigned long>();
}

void XMLHttpRequest::timeout(unsigned long value) {
    XMLHttpRequestEventTarget::set("timeout", value);
}

bool XMLHttpRequest::withCredentials() const {
    return XMLHttpRequestEventTarget::get("withCredentials").as<bool>();
}

void XMLHttpRequest::withCredentials(bool value) {
    XMLHttpRequestEventTarget::set("withCredentials", value);
}

XMLHttpRequestUpload XMLHttpRequest::upload() const {
    return XMLHttpRequestEventTarget::get("upload").as<XMLHttpRequestUpload>();
}

jsbind::Undefined XMLHttpRequest::send(const jsbind::Any& body) {
    return XMLHttpRequestEventTarget::call("send", body).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::abort() {
    return XMLHttpRequestEventTarget::call("abort").as<jsbind::Undefined>();
}

jsbind::USVString XMLHttpRequest::responseURL() const {
    return XMLHttpRequestEventTarget::get("responseURL").as<jsbind::USVString>();
}

unsigned short XMLHttpRequest::status() const {
    return XMLHttpRequestEventTarget::get("status").as<unsigned short>();
}

jsbind::ByteString XMLHttpRequest::statusText() const {
    return XMLHttpRequestEventTarget::get("statusText").as<jsbind::ByteString>();
}

jsbind::ByteString XMLHttpRequest::getResponseHeader(const jsbind::ByteString& name) {
    return XMLHttpRequestEventTarget::call("getResponseHeader", name).as<jsbind::ByteString>();
}

jsbind::ByteString XMLHttpRequest::getAllResponseHeaders() {
    return XMLHttpRequestEventTarget::call("getAllResponseHeaders").as<jsbind::ByteString>();
}

jsbind::Undefined XMLHttpRequest::overrideMimeType(const jsbind::DOMString& mime) {
    return XMLHttpRequestEventTarget::call("overrideMimeType", mime).as<jsbind::Undefined>();
}

XMLHttpRequestResponseType XMLHttpRequest::responseType() const {
    return XMLHttpRequestEventTarget::get("responseType").as<XMLHttpRequestResponseType>();
}

void XMLHttpRequest::responseType(const XMLHttpRequestResponseType& value) {
    XMLHttpRequestEventTarget::set("responseType", value);
}

jsbind::Any XMLHttpRequest::response() const {
    return XMLHttpRequestEventTarget::get("response").as<jsbind::Any>();
}

jsbind::USVString XMLHttpRequest::responseText() const {
    return XMLHttpRequestEventTarget::get("responseText").as<jsbind::USVString>();
}

Document XMLHttpRequest::responseXML() const {
    return XMLHttpRequestEventTarget::get("responseXML").as<Document>();
}

jsbind::Undefined XMLHttpRequest::setAttributionReporting(const AttributionReportingRequestOptions& options) {
    return XMLHttpRequestEventTarget::call("setAttributionReporting", options).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::setPrivateToken(const PrivateToken& privateToken) {
    return XMLHttpRequestEventTarget::call("setPrivateToken", privateToken).as<jsbind::Undefined>();
}

