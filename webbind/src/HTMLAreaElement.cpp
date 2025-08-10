#include <webbind/HTMLAreaElement.hpp>
#include <webbind/DOMTokenList.hpp>

namespace webbind {

HTMLAreaElement HTMLAreaElement::take_ownership(Handle h) noexcept {
    return HTMLAreaElement(h);
}

HTMLAreaElement HTMLAreaElement::clone() const noexcept { return *this; }

emlite::Val HTMLAreaElement::instance() noexcept { return emlite::Val::global("HTMLAreaElement"); }

HTMLAreaElement::HTMLAreaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLAreaElement::HTMLAreaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLAreaElement::HTMLAreaElement() : HTMLElement(emlite::Val::global("HTMLAreaElement").new_()) {}

jsbind::String HTMLAreaElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::String>();
}

void HTMLAreaElement::alt(const jsbind::String& value) {
    HTMLElement::set("alt", value);
}

jsbind::String HTMLAreaElement::coords() const {
    return HTMLElement::get("coords").as<jsbind::String>();
}

void HTMLAreaElement::coords(const jsbind::String& value) {
    HTMLElement::set("coords", value);
}

jsbind::String HTMLAreaElement::shape() const {
    return HTMLElement::get("shape").as<jsbind::String>();
}

void HTMLAreaElement::shape(const jsbind::String& value) {
    HTMLElement::set("shape", value);
}

jsbind::String HTMLAreaElement::target() const {
    return HTMLElement::get("target").as<jsbind::String>();
}

void HTMLAreaElement::target(const jsbind::String& value) {
    HTMLElement::set("target", value);
}

jsbind::String HTMLAreaElement::download() const {
    return HTMLElement::get("download").as<jsbind::String>();
}

void HTMLAreaElement::download(const jsbind::String& value) {
    HTMLElement::set("download", value);
}

jsbind::String HTMLAreaElement::ping() const {
    return HTMLElement::get("ping").as<jsbind::String>();
}

void HTMLAreaElement::ping(const jsbind::String& value) {
    HTMLElement::set("ping", value);
}

jsbind::String HTMLAreaElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::String>();
}

void HTMLAreaElement::rel(const jsbind::String& value) {
    HTMLElement::set("rel", value);
}

DOMTokenList HTMLAreaElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::String HTMLAreaElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLAreaElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

bool HTMLAreaElement::noHref() const {
    return HTMLElement::get("noHref").as<bool>();
}

void HTMLAreaElement::noHref(bool value) {
    HTMLElement::set("noHref", value);
}

jsbind::String HTMLAreaElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::String>();
}

void HTMLAreaElement::attributionSrc(const jsbind::String& value) {
    HTMLElement::set("attributionSrc", value);
}

jsbind::String HTMLAreaElement::href() const {
    return HTMLElement::get("href").as<jsbind::String>();
}

void HTMLAreaElement::href(const jsbind::String& value) {
    HTMLElement::set("href", value);
}

jsbind::String HTMLAreaElement::origin() const {
    return HTMLElement::get("origin").as<jsbind::String>();
}

jsbind::String HTMLAreaElement::protocol() const {
    return HTMLElement::get("protocol").as<jsbind::String>();
}

void HTMLAreaElement::protocol(const jsbind::String& value) {
    HTMLElement::set("protocol", value);
}

jsbind::String HTMLAreaElement::username() const {
    return HTMLElement::get("username").as<jsbind::String>();
}

void HTMLAreaElement::username(const jsbind::String& value) {
    HTMLElement::set("username", value);
}

jsbind::String HTMLAreaElement::password() const {
    return HTMLElement::get("password").as<jsbind::String>();
}

void HTMLAreaElement::password(const jsbind::String& value) {
    HTMLElement::set("password", value);
}

jsbind::String HTMLAreaElement::host() const {
    return HTMLElement::get("host").as<jsbind::String>();
}

void HTMLAreaElement::host(const jsbind::String& value) {
    HTMLElement::set("host", value);
}

jsbind::String HTMLAreaElement::hostname() const {
    return HTMLElement::get("hostname").as<jsbind::String>();
}

void HTMLAreaElement::hostname(const jsbind::String& value) {
    HTMLElement::set("hostname", value);
}

jsbind::String HTMLAreaElement::port() const {
    return HTMLElement::get("port").as<jsbind::String>();
}

void HTMLAreaElement::port(const jsbind::String& value) {
    HTMLElement::set("port", value);
}

jsbind::String HTMLAreaElement::pathname() const {
    return HTMLElement::get("pathname").as<jsbind::String>();
}

void HTMLAreaElement::pathname(const jsbind::String& value) {
    HTMLElement::set("pathname", value);
}

jsbind::String HTMLAreaElement::search() const {
    return HTMLElement::get("search").as<jsbind::String>();
}

void HTMLAreaElement::search(const jsbind::String& value) {
    HTMLElement::set("search", value);
}

jsbind::String HTMLAreaElement::hash() const {
    return HTMLElement::get("hash").as<jsbind::String>();
}

void HTMLAreaElement::hash(const jsbind::String& value) {
    HTMLElement::set("hash", value);
}


} // namespace webbind