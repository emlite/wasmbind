#include <webbind/Response.hpp>
#include <webbind/ResponseInit.hpp>
#include <webbind/Response.hpp>
#include <webbind/Headers.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/Blob.hpp>
#include <webbind/FormData.hpp>

namespace webbind {

Response Response::take_ownership(Handle h) noexcept {
    return Response(h);
}

Response Response::clone() const noexcept { return *this; }

emlite::Val Response::instance() noexcept { return emlite::Val::global("Response"); }

Response::Response(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Response::Response(const emlite::Val &val) noexcept: emlite::Val(val) {}

Response::Response() : emlite::Val(emlite::Val::global("Response").new_()) {}

Response::Response(const jsbind::Any& body) : emlite::Val(emlite::Val::global("Response").new_(body)) {}

Response::Response(const jsbind::Any& body, const ResponseInit& init) : emlite::Val(emlite::Val::global("Response").new_(body, init)) {}

Response Response::error() {
    return emlite::Val::global("response").call("error").as<Response>();
}

Response Response::redirect(const jsbind::String& url) {
    return emlite::Val::global("response").call("redirect", url).as<Response>();
}

Response Response::redirect(const jsbind::String& url, unsigned short status) {
    return emlite::Val::global("response").call("redirect", url, status).as<Response>();
}

Response Response::json(const jsbind::Any& data) {
    return emlite::Val::global("response").call("json", data).as<Response>();
}

Response Response::json(const jsbind::Any& data, const ResponseInit& init) {
    return emlite::Val::global("response").call("json", data, init).as<Response>();
}

ResponseType Response::type() const {
    return emlite::Val::get("type").as<ResponseType>();
}

jsbind::String Response::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

bool Response::redirected() const {
    return emlite::Val::get("redirected").as<bool>();
}

unsigned short Response::status() const {
    return emlite::Val::get("status").as<unsigned short>();
}

bool Response::ok() const {
    return emlite::Val::get("ok").as<bool>();
}

jsbind::String Response::statusText() const {
    return emlite::Val::get("statusText").as<jsbind::String>();
}

Headers Response::headers() const {
    return emlite::Val::get("headers").as<Headers>();
}

Response Response::clone() {
    return emlite::Val::call("clone").as<Response>();
}

ReadableStream Response::body() const {
    return emlite::Val::get("body").as<ReadableStream>();
}

bool Response::bodyUsed() const {
    return emlite::Val::get("bodyUsed").as<bool>();
}

jsbind::Promise<jsbind::ArrayBuffer> Response::arrayBuffer() {
    return emlite::Val::call("arrayBuffer").as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<Blob> Response::blob() {
    return emlite::Val::call("blob").as<jsbind::Promise<Blob>>();
}

jsbind::Promise<jsbind::Uint8Array> Response::bytes() {
    return emlite::Val::call("bytes").as<jsbind::Promise<jsbind::Uint8Array>>();
}

jsbind::Promise<FormData> Response::formData() {
    return emlite::Val::call("formData").as<jsbind::Promise<FormData>>();
}

jsbind::Promise<jsbind::Any> Response::json() {
    return emlite::Val::call("json").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::String> Response::text() {
    return emlite::Val::call("text").as<jsbind::Promise<jsbind::String>>();
}


} // namespace webbind