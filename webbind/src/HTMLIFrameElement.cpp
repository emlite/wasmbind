#include <webbind/HTMLIFrameElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/Document.hpp>
#include <webbind/PermissionsPolicy.hpp>


HTMLIFrameElement HTMLIFrameElement::take_ownership(Handle h) noexcept {
        return HTMLIFrameElement(h);
    }
HTMLIFrameElement HTMLIFrameElement::clone() const noexcept { return *this; }
HTMLIFrameElement::HTMLIFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLIFrameElement::HTMLIFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLIFrameElement::HTMLIFrameElement() : HTMLElement(emlite::Val::global("HTMLIFrameElement").new_()) {}

jsbind::USVString HTMLIFrameElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLIFrameElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::Any HTMLIFrameElement::srcdoc() const {
    return HTMLElement::get("srcdoc").as<jsbind::Any>();
}

void HTMLIFrameElement::srcdoc(const jsbind::Any& value) {
    HTMLElement::set("srcdoc", value);
}

jsbind::DOMString HTMLIFrameElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLIFrameElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

DOMTokenList HTMLIFrameElement::sandbox() const {
    return HTMLElement::get("sandbox").as<DOMTokenList>();
}

jsbind::DOMString HTMLIFrameElement::allow() const {
    return HTMLElement::get("allow").as<jsbind::DOMString>();
}

void HTMLIFrameElement::allow(const jsbind::DOMString& value) {
    HTMLElement::set("allow", value);
}

bool HTMLIFrameElement::allowFullscreen() const {
    return HTMLElement::get("allowFullscreen").as<bool>();
}

void HTMLIFrameElement::allowFullscreen(bool value) {
    HTMLElement::set("allowFullscreen", value);
}

jsbind::DOMString HTMLIFrameElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLIFrameElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::DOMString HTMLIFrameElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLIFrameElement::height(const jsbind::DOMString& value) {
    HTMLElement::set("height", value);
}

jsbind::DOMString HTMLIFrameElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLIFrameElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::DOMString HTMLIFrameElement::loading() const {
    return HTMLElement::get("loading").as<jsbind::DOMString>();
}

void HTMLIFrameElement::loading(const jsbind::DOMString& value) {
    HTMLElement::set("loading", value);
}

Document HTMLIFrameElement::contentDocument() const {
    return HTMLElement::get("contentDocument").as<Document>();
}

jsbind::Any HTMLIFrameElement::contentWindow() const {
    return HTMLElement::get("contentWindow").as<jsbind::Any>();
}

Document HTMLIFrameElement::getSVGDocument() {
    return HTMLElement::call("getSVGDocument").as<Document>();
}

bool HTMLIFrameElement::credentialless() const {
    return HTMLElement::get("credentialless").as<bool>();
}

void HTMLIFrameElement::credentialless(bool value) {
    HTMLElement::set("credentialless", value);
}

jsbind::DOMString HTMLIFrameElement::csp() const {
    return HTMLElement::get("csp").as<jsbind::DOMString>();
}

void HTMLIFrameElement::csp(const jsbind::DOMString& value) {
    HTMLElement::set("csp", value);
}

jsbind::DOMString HTMLIFrameElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLIFrameElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLIFrameElement::scrolling() const {
    return HTMLElement::get("scrolling").as<jsbind::DOMString>();
}

void HTMLIFrameElement::scrolling(const jsbind::DOMString& value) {
    HTMLElement::set("scrolling", value);
}

jsbind::DOMString HTMLIFrameElement::frameBorder() const {
    return HTMLElement::get("frameBorder").as<jsbind::DOMString>();
}

void HTMLIFrameElement::frameBorder(const jsbind::DOMString& value) {
    HTMLElement::set("frameBorder", value);
}

jsbind::USVString HTMLIFrameElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::USVString>();
}

void HTMLIFrameElement::longDesc(const jsbind::USVString& value) {
    HTMLElement::set("longDesc", value);
}

jsbind::DOMString HTMLIFrameElement::marginHeight() const {
    return HTMLElement::get("marginHeight").as<jsbind::DOMString>();
}

void HTMLIFrameElement::marginHeight(const jsbind::DOMString& value) {
    HTMLElement::set("marginHeight", value);
}

jsbind::DOMString HTMLIFrameElement::marginWidth() const {
    return HTMLElement::get("marginWidth").as<jsbind::DOMString>();
}

void HTMLIFrameElement::marginWidth(const jsbind::DOMString& value) {
    HTMLElement::set("marginWidth", value);
}

PermissionsPolicy HTMLIFrameElement::permissionsPolicy() const {
    return HTMLElement::get("permissionsPolicy").as<PermissionsPolicy>();
}

jsbind::DOMString HTMLIFrameElement::privateToken() const {
    return HTMLElement::get("privateToken").as<jsbind::DOMString>();
}

void HTMLIFrameElement::privateToken(const jsbind::DOMString& value) {
    HTMLElement::set("privateToken", value);
}

bool HTMLIFrameElement::adAuctionHeaders() const {
    return HTMLElement::get("adAuctionHeaders").as<bool>();
}

void HTMLIFrameElement::adAuctionHeaders(bool value) {
    HTMLElement::set("adAuctionHeaders", value);
}

bool HTMLIFrameElement::sharedStorageWritable() const {
    return HTMLElement::get("sharedStorageWritable").as<bool>();
}

void HTMLIFrameElement::sharedStorageWritable(bool value) {
    HTMLElement::set("sharedStorageWritable", value);
}

