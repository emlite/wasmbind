#include <webbind/FontFaceSet.hpp>
#include <webbind/FontFace.hpp>


FontFaceSet FontFaceSet::take_ownership(Handle h) noexcept {
        return FontFaceSet(h);
    }
FontFaceSet FontFaceSet::clone() const noexcept { return *this; }
emlite::Val FontFaceSet::instance() noexcept { return emlite::Val::global("FontFaceSet"); }
FontFaceSet::FontFaceSet(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
FontFaceSet::FontFaceSet(const emlite::Val &val) noexcept: EventTarget(val) {}


FontFaceSet FontFaceSet::add(const FontFace& font) {
    return EventTarget::call("add", font).as<FontFaceSet>();
}

bool FontFaceSet::delete_(const FontFace& font) {
    return EventTarget::call("delete", font).as<bool>();
}

jsbind::Undefined FontFaceSet::clear() {
    return EventTarget::call("clear").as<jsbind::Undefined>();
}

jsbind::Any FontFaceSet::onloading() const {
    return EventTarget::get("onloading").as<jsbind::Any>();
}

void FontFaceSet::onloading(const jsbind::Any& value) {
    EventTarget::set("onloading", value);
}

jsbind::Any FontFaceSet::onloadingdone() const {
    return EventTarget::get("onloadingdone").as<jsbind::Any>();
}

void FontFaceSet::onloadingdone(const jsbind::Any& value) {
    EventTarget::set("onloadingdone", value);
}

jsbind::Any FontFaceSet::onloadingerror() const {
    return EventTarget::get("onloadingerror").as<jsbind::Any>();
}

void FontFaceSet::onloadingerror(const jsbind::Any& value) {
    EventTarget::set("onloadingerror", value);
}

jsbind::Promise<jsbind::TypedArray<FontFace>> FontFaceSet::load(const jsbind::String& font) {
    return EventTarget::call("load", font).as<jsbind::Promise<jsbind::TypedArray<FontFace>>>();
}

jsbind::Promise<jsbind::TypedArray<FontFace>> FontFaceSet::load(const jsbind::String& font, const jsbind::String& text) {
    return EventTarget::call("load", font, text).as<jsbind::Promise<jsbind::TypedArray<FontFace>>>();
}

bool FontFaceSet::check(const jsbind::String& font) {
    return EventTarget::call("check", font).as<bool>();
}

bool FontFaceSet::check(const jsbind::String& font, const jsbind::String& text) {
    return EventTarget::call("check", font, text).as<bool>();
}

jsbind::Promise<FontFaceSet> FontFaceSet::ready() const {
    return EventTarget::get("ready").as<jsbind::Promise<FontFaceSet>>();
}

FontFaceSetLoadStatus FontFaceSet::status() const {
    return EventTarget::get("status").as<FontFaceSetLoadStatus>();
}

