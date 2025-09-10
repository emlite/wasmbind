#include <jsbind/Response.hpp>

namespace jsbind {

Response::Response(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Response Response::take_ownership(Handle h) noexcept { return Response(h); }

Response::Response(const emlite::Val &val) noexcept : emlite::Val(val) {}

emlite::Val Response::instance() noexcept { return emlite::Val::global("Response"); }

bool Response::ok() const { return get("ok").template as<bool>(); }

/* response.status */
uint16_t Response::status() const {
    return static_cast<uint16_t>(get("status").template as<uint32_t>());
}

Any Response::headersRaw() const { return get("headers").template as<Any>(); }

Promise<Result<String, Error>> Response::text() const {
    return call("text").template as<Promise<Result<String, Error>>>();
}

Promise<Result<Any, Error>> Response::json() const {
    return call("json").template as<Promise<Result<Any, Error>>>();
}

Promise<Result<ArrayBuffer, Error>> Response::arrayBuffer() const {
    return call("arrayBuffer").template as<Promise<Result<ArrayBuffer, Error>>>();
}

Promise<Result<Response, Error>> fetch(const char *input) {
    auto f = emlite::Val::global("fetch");
    if (!f.is_function()) {
        return Promise<Result<Response, Error>>::reject(Error("globalThis.fetch is not available"));
    }
    return f(emlite::Val(input)).template as<Promise<Result<Response, Error>>>();
}

Promise<Result<Response, Error>> fetch(const char *input, const Any &init) {
    auto f = emlite::Val::global("fetch");
    if (!f.is_function()) {
        return Promise<Result<Response, Error>>::reject(Error("globalThis.fetch is not available"));
    }
    return f(emlite::Val(input), init).template as<Promise<Result<Response, Error>>>();
}

Promise<Result<Response, Error>> fetch(const Any &input) {
    auto f = emlite::Val::global("fetch");
    if (!f.is_function()) {
        return Promise<Result<Response, Error>>::reject(Error("globalThis.fetch is not available"));
    }
    return f(input).template as<Promise<Result<Response, Error>>>();
}

Promise<Result<Response, Error>> fetch(const Any &input, const Any &init) {
    auto f = emlite::Val::global("fetch");
    if (!f.is_function()) {
        return Promise<Result<Response, Error>>::reject(Error("globalThis.fetch is not available"));
    }
    return f(input, init).template as<Promise<Result<Response, Error>>>();
}

// Header declares fetchVal; provide thin wrappers to unify naming
Promise<Result<Response, Error>> fetchVal(const Any &input) { return fetch(input); }

Promise<Result<Response, Error>> fetchVal(const Any &input, const Any &init) {
    return fetch(input, init);
}
}
