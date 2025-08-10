#include <webbind/Location.hpp>
#include <webbind/DOMStringList.hpp>

namespace webbind {

Location Location::take_ownership(Handle h) noexcept {
        return Location(h);
    }
Location Location::clone() const noexcept { return *this; }
emlite::Val Location::instance() noexcept { return emlite::Val::global("Location"); }
Location::Location(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Location::Location(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Location::href() const {
    return emlite::Val::get("href").as<jsbind::String>();
}

void Location::href(const jsbind::String& value) {
    emlite::Val::set("href", value);
}

jsbind::String Location::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

jsbind::String Location::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void Location::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::String Location::host() const {
    return emlite::Val::get("host").as<jsbind::String>();
}

void Location::host(const jsbind::String& value) {
    emlite::Val::set("host", value);
}

jsbind::String Location::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::String>();
}

void Location::hostname(const jsbind::String& value) {
    emlite::Val::set("hostname", value);
}

jsbind::String Location::port() const {
    return emlite::Val::get("port").as<jsbind::String>();
}

void Location::port(const jsbind::String& value) {
    emlite::Val::set("port", value);
}

jsbind::String Location::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::String>();
}

void Location::pathname(const jsbind::String& value) {
    emlite::Val::set("pathname", value);
}

jsbind::String Location::search() const {
    return emlite::Val::get("search").as<jsbind::String>();
}

void Location::search(const jsbind::String& value) {
    emlite::Val::set("search", value);
}

jsbind::String Location::hash() const {
    return emlite::Val::get("hash").as<jsbind::String>();
}

void Location::hash(const jsbind::String& value) {
    emlite::Val::set("hash", value);
}

jsbind::Undefined Location::assign(const jsbind::String& url) {
    return emlite::Val::call("assign", url).as<jsbind::Undefined>();
}

jsbind::Undefined Location::replace(const jsbind::String& url) {
    return emlite::Val::call("replace", url).as<jsbind::Undefined>();
}

jsbind::Undefined Location::reload() {
    return emlite::Val::call("reload").as<jsbind::Undefined>();
}

DOMStringList Location::ancestorOrigins() const {
    return emlite::Val::get("ancestorOrigins").as<DOMStringList>();
}


} // namespace webbind