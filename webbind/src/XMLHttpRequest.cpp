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

jsbind::TypedArray<jsbind::String> PrivateToken::issuers() const {
    return emlite::Val::get("issuers").as<jsbind::TypedArray<jsbind::String>>();
}

void PrivateToken::issuers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("issuers", value);
}

XMLHttpRequest XMLHttpRequest::take_ownership(Handle h) noexcept {
        return XMLHttpRequest(h);
    }
XMLHttpRequest XMLHttpRequest::clone() const noexcept { return *this; }
XMLHttpRequest::XMLHttpRequest(Handle h) noexcept : XMLHttpRequestEventTarget(emlite::Val::take_ownership(h)) {}
XMLHttpRequest::XMLHttpRequest(const emlite::Val &val) noexcept: XMLHttpRequestEventTarget(val) {}


XMLHttpRequest::XMLHttpRequest() : XMLHttpRequestEventTarget(emlite::Val::global("XMLHttpRequest").new_()) {}

jsbind::Any XMLHttpRequest::onreadystatechange() const {
    return XMLHttpRequestEventTarget::get("onreadystatechange").as<jsbind::Any>();
}

void XMLHttpRequest::onreadystatechange(const jsbind::Any& value) {
    XMLHttpRequestEventTarget::set("onreadystatechange", value);
}

unsigned short XMLHttpRequest::readyState() const {
    return XMLHttpRequestEventTarget::get("readyState").as<unsigned short>();
}

jsbind::Undefined XMLHttpRequest::open(const jsbind::String& method, const jsbind::String& url, bool async) {
    return XMLHttpRequestEventTarget::call("open", method, url, async).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::open(const jsbind::String& method, const jsbind::String& url, bool async, const jsbind::String& username) {
    return XMLHttpRequestEventTarget::call("open", method, url, async, username).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::open(const jsbind::String& method, const jsbind::String& url, bool async, const jsbind::String& username, const jsbind::String& password) {
    return XMLHttpRequestEventTarget::call("open", method, url, async, username, password).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::setRequestHeader(const jsbind::String& name, const jsbind::String& value) {
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

jsbind::Undefined XMLHttpRequest::send() {
    return XMLHttpRequestEventTarget::call("send").as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::send(const jsbind::Any& body) {
    return XMLHttpRequestEventTarget::call("send", body).as<jsbind::Undefined>();
}

jsbind::Undefined XMLHttpRequest::abort() {
    return XMLHttpRequestEventTarget::call("abort").as<jsbind::Undefined>();
}

jsbind::String XMLHttpRequest::responseURL() const {
    return XMLHttpRequestEventTarget::get("responseURL").as<jsbind::String>();
}

unsigned short XMLHttpRequest::status() const {
    return XMLHttpRequestEventTarget::get("status").as<unsigned short>();
}

jsbind::String XMLHttpRequest::statusText() const {
    return XMLHttpRequestEventTarget::get("statusText").as<jsbind::String>();
}

jsbind::String XMLHttpRequest::getResponseHeader(const jsbind::String& name) {
    return XMLHttpRequestEventTarget::call("getResponseHeader", name).as<jsbind::String>();
}

jsbind::String XMLHttpRequest::getAllResponseHeaders() {
    return XMLHttpRequestEventTarget::call("getAllResponseHeaders").as<jsbind::String>();
}

jsbind::Undefined XMLHttpRequest::overrideMimeType(const jsbind::String& mime) {
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

jsbind::String XMLHttpRequest::responseText() const {
    return XMLHttpRequestEventTarget::get("responseText").as<jsbind::String>();
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

