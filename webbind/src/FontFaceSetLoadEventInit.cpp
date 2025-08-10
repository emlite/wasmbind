#include <webbind/FontFaceSetLoadEventInit.hpp>
#include <webbind/FontFace.hpp>

namespace webbind {

FontFaceSetLoadEventInit::FontFaceSetLoadEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
FontFaceSetLoadEventInit FontFaceSetLoadEventInit::take_ownership(Handle h) noexcept {
    return FontFaceSetLoadEventInit(h);
}

FontFaceSetLoadEventInit::FontFaceSetLoadEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

FontFaceSetLoadEventInit::FontFaceSetLoadEventInit() noexcept: EventInit(emlite::Val::object()) {}

FontFaceSetLoadEventInit FontFaceSetLoadEventInit::clone() const noexcept { return *this; }

jsbind::TypedArray<FontFace> FontFaceSetLoadEventInit::fontfaces() const {
    return emlite::Val::get("fontfaces").as<jsbind::TypedArray<FontFace>>();
}

void FontFaceSetLoadEventInit::fontfaces(const jsbind::TypedArray<FontFace>& value) {
    emlite::Val::set("fontfaces", value);
}


} // namespace webbind