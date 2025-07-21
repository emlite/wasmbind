#include <webbind/Request.hpp>
#include <webbind/Headers.hpp>
#include <webbind/AbortSignal.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/Blob.hpp>
#include <webbind/FormData.hpp>


Request Request::take_ownership(Handle h) noexcept {
        return Request(h);
    }
Request Request::clone() const noexcept { return *this; }
Request::Request(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Request::Request(const emlite::Val &val) noexcept: emlite::Val(val) {}


Request::Request(const jsbind::Any& input) : emlite::Val(emlite::Val::global("Request").new_(input)) {}

Request::Request(const jsbind::Any& input, const jsbind::Any& init) : emlite::Val(emlite::Val::global("Request").new_(input, init)) {}

jsbind::ByteString Request::method() const {
    return emlite::Val::get("method").as<jsbind::ByteString>();
}

jsbind::USVString Request::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

Headers Request::headers() const {
    return emlite::Val::get("headers").as<Headers>();
}

RequestDestination Request::destination() const {
    return emlite::Val::get("destination").as<RequestDestination>();
}

jsbind::USVString Request::referrer() const {
    return emlite::Val::get("referrer").as<jsbind::USVString>();
}

ReferrerPolicy Request::referrerPolicy() const {
    return emlite::Val::get("referrerPolicy").as<ReferrerPolicy>();
}

RequestMode Request::mode() const {
    return emlite::Val::get("mode").as<RequestMode>();
}

RequestCredentials Request::credentials() const {
    return emlite::Val::get("credentials").as<RequestCredentials>();
}

RequestCache Request::cache() const {
    return emlite::Val::get("cache").as<RequestCache>();
}

RequestRedirect Request::redirect() const {
    return emlite::Val::get("redirect").as<RequestRedirect>();
}

jsbind::DOMString Request::integrity() const {
    return emlite::Val::get("integrity").as<jsbind::DOMString>();
}

bool Request::keepalive() const {
    return emlite::Val::get("keepalive").as<bool>();
}

bool Request::isReloadNavigation() const {
    return emlite::Val::get("isReloadNavigation").as<bool>();
}

bool Request::isHistoryNavigation() const {
    return emlite::Val::get("isHistoryNavigation").as<bool>();
}

AbortSignal Request::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

RequestDuplex Request::duplex() const {
    return emlite::Val::get("duplex").as<RequestDuplex>();
}

Request Request::clone() {
    return emlite::Val::call("clone").as<Request>();
}

IPAddressSpace Request::targetAddressSpace() const {
    return emlite::Val::get("targetAddressSpace").as<IPAddressSpace>();
}

ReadableStream Request::body() const {
    return emlite::Val::get("body").as<ReadableStream>();
}

bool Request::bodyUsed() const {
    return emlite::Val::get("bodyUsed").as<bool>();
}

jsbind::Promise<jsbind::ArrayBuffer> Request::arrayBuffer() {
    return emlite::Val::call("arrayBuffer").as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<Blob> Request::blob() {
    return emlite::Val::call("blob").as<jsbind::Promise<Blob>>();
}

jsbind::Promise<jsbind::Uint8Array> Request::bytes() {
    return emlite::Val::call("bytes").as<jsbind::Promise<jsbind::Uint8Array>>();
}

jsbind::Promise<FormData> Request::formData() {
    return emlite::Val::call("formData").as<jsbind::Promise<FormData>>();
}

jsbind::Promise<jsbind::Any> Request::json() {
    return emlite::Val::call("json").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::USVString> Request::text() {
    return emlite::Val::call("text").as<jsbind::Promise<jsbind::USVString>>();
}

