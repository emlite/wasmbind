#include <webbind/URLPattern.hpp>


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
emlite::Val URLPattern::instance() noexcept { return emlite::Val::global("URLPattern"); }
URLPattern::URLPattern(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPattern::URLPattern(const emlite::Val &val) noexcept: emlite::Val(val) {}


URLPattern::URLPattern() : emlite::Val(emlite::Val::global("URLPattern").new_()) {}

URLPattern::URLPattern(const jsbind::Any& input) : emlite::Val(emlite::Val::global("URLPattern").new_(input)) {}

URLPattern::URLPattern(const jsbind::Any& input, const jsbind::Any& options) : emlite::Val(emlite::Val::global("URLPattern").new_(input, options)) {}

bool URLPattern::test() {
    return emlite::Val::call("test").as<bool>();
}

bool URLPattern::test(const jsbind::Any& input) {
    return emlite::Val::call("test", input).as<bool>();
}

bool URLPattern::test(const jsbind::Any& input, const jsbind::String& baseURL) {
    return emlite::Val::call("test", input, baseURL).as<bool>();
}

URLPatternResult URLPattern::exec() {
    return emlite::Val::call("exec").as<URLPatternResult>();
}

URLPatternResult URLPattern::exec(const jsbind::Any& input) {
    return emlite::Val::call("exec", input).as<URLPatternResult>();
}

URLPatternResult URLPattern::exec(const jsbind::Any& input, const jsbind::String& baseURL) {
    return emlite::Val::call("exec", input, baseURL).as<URLPatternResult>();
}

jsbind::String URLPattern::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

jsbind::String URLPattern::username() const {
    return emlite::Val::get("username").as<jsbind::String>();
}

jsbind::String URLPattern::password() const {
    return emlite::Val::get("password").as<jsbind::String>();
}

jsbind::String URLPattern::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::String>();
}

jsbind::String URLPattern::port() const {
    return emlite::Val::get("port").as<jsbind::String>();
}

jsbind::String URLPattern::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::String>();
}

jsbind::String URLPattern::search() const {
    return emlite::Val::get("search").as<jsbind::String>();
}

jsbind::String URLPattern::hash() const {
    return emlite::Val::get("hash").as<jsbind::String>();
}

bool URLPattern::hasRegExpGroups() const {
    return emlite::Val::get("hasRegExpGroups").as<bool>();
}

