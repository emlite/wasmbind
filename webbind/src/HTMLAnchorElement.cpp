#include <webbind/HTMLAnchorElement.hpp>
#include <webbind/DOMTokenList.hpp>

namespace webbind {

HTMLAnchorElement HTMLAnchorElement::take_ownership(Handle h) noexcept {
    return HTMLAnchorElement(h);
}

HTMLAnchorElement HTMLAnchorElement::clone() const noexcept { return *this; }

emlite::Val HTMLAnchorElement::instance() noexcept { return emlite::Val::global("HTMLAnchorElement"); }

HTMLAnchorElement::HTMLAnchorElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLAnchorElement::HTMLAnchorElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLAnchorElement::HTMLAnchorElement() : HTMLElement(emlite::Val::global("HTMLAnchorElement").new_()) {}

jsbind::String HTMLAnchorElement::target() const {
    return HTMLElement::get("target").as<jsbind::String>();
}

void HTMLAnchorElement::target(const jsbind::String& value) {
    HTMLElement::set("target", value);
}

jsbind::String HTMLAnchorElement::download() const {
    return HTMLElement::get("download").as<jsbind::String>();
}

void HTMLAnchorElement::download(const jsbind::String& value) {
    HTMLElement::set("download", value);
}

jsbind::String HTMLAnchorElement::ping() const {
    return HTMLElement::get("ping").as<jsbind::String>();
}

void HTMLAnchorElement::ping(const jsbind::String& value) {
    HTMLElement::set("ping", value);
}

jsbind::String HTMLAnchorElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::String>();
}

void HTMLAnchorElement::rel(const jsbind::String& value) {
    HTMLElement::set("rel", value);
}

DOMTokenList HTMLAnchorElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::String HTMLAnchorElement::hreflang() const {
    return HTMLElement::get("hreflang").as<jsbind::String>();
}

void HTMLAnchorElement::hreflang(const jsbind::String& value) {
    HTMLElement::set("hreflang", value);
}

jsbind::String HTMLAnchorElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLAnchorElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLAnchorElement::text() const {
    return HTMLElement::get("text").as<jsbind::String>();
}

void HTMLAnchorElement::text(const jsbind::String& value) {
    HTMLElement::set("text", value);
}

jsbind::String HTMLAnchorElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLAnchorElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::String HTMLAnchorElement::coords() const {
    return HTMLElement::get("coords").as<jsbind::String>();
}

void HTMLAnchorElement::coords(const jsbind::String& value) {
    HTMLElement::set("coords", value);
}

jsbind::String HTMLAnchorElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::String>();
}

void HTMLAnchorElement::charset(const jsbind::String& value) {
    HTMLElement::set("charset", value);
}

jsbind::String HTMLAnchorElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLAnchorElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLAnchorElement::rev() const {
    return HTMLElement::get("rev").as<jsbind::String>();
}

void HTMLAnchorElement::rev(const jsbind::String& value) {
    HTMLElement::set("rev", value);
}

jsbind::String HTMLAnchorElement::shape() const {
    return HTMLElement::get("shape").as<jsbind::String>();
}

void HTMLAnchorElement::shape(const jsbind::String& value) {
    HTMLElement::set("shape", value);
}

unsigned long HTMLAnchorElement::attributionSourceId() const {
    return HTMLElement::get("attributionSourceId").as<unsigned long>();
}

void HTMLAnchorElement::attributionSourceId(unsigned long value) {
    HTMLElement::set("attributionSourceId", value);
}

jsbind::String HTMLAnchorElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::String>();
}

void HTMLAnchorElement::attributionSrc(const jsbind::String& value) {
    HTMLElement::set("attributionSrc", value);
}

jsbind::String HTMLAnchorElement::href() const {
    return HTMLElement::get("href").as<jsbind::String>();
}

void HTMLAnchorElement::href(const jsbind::String& value) {
    HTMLElement::set("href", value);
}

jsbind::String HTMLAnchorElement::origin() const {
    return HTMLElement::get("origin").as<jsbind::String>();
}

jsbind::String HTMLAnchorElement::protocol() const {
    return HTMLElement::get("protocol").as<jsbind::String>();
}

void HTMLAnchorElement::protocol(const jsbind::String& value) {
    HTMLElement::set("protocol", value);
}

jsbind::String HTMLAnchorElement::username() const {
    return HTMLElement::get("username").as<jsbind::String>();
}

void HTMLAnchorElement::username(const jsbind::String& value) {
    HTMLElement::set("username", value);
}

jsbind::String HTMLAnchorElement::password() const {
    return HTMLElement::get("password").as<jsbind::String>();
}

void HTMLAnchorElement::password(const jsbind::String& value) {
    HTMLElement::set("password", value);
}

jsbind::String HTMLAnchorElement::host() const {
    return HTMLElement::get("host").as<jsbind::String>();
}

void HTMLAnchorElement::host(const jsbind::String& value) {
    HTMLElement::set("host", value);
}

jsbind::String HTMLAnchorElement::hostname() const {
    return HTMLElement::get("hostname").as<jsbind::String>();
}

void HTMLAnchorElement::hostname(const jsbind::String& value) {
    HTMLElement::set("hostname", value);
}

jsbind::String HTMLAnchorElement::port() const {
    return HTMLElement::get("port").as<jsbind::String>();
}

void HTMLAnchorElement::port(const jsbind::String& value) {
    HTMLElement::set("port", value);
}

jsbind::String HTMLAnchorElement::pathname() const {
    return HTMLElement::get("pathname").as<jsbind::String>();
}

void HTMLAnchorElement::pathname(const jsbind::String& value) {
    HTMLElement::set("pathname", value);
}

jsbind::String HTMLAnchorElement::search() const {
    return HTMLElement::get("search").as<jsbind::String>();
}

void HTMLAnchorElement::search(const jsbind::String& value) {
    HTMLElement::set("search", value);
}

jsbind::String HTMLAnchorElement::hash() const {
    return HTMLElement::get("hash").as<jsbind::String>();
}

void HTMLAnchorElement::hash(const jsbind::String& value) {
    HTMLElement::set("hash", value);
}


} // namespace webbind