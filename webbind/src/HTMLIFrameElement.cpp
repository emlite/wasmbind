#include "webbind/HTMLIFrameElement.hpp"
#include "webbind/DOMTokenList.hpp"
#include "webbind/Document.hpp"
#include "webbind/PermissionsPolicy.hpp"

namespace webbind {

HTMLIFrameElement HTMLIFrameElement::take_ownership(Handle h) noexcept {
        return HTMLIFrameElement(h);
    }
HTMLIFrameElement HTMLIFrameElement::clone() const noexcept { return *this; }
emlite::Val HTMLIFrameElement::instance() noexcept { return emlite::Val::global("HTMLIFrameElement"); }
HTMLIFrameElement::HTMLIFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLIFrameElement::HTMLIFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLIFrameElement::HTMLIFrameElement() : HTMLElement(emlite::Val::global("HTMLIFrameElement").new_()) {}

jsbind::String HTMLIFrameElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLIFrameElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::Any HTMLIFrameElement::srcdoc() const {
    return HTMLElement::get("srcdoc").as<jsbind::Any>();
}

void HTMLIFrameElement::srcdoc(const jsbind::Any& value) {
    HTMLElement::set("srcdoc", value);
}

jsbind::String HTMLIFrameElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLIFrameElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

DOMTokenList HTMLIFrameElement::sandbox() const {
    return HTMLElement::get("sandbox").as<DOMTokenList>();
}

jsbind::String HTMLIFrameElement::allow() const {
    return HTMLElement::get("allow").as<jsbind::String>();
}

void HTMLIFrameElement::allow(const jsbind::String& value) {
    HTMLElement::set("allow", value);
}

bool HTMLIFrameElement::allowFullscreen() const {
    return HTMLElement::get("allowFullscreen").as<bool>();
}

void HTMLIFrameElement::allowFullscreen(bool value) {
    HTMLElement::set("allowFullscreen", value);
}

jsbind::String HTMLIFrameElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLIFrameElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLIFrameElement::height() const {
    return HTMLElement::get("height").as<jsbind::String>();
}

void HTMLIFrameElement::height(const jsbind::String& value) {
    HTMLElement::set("height", value);
}

jsbind::String HTMLIFrameElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLIFrameElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::String HTMLIFrameElement::loading() const {
    return HTMLElement::get("loading").as<jsbind::String>();
}

void HTMLIFrameElement::loading(const jsbind::String& value) {
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

jsbind::String HTMLIFrameElement::csp() const {
    return HTMLElement::get("csp").as<jsbind::String>();
}

void HTMLIFrameElement::csp(const jsbind::String& value) {
    HTMLElement::set("csp", value);
}

jsbind::String HTMLIFrameElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLIFrameElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLIFrameElement::scrolling() const {
    return HTMLElement::get("scrolling").as<jsbind::String>();
}

void HTMLIFrameElement::scrolling(const jsbind::String& value) {
    HTMLElement::set("scrolling", value);
}

jsbind::String HTMLIFrameElement::frameBorder() const {
    return HTMLElement::get("frameBorder").as<jsbind::String>();
}

void HTMLIFrameElement::frameBorder(const jsbind::String& value) {
    HTMLElement::set("frameBorder", value);
}

jsbind::String HTMLIFrameElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::String>();
}

void HTMLIFrameElement::longDesc(const jsbind::String& value) {
    HTMLElement::set("longDesc", value);
}

jsbind::String HTMLIFrameElement::marginHeight() const {
    return HTMLElement::get("marginHeight").as<jsbind::String>();
}

void HTMLIFrameElement::marginHeight(const jsbind::String& value) {
    HTMLElement::set("marginHeight", value);
}

jsbind::String HTMLIFrameElement::marginWidth() const {
    return HTMLElement::get("marginWidth").as<jsbind::String>();
}

void HTMLIFrameElement::marginWidth(const jsbind::String& value) {
    HTMLElement::set("marginWidth", value);
}

PermissionsPolicy HTMLIFrameElement::permissionsPolicy() const {
    return HTMLElement::get("permissionsPolicy").as<PermissionsPolicy>();
}

jsbind::String HTMLIFrameElement::privateToken() const {
    return HTMLElement::get("privateToken").as<jsbind::String>();
}

void HTMLIFrameElement::privateToken(const jsbind::String& value) {
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


} // namespace webbind