#include <webbind/ShadowRoot.hpp>
#include <webbind/Element.hpp>
#include <webbind/Animation.hpp>


ShadowRoot ShadowRoot::take_ownership(Handle h) noexcept {
        return ShadowRoot(h);
    }
ShadowRoot ShadowRoot::clone() const noexcept { return *this; }
emlite::Val ShadowRoot::instance() noexcept { return emlite::Val::global("ShadowRoot"); }
ShadowRoot::ShadowRoot(Handle h) noexcept : DocumentFragment(emlite::Val::take_ownership(h)) {}
ShadowRoot::ShadowRoot(const emlite::Val &val) noexcept: DocumentFragment(val) {}


ShadowRootMode ShadowRoot::mode() const {
    return DocumentFragment::get("mode").as<ShadowRootMode>();
}

bool ShadowRoot::delegatesFocus() const {
    return DocumentFragment::get("delegatesFocus").as<bool>();
}

SlotAssignmentMode ShadowRoot::slotAssignment() const {
    return DocumentFragment::get("slotAssignment").as<SlotAssignmentMode>();
}

bool ShadowRoot::clonable() const {
    return DocumentFragment::get("clonable").as<bool>();
}

bool ShadowRoot::serializable() const {
    return DocumentFragment::get("serializable").as<bool>();
}

Element ShadowRoot::host() const {
    return DocumentFragment::get("host").as<Element>();
}

jsbind::Any ShadowRoot::onslotchange() const {
    return DocumentFragment::get("onslotchange").as<jsbind::Any>();
}

void ShadowRoot::onslotchange(const jsbind::Any& value) {
    DocumentFragment::set("onslotchange", value);
}

jsbind::Undefined ShadowRoot::setHTMLUnsafe(const jsbind::Any& html) {
    return DocumentFragment::call("setHTMLUnsafe", html).as<jsbind::Undefined>();
}

jsbind::String ShadowRoot::getHTML() {
    return DocumentFragment::call("getHTML").as<jsbind::String>();
}

jsbind::String ShadowRoot::getHTML(const GetHTMLOptions& options) {
    return DocumentFragment::call("getHTML", options).as<jsbind::String>();
}

jsbind::Any ShadowRoot::innerHTML() const {
    return DocumentFragment::get("innerHTML").as<jsbind::Any>();
}

void ShadowRoot::innerHTML(const jsbind::Any& value) {
    DocumentFragment::set("innerHTML", value);
}

jsbind::TypedArray<Animation> ShadowRoot::getAnimations() {
    return DocumentFragment::call("getAnimations").as<jsbind::TypedArray<Animation>>();
}

