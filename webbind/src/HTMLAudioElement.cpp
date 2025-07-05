#include <webbind/HTMLAudioElement.hpp>


HTMLAudioElement HTMLAudioElement::take_ownership(Handle h) noexcept {
        return HTMLAudioElement(h);
    }
HTMLAudioElement HTMLAudioElement::clone() const noexcept { return *this; }
HTMLAudioElement::HTMLAudioElement(Handle h) noexcept : HTMLMediaElement(emlite::Val::take_ownership(h)) {}
HTMLAudioElement::HTMLAudioElement(const emlite::Val &val) noexcept: HTMLMediaElement(val) {}


HTMLAudioElement::HTMLAudioElement() : HTMLMediaElement(emlite::Val::global("HTMLAudioElement").new_()) {}

