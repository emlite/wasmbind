#include <webbind/HTMLAreaElement.hpp>
#include <webbind/DOMTokenList.hpp>


HTMLAreaElement HTMLAreaElement::take_ownership(Handle h) noexcept {
        return HTMLAreaElement(h);
    }
HTMLAreaElement HTMLAreaElement::clone() const noexcept { return *this; }
HTMLAreaElement::HTMLAreaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLAreaElement::HTMLAreaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLAreaElement::HTMLAreaElement() : HTMLElement(emlite::Val::global("HTMLAreaElement").new_()) {}

jsbind::DOMString HTMLAreaElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::DOMString>();
}

void HTMLAreaElement::alt(const jsbind::DOMString& value) {
    HTMLElement::set("alt", value);
}

jsbind::DOMString HTMLAreaElement::coords() const {
    return HTMLElement::get("coords").as<jsbind::DOMString>();
}

void HTMLAreaElement::coords(const jsbind::DOMString& value) {
    HTMLElement::set("coords", value);
}

jsbind::DOMString HTMLAreaElement::shape() const {
    return HTMLElement::get("shape").as<jsbind::DOMString>();
}

void HTMLAreaElement::shape(const jsbind::DOMString& value) {
    HTMLElement::set("shape", value);
}

jsbind::DOMString HTMLAreaElement::target() const {
    return HTMLElement::get("target").as<jsbind::DOMString>();
}

void HTMLAreaElement::target(const jsbind::DOMString& value) {
    HTMLElement::set("target", value);
}

jsbind::DOMString HTMLAreaElement::download() const {
    return HTMLElement::get("download").as<jsbind::DOMString>();
}

void HTMLAreaElement::download(const jsbind::DOMString& value) {
    HTMLElement::set("download", value);
}

jsbind::USVString HTMLAreaElement::ping() const {
    return HTMLElement::get("ping").as<jsbind::USVString>();
}

void HTMLAreaElement::ping(const jsbind::USVString& value) {
    HTMLElement::set("ping", value);
}

jsbind::DOMString HTMLAreaElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::DOMString>();
}

void HTMLAreaElement::rel(const jsbind::DOMString& value) {
    HTMLElement::set("rel", value);
}

DOMTokenList HTMLAreaElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::DOMString HTMLAreaElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLAreaElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

bool HTMLAreaElement::noHref() const {
    return HTMLElement::get("noHref").as<bool>();
}

void HTMLAreaElement::noHref(bool value) {
    HTMLElement::set("noHref", value);
}

jsbind::USVString HTMLAreaElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::USVString>();
}

void HTMLAreaElement::attributionSrc(const jsbind::USVString& value) {
    HTMLElement::set("attributionSrc", value);
}

jsbind::USVString HTMLAreaElement::href() const {
    return HTMLElement::get("href").as<jsbind::USVString>();
}

void HTMLAreaElement::href(const jsbind::USVString& value) {
    HTMLElement::set("href", value);
}

jsbind::USVString HTMLAreaElement::origin() const {
    return HTMLElement::get("origin").as<jsbind::USVString>();
}

jsbind::USVString HTMLAreaElement::protocol() const {
    return HTMLElement::get("protocol").as<jsbind::USVString>();
}

void HTMLAreaElement::protocol(const jsbind::USVString& value) {
    HTMLElement::set("protocol", value);
}

jsbind::USVString HTMLAreaElement::username() const {
    return HTMLElement::get("username").as<jsbind::USVString>();
}

void HTMLAreaElement::username(const jsbind::USVString& value) {
    HTMLElement::set("username", value);
}

jsbind::USVString HTMLAreaElement::password() const {
    return HTMLElement::get("password").as<jsbind::USVString>();
}

void HTMLAreaElement::password(const jsbind::USVString& value) {
    HTMLElement::set("password", value);
}

jsbind::USVString HTMLAreaElement::host() const {
    return HTMLElement::get("host").as<jsbind::USVString>();
}

void HTMLAreaElement::host(const jsbind::USVString& value) {
    HTMLElement::set("host", value);
}

jsbind::USVString HTMLAreaElement::hostname() const {
    return HTMLElement::get("hostname").as<jsbind::USVString>();
}

void HTMLAreaElement::hostname(const jsbind::USVString& value) {
    HTMLElement::set("hostname", value);
}

jsbind::USVString HTMLAreaElement::port() const {
    return HTMLElement::get("port").as<jsbind::USVString>();
}

void HTMLAreaElement::port(const jsbind::USVString& value) {
    HTMLElement::set("port", value);
}

jsbind::USVString HTMLAreaElement::pathname() const {
    return HTMLElement::get("pathname").as<jsbind::USVString>();
}

void HTMLAreaElement::pathname(const jsbind::USVString& value) {
    HTMLElement::set("pathname", value);
}

jsbind::USVString HTMLAreaElement::search() const {
    return HTMLElement::get("search").as<jsbind::USVString>();
}

void HTMLAreaElement::search(const jsbind::USVString& value) {
    HTMLElement::set("search", value);
}

jsbind::USVString HTMLAreaElement::hash() const {
    return HTMLElement::get("hash").as<jsbind::USVString>();
}

void HTMLAreaElement::hash(const jsbind::USVString& value) {
    HTMLElement::set("hash", value);
}

