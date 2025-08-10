#include <webbind/URLPatternInit.hpp>

using emlite::Val;
namespace webbind {

URLPatternInit::URLPatternInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPatternInit URLPatternInit::take_ownership(Handle h) noexcept {
        return URLPatternInit(h);
    }
URLPatternInit::URLPatternInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
URLPatternInit::URLPatternInit() noexcept: emlite::Val(emlite::Val::object()) {}
URLPatternInit URLPatternInit::clone() const noexcept { return *this; }

jsbind::String URLPatternInit::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void URLPatternInit::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::String URLPatternInit::username() const {
    return emlite::Val::get("username").as<jsbind::String>();
}

void URLPatternInit::username(const jsbind::String& value) {
    emlite::Val::set("username", value);
}

jsbind::String URLPatternInit::password() const {
    return emlite::Val::get("password").as<jsbind::String>();
}

void URLPatternInit::password(const jsbind::String& value) {
    emlite::Val::set("password", value);
}

jsbind::String URLPatternInit::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::String>();
}

void URLPatternInit::hostname(const jsbind::String& value) {
    emlite::Val::set("hostname", value);
}

jsbind::String URLPatternInit::port() const {
    return emlite::Val::get("port").as<jsbind::String>();
}

void URLPatternInit::port(const jsbind::String& value) {
    emlite::Val::set("port", value);
}

jsbind::String URLPatternInit::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::String>();
}

void URLPatternInit::pathname(const jsbind::String& value) {
    emlite::Val::set("pathname", value);
}

jsbind::String URLPatternInit::search() const {
    return emlite::Val::get("search").as<jsbind::String>();
}

void URLPatternInit::search(const jsbind::String& value) {
    emlite::Val::set("search", value);
}

jsbind::String URLPatternInit::hash() const {
    return emlite::Val::get("hash").as<jsbind::String>();
}

void URLPatternInit::hash(const jsbind::String& value) {
    emlite::Val::set("hash", value);
}

jsbind::String URLPatternInit::baseURL() const {
    return emlite::Val::get("baseURL").as<jsbind::String>();
}

void URLPatternInit::baseURL(const jsbind::String& value) {
    emlite::Val::set("baseURL", value);
}


} // namespace webbind