#include <webbind/SVGAElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/DOMTokenList.hpp>


SVGAElement SVGAElement::take_ownership(Handle h) noexcept {
        return SVGAElement(h);
    }
SVGAElement SVGAElement::clone() const noexcept { return *this; }
SVGAElement::SVGAElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGAElement::SVGAElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


SVGAnimatedString SVGAElement::target() const {
    return SVGGraphicsElement::get("target").as<SVGAnimatedString>();
}

jsbind::DOMString SVGAElement::download() const {
    return SVGGraphicsElement::get("download").as<jsbind::DOMString>();
}

void SVGAElement::download(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("download", value);
}

jsbind::USVString SVGAElement::ping() const {
    return SVGGraphicsElement::get("ping").as<jsbind::USVString>();
}

void SVGAElement::ping(const jsbind::USVString& value) {
    SVGGraphicsElement::set("ping", value);
}

jsbind::DOMString SVGAElement::rel() const {
    return SVGGraphicsElement::get("rel").as<jsbind::DOMString>();
}

void SVGAElement::rel(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("rel", value);
}

DOMTokenList SVGAElement::relList() const {
    return SVGGraphicsElement::get("relList").as<DOMTokenList>();
}

jsbind::DOMString SVGAElement::hreflang() const {
    return SVGGraphicsElement::get("hreflang").as<jsbind::DOMString>();
}

void SVGAElement::hreflang(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("hreflang", value);
}

jsbind::DOMString SVGAElement::type() const {
    return SVGGraphicsElement::get("type").as<jsbind::DOMString>();
}

void SVGAElement::type(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("type", value);
}

jsbind::DOMString SVGAElement::text() const {
    return SVGGraphicsElement::get("text").as<jsbind::DOMString>();
}

void SVGAElement::text(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("text", value);
}

jsbind::DOMString SVGAElement::referrerPolicy() const {
    return SVGGraphicsElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void SVGAElement::referrerPolicy(const jsbind::DOMString& value) {
    SVGGraphicsElement::set("referrerPolicy", value);
}

jsbind::USVString SVGAElement::origin() const {
    return SVGGraphicsElement::get("origin").as<jsbind::USVString>();
}

jsbind::USVString SVGAElement::protocol() const {
    return SVGGraphicsElement::get("protocol").as<jsbind::USVString>();
}

void SVGAElement::protocol(const jsbind::USVString& value) {
    SVGGraphicsElement::set("protocol", value);
}

jsbind::USVString SVGAElement::username() const {
    return SVGGraphicsElement::get("username").as<jsbind::USVString>();
}

void SVGAElement::username(const jsbind::USVString& value) {
    SVGGraphicsElement::set("username", value);
}

jsbind::USVString SVGAElement::password() const {
    return SVGGraphicsElement::get("password").as<jsbind::USVString>();
}

void SVGAElement::password(const jsbind::USVString& value) {
    SVGGraphicsElement::set("password", value);
}

jsbind::USVString SVGAElement::host() const {
    return SVGGraphicsElement::get("host").as<jsbind::USVString>();
}

void SVGAElement::host(const jsbind::USVString& value) {
    SVGGraphicsElement::set("host", value);
}

jsbind::USVString SVGAElement::hostname() const {
    return SVGGraphicsElement::get("hostname").as<jsbind::USVString>();
}

void SVGAElement::hostname(const jsbind::USVString& value) {
    SVGGraphicsElement::set("hostname", value);
}

jsbind::USVString SVGAElement::port() const {
    return SVGGraphicsElement::get("port").as<jsbind::USVString>();
}

void SVGAElement::port(const jsbind::USVString& value) {
    SVGGraphicsElement::set("port", value);
}

jsbind::USVString SVGAElement::pathname() const {
    return SVGGraphicsElement::get("pathname").as<jsbind::USVString>();
}

void SVGAElement::pathname(const jsbind::USVString& value) {
    SVGGraphicsElement::set("pathname", value);
}

jsbind::USVString SVGAElement::search() const {
    return SVGGraphicsElement::get("search").as<jsbind::USVString>();
}

void SVGAElement::search(const jsbind::USVString& value) {
    SVGGraphicsElement::set("search", value);
}

jsbind::USVString SVGAElement::hash() const {
    return SVGGraphicsElement::get("hash").as<jsbind::USVString>();
}

void SVGAElement::hash(const jsbind::USVString& value) {
    SVGGraphicsElement::set("hash", value);
}

SVGAnimatedString SVGAElement::href() const {
    return SVGGraphicsElement::get("href").as<SVGAnimatedString>();
}

