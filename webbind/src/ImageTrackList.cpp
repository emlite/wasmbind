#include <webbind/ImageTrackList.hpp>
#include <webbind/ImageTrack.hpp>


ImageTrackList ImageTrackList::take_ownership(Handle h) noexcept {
        return ImageTrackList(h);
    }
ImageTrackList ImageTrackList::clone() const noexcept { return *this; }
ImageTrackList::ImageTrackList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageTrackList::ImageTrackList(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Undefined> ImageTrackList::ready() const {
    return emlite::Val::get("ready").as<jsbind::Promise<jsbind::Undefined>>();
}

unsigned long ImageTrackList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

long ImageTrackList::selectedIndex() const {
    return emlite::Val::get("selectedIndex").as<long>();
}

ImageTrack ImageTrackList::selectedTrack() const {
    return emlite::Val::get("selectedTrack").as<ImageTrack>();
}

