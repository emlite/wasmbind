#include <webbind/TextTrackCueList.hpp>
#include <webbind/TextTrackCue.hpp>


TextTrackCueList TextTrackCueList::take_ownership(Handle h) noexcept {
        return TextTrackCueList(h);
    }
TextTrackCueList TextTrackCueList::clone() const noexcept { return *this; }
TextTrackCueList::TextTrackCueList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextTrackCueList::TextTrackCueList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long TextTrackCueList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

TextTrackCue TextTrackCueList::getCueById(const jsbind::DOMString& id) {
    return emlite::Val::call("getCueById", id).as<TextTrackCue>();
}

