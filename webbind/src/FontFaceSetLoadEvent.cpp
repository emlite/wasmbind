#include <webbind/FontFaceSetLoadEvent.hpp>
#include <webbind/FontFace.hpp>


FontFaceSetLoadEvent FontFaceSetLoadEvent::take_ownership(Handle h) noexcept {
        return FontFaceSetLoadEvent(h);
    }
FontFaceSetLoadEvent FontFaceSetLoadEvent::clone() const noexcept { return *this; }
FontFaceSetLoadEvent::FontFaceSetLoadEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
FontFaceSetLoadEvent::FontFaceSetLoadEvent(const emlite::Val &val) noexcept: Event(val) {}


FontFaceSetLoadEvent::FontFaceSetLoadEvent(const jsbind::String& type) : Event(emlite::Val::global("FontFaceSetLoadEvent").new_(type)) {}

FontFaceSetLoadEvent::FontFaceSetLoadEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("FontFaceSetLoadEvent").new_(type, eventInitDict)) {}

jsbind::TypedArray<FontFace> FontFaceSetLoadEvent::fontfaces() const {
    return Event::get("fontfaces").as<jsbind::TypedArray<FontFace>>();
}

