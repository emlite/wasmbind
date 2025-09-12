#include <webbind/URLPattern.hpp>
#include <webbind/URLPatternOptions.hpp>
#include <webbind/URLPatternResult.hpp>

namespace webbind {

URLPattern URLPattern::take_ownership(Handle h) noexcept {
    return URLPattern(h);
}

URLPattern URLPattern::clone() const noexcept { return *this; }

emlite::Val URLPattern::instance() noexcept { return emlite::Val::global("URLPattern"); }

URLPattern::URLPattern(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

URLPattern::URLPattern(const emlite::Val &val) noexcept: emlite::Val(val) {}

URLPattern::URLPattern(const jsbind::Any& input, const jsbind::String& baseURL) : emlite::Val(emlite::Val::global("URLPattern").new_(input, baseURL)) {}

URLPattern::URLPattern(const jsbind::Any& input, const jsbind::String& baseURL, const URLPatternOptions& options) : emlite::Val(emlite::Val::global("URLPattern").new_(input, baseURL, options)) {}

URLPattern::URLPattern() : emlite::Val(emlite::Val::global("URLPattern").new_()) {}

URLPattern::URLPattern(const jsbind::Any& input) : emlite::Val(emlite::Val::global("URLPattern").new_(input)) {}

URLPattern::URLPattern(const jsbind::Any& input, const URLPatternOptions& options) : emlite::Val(emlite::Val::global("URLPattern").new_(input, options)) {}

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


} // namespace webbind