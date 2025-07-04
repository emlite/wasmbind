#include <webbind/MediaList.hpp>


MediaList MediaList::take_ownership(Handle h) noexcept {
        return MediaList(h);
    }
MediaList MediaList::clone() const noexcept { return *this; }
MediaList::MediaList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaList::MediaList(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::CSSOMString MediaList::mediaText() const {
    return emlite::Val::get("mediaText").as<jsbind::CSSOMString>();
}

void MediaList::mediaText(const jsbind::CSSOMString& value) {
    emlite::Val::set("mediaText", value);
}

unsigned long MediaList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::CSSOMString MediaList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::CSSOMString>();
}

jsbind::Undefined MediaList::appendMedium(const jsbind::CSSOMString& medium) {
    return emlite::Val::call("appendMedium", medium).as<jsbind::Undefined>();
}

jsbind::Undefined MediaList::deleteMedium(const jsbind::CSSOMString& medium) {
    return emlite::Val::call("deleteMedium", medium).as<jsbind::Undefined>();
}

