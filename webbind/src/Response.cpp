#include <webbind/Response.hpp>
#include <webbind/Headers.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/Blob.hpp>
#include <webbind/FormData.hpp>


Response Response::take_ownership(Handle h) noexcept {
        return Response(h);
    }
Response Response::clone() const noexcept { return *this; }
Response::Response(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Response::Response(const emlite::Val &val) noexcept: emlite::Val(val) {}


Response::Response() : emlite::Val(emlite::Val::global("Response").new_()) {}

Response::Response(const jsbind::Any& body) : emlite::Val(emlite::Val::global("Response").new_(body)) {}

Response::Response(const jsbind::Any& body, const jsbind::Any& init) : emlite::Val(emlite::Val::global("Response").new_(body, init)) {}

Response Response::error() {
    return emlite::Val::global("response").call("error").as<Response>();
}

Response Response::redirect(const jsbind::USVString& url) {
    return emlite::Val::global("response").call("redirect", url).as<Response>();
}

Response Response::redirect(const jsbind::USVString& url, unsigned short status) {
    return emlite::Val::global("response").call("redirect", url, status).as<Response>();
}

jsbind::Promise Response::json() {
    return emlite::Val::call("json").as<jsbind::Promise>();
}

ResponseType Response::type() const {
    return emlite::Val::get("type").as<ResponseType>();
}

jsbind::USVString Response::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
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

jsbind::ByteString Response::statusText() const {
    return emlite::Val::get("statusText").as<jsbind::ByteString>();
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

jsbind::Promise Response::arrayBuffer() {
    return emlite::Val::call("arrayBuffer").as<jsbind::Promise>();
}

jsbind::Promise Response::blob() {
    return emlite::Val::call("blob").as<jsbind::Promise>();
}

jsbind::Promise Response::bytes() {
    return emlite::Val::call("bytes").as<jsbind::Promise>();
}

jsbind::Promise Response::formData() {
    return emlite::Val::call("formData").as<jsbind::Promise>();
}

jsbind::Promise Response::text() {
    return emlite::Val::call("text").as<jsbind::Promise>();
}

