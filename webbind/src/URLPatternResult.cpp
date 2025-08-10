#include <webbind/URLPatternResult.hpp>
#include <webbind/URLPatternComponentResult.hpp>

namespace webbind {

URLPatternResult::URLPatternResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPatternResult URLPatternResult::take_ownership(Handle h) noexcept {
    return URLPatternResult(h);
}

URLPatternResult::URLPatternResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

URLPatternResult::URLPatternResult() noexcept: emlite::Val(emlite::Val::object()) {}

URLPatternResult URLPatternResult::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> URLPatternResult::inputs() const {
    return emlite::Val::get("inputs").as<jsbind::TypedArray<jsbind::Any>>();
}

void URLPatternResult::inputs(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("inputs", value);
}

URLPatternComponentResult URLPatternResult::protocol() const {
    return emlite::Val::get("protocol").as<URLPatternComponentResult>();
}

void URLPatternResult::protocol(const URLPatternComponentResult& value) {
    emlite::Val::set("protocol", value);
}

URLPatternComponentResult URLPatternResult::username() const {
    return emlite::Val::get("username").as<URLPatternComponentResult>();
}

void URLPatternResult::username(const URLPatternComponentResult& value) {
    emlite::Val::set("username", value);
}

URLPatternComponentResult URLPatternResult::password() const {
    return emlite::Val::get("password").as<URLPatternComponentResult>();
}

void URLPatternResult::password(const URLPatternComponentResult& value) {
    emlite::Val::set("password", value);
}

URLPatternComponentResult URLPatternResult::hostname() const {
    return emlite::Val::get("hostname").as<URLPatternComponentResult>();
}

void URLPatternResult::hostname(const URLPatternComponentResult& value) {
    emlite::Val::set("hostname", value);
}

URLPatternComponentResult URLPatternResult::port() const {
    return emlite::Val::get("port").as<URLPatternComponentResult>();
}

void URLPatternResult::port(const URLPatternComponentResult& value) {
    emlite::Val::set("port", value);
}

URLPatternComponentResult URLPatternResult::pathname() const {
    return emlite::Val::get("pathname").as<URLPatternComponentResult>();
}

void URLPatternResult::pathname(const URLPatternComponentResult& value) {
    emlite::Val::set("pathname", value);
}

URLPatternComponentResult URLPatternResult::search() const {
    return emlite::Val::get("search").as<URLPatternComponentResult>();
}

void URLPatternResult::search(const URLPatternComponentResult& value) {
    emlite::Val::set("search", value);
}

URLPatternComponentResult URLPatternResult::hash() const {
    return emlite::Val::get("hash").as<URLPatternComponentResult>();
}

void URLPatternResult::hash(const URLPatternComponentResult& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind