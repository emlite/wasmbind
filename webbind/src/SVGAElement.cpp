#include <webbind/SVGAElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/DOMTokenList.hpp>

namespace webbind {

SVGAElement SVGAElement::take_ownership(Handle h) noexcept {
        return SVGAElement(h);
    }
SVGAElement SVGAElement::clone() const noexcept { return *this; }
emlite::Val SVGAElement::instance() noexcept { return emlite::Val::global("SVGAElement"); }
SVGAElement::SVGAElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGAElement::SVGAElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedString SVGAElement::target() const {
    return SVGGraphicsElement::get("target").as<SVGAnimatedString>();
}

jsbind::String SVGAElement::download() const {
    return SVGGraphicsElement::get("download").as<jsbind::String>();
}

void SVGAElement::download(const jsbind::String& value) {
    SVGGraphicsElement::set("download", value);
}

jsbind::String SVGAElement::ping() const {
    return SVGGraphicsElement::get("ping").as<jsbind::String>();
}

void SVGAElement::ping(const jsbind::String& value) {
    SVGGraphicsElement::set("ping", value);
}

jsbind::String SVGAElement::rel() const {
    return SVGGraphicsElement::get("rel").as<jsbind::String>();
}

void SVGAElement::rel(const jsbind::String& value) {
    SVGGraphicsElement::set("rel", value);
}

DOMTokenList SVGAElement::relList() const {
    return SVGGraphicsElement::get("relList").as<DOMTokenList>();
}

jsbind::String SVGAElement::hreflang() const {
    return SVGGraphicsElement::get("hreflang").as<jsbind::String>();
}

void SVGAElement::hreflang(const jsbind::String& value) {
    SVGGraphicsElement::set("hreflang", value);
}

jsbind::String SVGAElement::type() const {
    return SVGGraphicsElement::get("type").as<jsbind::String>();
}

void SVGAElement::type(const jsbind::String& value) {
    SVGGraphicsElement::set("type", value);
}

jsbind::String SVGAElement::text() const {
    return SVGGraphicsElement::get("text").as<jsbind::String>();
}

void SVGAElement::text(const jsbind::String& value) {
    SVGGraphicsElement::set("text", value);
}

jsbind::String SVGAElement::referrerPolicy() const {
    return SVGGraphicsElement::get("referrerPolicy").as<jsbind::String>();
}

void SVGAElement::referrerPolicy(const jsbind::String& value) {
    SVGGraphicsElement::set("referrerPolicy", value);
}

jsbind::String SVGAElement::origin() const {
    return SVGGraphicsElement::get("origin").as<jsbind::String>();
}

jsbind::String SVGAElement::protocol() const {
    return SVGGraphicsElement::get("protocol").as<jsbind::String>();
}

void SVGAElement::protocol(const jsbind::String& value) {
    SVGGraphicsElement::set("protocol", value);
}

jsbind::String SVGAElement::username() const {
    return SVGGraphicsElement::get("username").as<jsbind::String>();
}

void SVGAElement::username(const jsbind::String& value) {
    SVGGraphicsElement::set("username", value);
}

jsbind::String SVGAElement::password() const {
    return SVGGraphicsElement::get("password").as<jsbind::String>();
}

void SVGAElement::password(const jsbind::String& value) {
    SVGGraphicsElement::set("password", value);
}

jsbind::String SVGAElement::host() const {
    return SVGGraphicsElement::get("host").as<jsbind::String>();
}

void SVGAElement::host(const jsbind::String& value) {
    SVGGraphicsElement::set("host", value);
}

jsbind::String SVGAElement::hostname() const {
    return SVGGraphicsElement::get("hostname").as<jsbind::String>();
}

void SVGAElement::hostname(const jsbind::String& value) {
    SVGGraphicsElement::set("hostname", value);
}

jsbind::String SVGAElement::port() const {
    return SVGGraphicsElement::get("port").as<jsbind::String>();
}

void SVGAElement::port(const jsbind::String& value) {
    SVGGraphicsElement::set("port", value);
}

jsbind::String SVGAElement::pathname() const {
    return SVGGraphicsElement::get("pathname").as<jsbind::String>();
}

void SVGAElement::pathname(const jsbind::String& value) {
    SVGGraphicsElement::set("pathname", value);
}

jsbind::String SVGAElement::search() const {
    return SVGGraphicsElement::get("search").as<jsbind::String>();
}

void SVGAElement::search(const jsbind::String& value) {
    SVGGraphicsElement::set("search", value);
}

jsbind::String SVGAElement::hash() const {
    return SVGGraphicsElement::get("hash").as<jsbind::String>();
}

void SVGAElement::hash(const jsbind::String& value) {
    SVGGraphicsElement::set("hash", value);
}

SVGAnimatedString SVGAElement::href() const {
    return SVGGraphicsElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind