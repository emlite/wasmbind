#include <webbind/HTMLTrackElement.hpp>
#include <webbind/TextTrack.hpp>


HTMLTrackElement HTMLTrackElement::take_ownership(Handle h) noexcept {
        return HTMLTrackElement(h);
    }
HTMLTrackElement HTMLTrackElement::clone() const noexcept { return *this; }
HTMLTrackElement::HTMLTrackElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTrackElement::HTMLTrackElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTrackElement::HTMLTrackElement() : HTMLElement(emlite::Val::global("HTMLTrackElement").new_()) {}

jsbind::DOMString HTMLTrackElement::kind() const {
    return HTMLElement::get("kind").as<jsbind::DOMString>();
}

void HTMLTrackElement::kind(const jsbind::DOMString& value) {
    HTMLElement::set("kind", value);
}

jsbind::USVString HTMLTrackElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLTrackElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLTrackElement::srclang() const {
    return HTMLElement::get("srclang").as<jsbind::DOMString>();
}

void HTMLTrackElement::srclang(const jsbind::DOMString& value) {
    HTMLElement::set("srclang", value);
}

jsbind::DOMString HTMLTrackElement::label() const {
    return HTMLElement::get("label").as<jsbind::DOMString>();
}

void HTMLTrackElement::label(const jsbind::DOMString& value) {
    HTMLElement::set("label", value);
}

bool HTMLTrackElement::default_() const {
    return HTMLElement::get("default").as<bool>();
}

void HTMLTrackElement::default_(bool value) {
    HTMLElement::set("default", value);
}

unsigned short HTMLTrackElement::readyState() const {
    return HTMLElement::get("readyState").as<unsigned short>();
}

TextTrack HTMLTrackElement::track() const {
    return HTMLElement::get("track").as<TextTrack>();
}

