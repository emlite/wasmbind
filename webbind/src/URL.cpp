#include <webbind/URL.hpp>
#include <webbind/URLSearchParams.hpp>


URL URL::take_ownership(Handle h) noexcept {
        return URL(h);
    }
URL URL::clone() const noexcept { return *this; }
emlite::Val URL::instance() noexcept { return emlite::Val::global("URL"); }
URL::URL(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URL::URL(const emlite::Val &val) noexcept: emlite::Val(val) {}


URL::URL(const jsbind::String& url) : emlite::Val(emlite::Val::global("URL").new_(url)) {}

URL::URL(const jsbind::String& url, const jsbind::String& base) : emlite::Val(emlite::Val::global("URL").new_(url, base)) {}

URL URL::parse(const jsbind::String& url) {
    return emlite::Val::global("url").call("parse", url).as<URL>();
}

URL URL::parse(const jsbind::String& url, const jsbind::String& base) {
    return emlite::Val::global("url").call("parse", url, base).as<URL>();
}

bool URL::canParse(const jsbind::String& url) {
    return emlite::Val::global("url").call("canParse", url).as<bool>();
}

bool URL::canParse(const jsbind::String& url, const jsbind::String& base) {
    return emlite::Val::global("url").call("canParse", url, base).as<bool>();
}

jsbind::String URL::href() const {
    return emlite::Val::get("href").as<jsbind::String>();
}

void URL::href(const jsbind::String& value) {
    emlite::Val::set("href", value);
}

jsbind::String URL::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

jsbind::String URL::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void URL::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::String URL::username() const {
    return emlite::Val::get("username").as<jsbind::String>();
}

void URL::username(const jsbind::String& value) {
    emlite::Val::set("username", value);
}

jsbind::String URL::password() const {
    return emlite::Val::get("password").as<jsbind::String>();
}

void URL::password(const jsbind::String& value) {
    emlite::Val::set("password", value);
}

jsbind::String URL::host() const {
    return emlite::Val::get("host").as<jsbind::String>();
}

void URL::host(const jsbind::String& value) {
    emlite::Val::set("host", value);
}

jsbind::String URL::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::String>();
}

void URL::hostname(const jsbind::String& value) {
    emlite::Val::set("hostname", value);
}

jsbind::String URL::port() const {
    return emlite::Val::get("port").as<jsbind::String>();
}

void URL::port(const jsbind::String& value) {
    emlite::Val::set("port", value);
}

jsbind::String URL::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::String>();
}

void URL::pathname(const jsbind::String& value) {
    emlite::Val::set("pathname", value);
}

jsbind::String URL::search() const {
    return emlite::Val::get("search").as<jsbind::String>();
}

void URL::search(const jsbind::String& value) {
    emlite::Val::set("search", value);
}

URLSearchParams URL::searchParams() const {
    return emlite::Val::get("searchParams").as<URLSearchParams>();
}

jsbind::String URL::hash() const {
    return emlite::Val::get("hash").as<jsbind::String>();
}

void URL::hash(const jsbind::String& value) {
    emlite::Val::set("hash", value);
}

jsbind::String URL::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::String>();
}

jsbind::String URL::createObjectURL(const jsbind::Any& obj) {
    return emlite::Val::global("url").call("createObjectURL", obj).as<jsbind::String>();
}

jsbind::Undefined URL::revokeObjectURL(const jsbind::String& url) {
    return emlite::Val::global("url").call("revokeObjectURL", url).as<jsbind::Undefined>();
}

