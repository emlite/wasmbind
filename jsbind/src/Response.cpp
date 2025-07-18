#include <jsbind/Response.hpp>

using namespace jsbind;

Response::Response(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Response Response::take_ownership(Handle h) noexcept {
    return Response(h);
}

Response::Response(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

bool Response::ok() const {
    return get("ok").template as<bool>();
}

/* response.status */
uint16_t Response::status() const {
    return static_cast<uint16_t>(
        get("status").template as<uint32_t>()
    );
}

Any Response::headers_raw() const {
    return get("headers").template as<Any>();
}

Promise Response::text() const {
    return call("text").template as<Promise>();
}
Promise Response::json() const {
    return call("json").template as<Promise>();
}

Promise Response::array_buffer() const {
    return call("arrayBuffer").template as<Promise>();
}

Promise fetch(const char *input) {
    return emlite::Val::global("fetch")(emlite::Val(input))
        .template as<Promise>();
}

Promise fetch(const char *input, const Any &init) {
    return emlite::Val::global("fetch")(
               emlite::Val(input), init
    )
        .template as<Promise>();
}

Promise fetch_val(const Any &input) {
    return emlite::Val::global("fetch")(input)
        .template as<Promise>();
}

Promise fetch_val(const Any &input, const Any &init) {
    return emlite::Val::global("fetch")(input, init)
        .template as<Promise>();
}