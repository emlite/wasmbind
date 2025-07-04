#include <webbind/URLPattern.hpp>


URLPatternResult::URLPatternResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPatternResult URLPatternResult::take_ownership(Handle h) noexcept {
        return URLPatternResult(h);
    }
URLPatternResult::URLPatternResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
URLPatternResult::URLPatternResult() noexcept: emlite::Val(emlite::Val::object()) {}
URLPatternResult URLPatternResult::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> URLPatternResult::inputs() const {
    return emlite::Val::get("inputs").as<jsbind::Sequence<jsbind::Any>>();
}

void URLPatternResult::inputs(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("inputs", value);
}

jsbind::Any URLPatternResult::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::Any>();
}

void URLPatternResult::protocol(const jsbind::Any& value) {
    emlite::Val::set("protocol", value);
}

jsbind::Any URLPatternResult::username() const {
    return emlite::Val::get("username").as<jsbind::Any>();
}

void URLPatternResult::username(const jsbind::Any& value) {
    emlite::Val::set("username", value);
}

jsbind::Any URLPatternResult::password() const {
    return emlite::Val::get("password").as<jsbind::Any>();
}

void URLPatternResult::password(const jsbind::Any& value) {
    emlite::Val::set("password", value);
}

jsbind::Any URLPatternResult::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::Any>();
}

void URLPatternResult::hostname(const jsbind::Any& value) {
    emlite::Val::set("hostname", value);
}

jsbind::Any URLPatternResult::port() const {
    return emlite::Val::get("port").as<jsbind::Any>();
}

void URLPatternResult::port(const jsbind::Any& value) {
    emlite::Val::set("port", value);
}

jsbind::Any URLPatternResult::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::Any>();
}

void URLPatternResult::pathname(const jsbind::Any& value) {
    emlite::Val::set("pathname", value);
}

jsbind::Any URLPatternResult::search() const {
    return emlite::Val::get("search").as<jsbind::Any>();
}

void URLPatternResult::search(const jsbind::Any& value) {
    emlite::Val::set("search", value);
}

jsbind::Any URLPatternResult::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void URLPatternResult::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}

URLPattern URLPattern::take_ownership(Handle h) noexcept {
        return URLPattern(h);
    }
URLPattern URLPattern::clone() const noexcept { return *this; }
URLPattern::URLPattern(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPattern::URLPattern(const emlite::Val &val) noexcept: emlite::Val(val) {}


URLPattern::URLPattern(const jsbind::Any& input, const jsbind::Any& options): emlite::Val(emlite::Val::global("URLPattern").new_(input, options)) {}

bool URLPattern::test(const jsbind::Any& input, const jsbind::USVString& baseURL) {
    return emlite::Val::call("test", input, baseURL).as<bool>();
}

URLPatternResult URLPattern::exec(const jsbind::Any& input, const jsbind::USVString& baseURL) {
    return emlite::Val::call("exec", input, baseURL).as<URLPatternResult>();
}

jsbind::USVString URLPattern::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::username() const {
    return emlite::Val::get("username").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::password() const {
    return emlite::Val::get("password").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::port() const {
    return emlite::Val::get("port").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::search() const {
    return emlite::Val::get("search").as<jsbind::USVString>();
}

jsbind::USVString URLPattern::hash() const {
    return emlite::Val::get("hash").as<jsbind::USVString>();
}

bool URLPattern::hasRegExpGroups() const {
    return emlite::Val::get("hasRegExpGroups").as<bool>();
}

