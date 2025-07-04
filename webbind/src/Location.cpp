#include <webbind/Location.hpp>
#include <webbind/DOMStringList.hpp>


Location Location::take_ownership(Handle h) noexcept {
        return Location(h);
    }
Location Location::clone() const noexcept { return *this; }
Location::Location(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Location::Location(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString Location::href() const {
    return emlite::Val::get("href").as<jsbind::USVString>();
}

void Location::href(const jsbind::USVString& value) {
    emlite::Val::set("href", value);
}

jsbind::USVString Location::origin() const {
    return emlite::Val::get("origin").as<jsbind::USVString>();
}

jsbind::USVString Location::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::USVString>();
}

void Location::protocol(const jsbind::USVString& value) {
    emlite::Val::set("protocol", value);
}

jsbind::USVString Location::host() const {
    return emlite::Val::get("host").as<jsbind::USVString>();
}

void Location::host(const jsbind::USVString& value) {
    emlite::Val::set("host", value);
}

jsbind::USVString Location::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::USVString>();
}

void Location::hostname(const jsbind::USVString& value) {
    emlite::Val::set("hostname", value);
}

jsbind::USVString Location::port() const {
    return emlite::Val::get("port").as<jsbind::USVString>();
}

void Location::port(const jsbind::USVString& value) {
    emlite::Val::set("port", value);
}

jsbind::USVString Location::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::USVString>();
}

void Location::pathname(const jsbind::USVString& value) {
    emlite::Val::set("pathname", value);
}

jsbind::USVString Location::search() const {
    return emlite::Val::get("search").as<jsbind::USVString>();
}

void Location::search(const jsbind::USVString& value) {
    emlite::Val::set("search", value);
}

jsbind::USVString Location::hash() const {
    return emlite::Val::get("hash").as<jsbind::USVString>();
}

void Location::hash(const jsbind::USVString& value) {
    emlite::Val::set("hash", value);
}

jsbind::Undefined Location::assign(const jsbind::USVString& url) {
    return emlite::Val::call("assign", url).as<jsbind::Undefined>();
}

jsbind::Undefined Location::replace(const jsbind::USVString& url) {
    return emlite::Val::call("replace", url).as<jsbind::Undefined>();
}

jsbind::Undefined Location::reload() {
    return emlite::Val::call("reload").as<jsbind::Undefined>();
}

DOMStringList Location::ancestorOrigins() const {
    return emlite::Val::get("ancestorOrigins").as<DOMStringList>();
}

