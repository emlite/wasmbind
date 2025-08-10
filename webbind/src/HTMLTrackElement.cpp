#include <webbind/HTMLTrackElement.hpp>
#include <webbind/TextTrack.hpp>

namespace webbind {

HTMLTrackElement HTMLTrackElement::take_ownership(Handle h) noexcept {
        return HTMLTrackElement(h);
    }
HTMLTrackElement HTMLTrackElement::clone() const noexcept { return *this; }
emlite::Val HTMLTrackElement::instance() noexcept { return emlite::Val::global("HTMLTrackElement"); }
HTMLTrackElement::HTMLTrackElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTrackElement::HTMLTrackElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTrackElement::HTMLTrackElement() : HTMLElement(emlite::Val::global("HTMLTrackElement").new_()) {}

jsbind::String HTMLTrackElement::kind() const {
    return HTMLElement::get("kind").as<jsbind::String>();
}

void HTMLTrackElement::kind(const jsbind::String& value) {
    HTMLElement::set("kind", value);
}

jsbind::String HTMLTrackElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLTrackElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLTrackElement::srclang() const {
    return HTMLElement::get("srclang").as<jsbind::String>();
}

void HTMLTrackElement::srclang(const jsbind::String& value) {
    HTMLElement::set("srclang", value);
}

jsbind::String HTMLTrackElement::label() const {
    return HTMLElement::get("label").as<jsbind::String>();
}

void HTMLTrackElement::label(const jsbind::String& value) {
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


} // namespace webbind