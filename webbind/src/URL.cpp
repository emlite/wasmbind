#include <webbind/URL.hpp>
#include <webbind/URLSearchParams.hpp>


URL URL::take_ownership(Handle h) noexcept {
        return URL(h);
    }
URL URL::clone() const noexcept { return *this; }
URL::URL(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URL::URL(const emlite::Val &val) noexcept: emlite::Val(val) {}


URL::URL(const jsbind::USVString& url) : emlite::Val(emlite::Val::global("URL").new_(url)) {}

URL::URL(const jsbind::USVString& url, const jsbind::USVString& base) : emlite::Val(emlite::Val::global("URL").new_(url, base)) {}

URL URL::parse(const jsbind::USVString& url) {
    return emlite::Val::global("url").call("parse", url).as<URL>();
}

URL URL::parse(const jsbind::USVString& url, const jsbind::USVString& base) {
    return emlite::Val::global("url").call("parse", url, base).as<URL>();
}

bool URL::canParse(const jsbind::USVString& url) {
    return emlite::Val::global("url").call("canParse", url).as<bool>();
}

bool URL::canParse(const jsbind::USVString& url, const jsbind::USVString& base) {
    return emlite::Val::global("url").call("canParse", url, base).as<bool>();
}

jsbind::USVString URL::href() const {
    return emlite::Val::get("href").as<jsbind::USVString>();
}

void URL::href(const jsbind::USVString& value) {
    emlite::Val::set("href", value);
}

jsbind::USVString URL::origin() const {
    return emlite::Val::get("origin").as<jsbind::USVString>();
}

jsbind::USVString URL::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::USVString>();
}

void URL::protocol(const jsbind::USVString& value) {
    emlite::Val::set("protocol", value);
}

jsbind::USVString URL::username() const {
    return emlite::Val::get("username").as<jsbind::USVString>();
}

void URL::username(const jsbind::USVString& value) {
    emlite::Val::set("username", value);
}

jsbind::USVString URL::password() const {
    return emlite::Val::get("password").as<jsbind::USVString>();
}

void URL::password(const jsbind::USVString& value) {
    emlite::Val::set("password", value);
}

jsbind::USVString URL::host() const {
    return emlite::Val::get("host").as<jsbind::USVString>();
}

void URL::host(const jsbind::USVString& value) {
    emlite::Val::set("host", value);
}

jsbind::USVString URL::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::USVString>();
}

void URL::hostname(const jsbind::USVString& value) {
    emlite::Val::set("hostname", value);
}

jsbind::USVString URL::port() const {
    return emlite::Val::get("port").as<jsbind::USVString>();
}

void URL::port(const jsbind::USVString& value) {
    emlite::Val::set("port", value);
}

jsbind::USVString URL::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::USVString>();
}

void URL::pathname(const jsbind::USVString& value) {
    emlite::Val::set("pathname", value);
}

jsbind::USVString URL::search() const {
    return emlite::Val::get("search").as<jsbind::USVString>();
}

void URL::search(const jsbind::USVString& value) {
    emlite::Val::set("search", value);
}

URLSearchParams URL::searchParams() const {
    return emlite::Val::get("searchParams").as<URLSearchParams>();
}

jsbind::USVString URL::hash() const {
    return emlite::Val::get("hash").as<jsbind::USVString>();
}

void URL::hash(const jsbind::USVString& value) {
    emlite::Val::set("hash", value);
}

jsbind::USVString URL::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::USVString>();
}

jsbind::DOMString URL::createObjectURL(const jsbind::Any& obj) {
    return emlite::Val::global("url").call("createObjectURL", obj).as<jsbind::DOMString>();
}

jsbind::Undefined URL::revokeObjectURL(const jsbind::DOMString& url) {
    return emlite::Val::global("url").call("revokeObjectURL", url).as<jsbind::Undefined>();
}

