#include <webbind/HTMLAnchorElement.hpp>
#include <webbind/DOMTokenList.hpp>


HTMLAnchorElement HTMLAnchorElement::take_ownership(Handle h) noexcept {
        return HTMLAnchorElement(h);
    }
HTMLAnchorElement HTMLAnchorElement::clone() const noexcept { return *this; }
HTMLAnchorElement::HTMLAnchorElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLAnchorElement::HTMLAnchorElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLAnchorElement::HTMLAnchorElement() : HTMLElement(emlite::Val::global("HTMLAnchorElement").new_()) {}

jsbind::DOMString HTMLAnchorElement::target() const {
    return HTMLElement::get("target").as<jsbind::DOMString>();
}

void HTMLAnchorElement::target(const jsbind::DOMString& value) {
    HTMLElement::set("target", value);
}

jsbind::DOMString HTMLAnchorElement::download() const {
    return HTMLElement::get("download").as<jsbind::DOMString>();
}

void HTMLAnchorElement::download(const jsbind::DOMString& value) {
    HTMLElement::set("download", value);
}

jsbind::USVString HTMLAnchorElement::ping() const {
    return HTMLElement::get("ping").as<jsbind::USVString>();
}

void HTMLAnchorElement::ping(const jsbind::USVString& value) {
    HTMLElement::set("ping", value);
}

jsbind::DOMString HTMLAnchorElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::DOMString>();
}

void HTMLAnchorElement::rel(const jsbind::DOMString& value) {
    HTMLElement::set("rel", value);
}

DOMTokenList HTMLAnchorElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::DOMString HTMLAnchorElement::hreflang() const {
    return HTMLElement::get("hreflang").as<jsbind::DOMString>();
}

void HTMLAnchorElement::hreflang(const jsbind::DOMString& value) {
    HTMLElement::set("hreflang", value);
}

jsbind::DOMString HTMLAnchorElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLAnchorElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLAnchorElement::text() const {
    return HTMLElement::get("text").as<jsbind::DOMString>();
}

void HTMLAnchorElement::text(const jsbind::DOMString& value) {
    HTMLElement::set("text", value);
}

jsbind::DOMString HTMLAnchorElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLAnchorElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::DOMString HTMLAnchorElement::coords() const {
    return HTMLElement::get("coords").as<jsbind::DOMString>();
}

void HTMLAnchorElement::coords(const jsbind::DOMString& value) {
    HTMLElement::set("coords", value);
}

jsbind::DOMString HTMLAnchorElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::DOMString>();
}

void HTMLAnchorElement::charset(const jsbind::DOMString& value) {
    HTMLElement::set("charset", value);
}

jsbind::DOMString HTMLAnchorElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLAnchorElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLAnchorElement::rev() const {
    return HTMLElement::get("rev").as<jsbind::DOMString>();
}

void HTMLAnchorElement::rev(const jsbind::DOMString& value) {
    HTMLElement::set("rev", value);
}

jsbind::DOMString HTMLAnchorElement::shape() const {
    return HTMLElement::get("shape").as<jsbind::DOMString>();
}

void HTMLAnchorElement::shape(const jsbind::DOMString& value) {
    HTMLElement::set("shape", value);
}

unsigned long HTMLAnchorElement::attributionSourceId() const {
    return HTMLElement::get("attributionSourceId").as<unsigned long>();
}

void HTMLAnchorElement::attributionSourceId(unsigned long value) {
    HTMLElement::set("attributionSourceId", value);
}

jsbind::USVString HTMLAnchorElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::USVString>();
}

void HTMLAnchorElement::attributionSrc(const jsbind::USVString& value) {
    HTMLElement::set("attributionSrc", value);
}

jsbind::USVString HTMLAnchorElement::href() const {
    return HTMLElement::get("href").as<jsbind::USVString>();
}

void HTMLAnchorElement::href(const jsbind::USVString& value) {
    HTMLElement::set("href", value);
}

jsbind::USVString HTMLAnchorElement::origin() const {
    return HTMLElement::get("origin").as<jsbind::USVString>();
}

jsbind::USVString HTMLAnchorElement::protocol() const {
    return HTMLElement::get("protocol").as<jsbind::USVString>();
}

void HTMLAnchorElement::protocol(const jsbind::USVString& value) {
    HTMLElement::set("protocol", value);
}

jsbind::USVString HTMLAnchorElement::username() const {
    return HTMLElement::get("username").as<jsbind::USVString>();
}

void HTMLAnchorElement::username(const jsbind::USVString& value) {
    HTMLElement::set("username", value);
}

jsbind::USVString HTMLAnchorElement::password() const {
    return HTMLElement::get("password").as<jsbind::USVString>();
}

void HTMLAnchorElement::password(const jsbind::USVString& value) {
    HTMLElement::set("password", value);
}

jsbind::USVString HTMLAnchorElement::host() const {
    return HTMLElement::get("host").as<jsbind::USVString>();
}

void HTMLAnchorElement::host(const jsbind::USVString& value) {
    HTMLElement::set("host", value);
}

jsbind::USVString HTMLAnchorElement::hostname() const {
    return HTMLElement::get("hostname").as<jsbind::USVString>();
}

void HTMLAnchorElement::hostname(const jsbind::USVString& value) {
    HTMLElement::set("hostname", value);
}

jsbind::USVString HTMLAnchorElement::port() const {
    return HTMLElement::get("port").as<jsbind::USVString>();
}

void HTMLAnchorElement::port(const jsbind::USVString& value) {
    HTMLElement::set("port", value);
}

jsbind::USVString HTMLAnchorElement::pathname() const {
    return HTMLElement::get("pathname").as<jsbind::USVString>();
}

void HTMLAnchorElement::pathname(const jsbind::USVString& value) {
    HTMLElement::set("pathname", value);
}

jsbind::USVString HTMLAnchorElement::search() const {
    return HTMLElement::get("search").as<jsbind::USVString>();
}

void HTMLAnchorElement::search(const jsbind::USVString& value) {
    HTMLElement::set("search", value);
}

jsbind::USVString HTMLAnchorElement::hash() const {
    return HTMLElement::get("hash").as<jsbind::USVString>();
}

void HTMLAnchorElement::hash(const jsbind::USVString& value) {
    HTMLElement::set("hash", value);
}

