#include <webbind/HTMLMediaElement.hpp>
#include <webbind/MediaError.hpp>
#include <webbind/TimeRanges.hpp>
#include <webbind/AudioTrackList.hpp>
#include <webbind/VideoTrackList.hpp>
#include <webbind/TextTrackList.hpp>
#include <webbind/TextTrack.hpp>
#include <webbind/MediaKeys.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RemotePlayback.hpp>


HTMLMediaElement HTMLMediaElement::take_ownership(Handle h) noexcept {
        return HTMLMediaElement(h);
    }
HTMLMediaElement HTMLMediaElement::clone() const noexcept { return *this; }
HTMLMediaElement::HTMLMediaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMediaElement::HTMLMediaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


MediaError HTMLMediaElement::error() const {
    return HTMLElement::get("error").as<MediaError>();
}

jsbind::USVString HTMLMediaElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLMediaElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::Any HTMLMediaElement::srcObject() const {
    return HTMLElement::get("srcObject").as<jsbind::Any>();
}

void HTMLMediaElement::srcObject(const jsbind::Any& value) {
    HTMLElement::set("srcObject", value);
}

jsbind::USVString HTMLMediaElement::currentSrc() const {
    return HTMLElement::get("currentSrc").as<jsbind::USVString>();
}

jsbind::DOMString HTMLMediaElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::DOMString>();
}

void HTMLMediaElement::crossOrigin(const jsbind::DOMString& value) {
    HTMLElement::set("crossOrigin", value);
}

unsigned short HTMLMediaElement::networkState() const {
    return HTMLElement::get("networkState").as<unsigned short>();
}

jsbind::DOMString HTMLMediaElement::preload() const {
    return HTMLElement::get("preload").as<jsbind::DOMString>();
}

void HTMLMediaElement::preload(const jsbind::DOMString& value) {
    HTMLElement::set("preload", value);
}

TimeRanges HTMLMediaElement::buffered() const {
    return HTMLElement::get("buffered").as<TimeRanges>();
}

jsbind::Undefined HTMLMediaElement::load() {
    return HTMLElement::call("load").as<jsbind::Undefined>();
}

CanPlayTypeResult HTMLMediaElement::canPlayType(const jsbind::DOMString& type) {
    return HTMLElement::call("canPlayType", type).as<CanPlayTypeResult>();
}

unsigned short HTMLMediaElement::readyState() const {
    return HTMLElement::get("readyState").as<unsigned short>();
}

bool HTMLMediaElement::seeking() const {
    return HTMLElement::get("seeking").as<bool>();
}

double HTMLMediaElement::currentTime() const {
    return HTMLElement::get("currentTime").as<double>();
}

void HTMLMediaElement::currentTime(double value) {
    HTMLElement::set("currentTime", value);
}

jsbind::Undefined HTMLMediaElement::fastSeek(double time) {
    return HTMLElement::call("fastSeek", time).as<jsbind::Undefined>();
}

double HTMLMediaElement::duration() const {
    return HTMLElement::get("duration").as<double>();
}

jsbind::Object HTMLMediaElement::getStartDate() {
    return HTMLElement::call("getStartDate").as<jsbind::Object>();
}

bool HTMLMediaElement::paused() const {
    return HTMLElement::get("paused").as<bool>();
}

double HTMLMediaElement::defaultPlaybackRate() const {
    return HTMLElement::get("defaultPlaybackRate").as<double>();
}

void HTMLMediaElement::defaultPlaybackRate(double value) {
    HTMLElement::set("defaultPlaybackRate", value);
}

double HTMLMediaElement::playbackRate() const {
    return HTMLElement::get("playbackRate").as<double>();
}

void HTMLMediaElement::playbackRate(double value) {
    HTMLElement::set("playbackRate", value);
}

bool HTMLMediaElement::preservesPitch() const {
    return HTMLElement::get("preservesPitch").as<bool>();
}

void HTMLMediaElement::preservesPitch(bool value) {
    HTMLElement::set("preservesPitch", value);
}

TimeRanges HTMLMediaElement::played() const {
    return HTMLElement::get("played").as<TimeRanges>();
}

TimeRanges HTMLMediaElement::seekable() const {
    return HTMLElement::get("seekable").as<TimeRanges>();
}

bool HTMLMediaElement::ended() const {
    return HTMLElement::get("ended").as<bool>();
}

bool HTMLMediaElement::autoplay() const {
    return HTMLElement::get("autoplay").as<bool>();
}

void HTMLMediaElement::autoplay(bool value) {
    HTMLElement::set("autoplay", value);
}

bool HTMLMediaElement::loop() const {
    return HTMLElement::get("loop").as<bool>();
}

void HTMLMediaElement::loop(bool value) {
    HTMLElement::set("loop", value);
}

jsbind::Promise<jsbind::Undefined> HTMLMediaElement::play() {
    return HTMLElement::call("play").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined HTMLMediaElement::pause() {
    return HTMLElement::call("pause").as<jsbind::Undefined>();
}

bool HTMLMediaElement::controls() const {
    return HTMLElement::get("controls").as<bool>();
}

void HTMLMediaElement::controls(bool value) {
    HTMLElement::set("controls", value);
}

double HTMLMediaElement::volume() const {
    return HTMLElement::get("volume").as<double>();
}

void HTMLMediaElement::volume(double value) {
    HTMLElement::set("volume", value);
}

bool HTMLMediaElement::muted() const {
    return HTMLElement::get("muted").as<bool>();
}

void HTMLMediaElement::muted(bool value) {
    HTMLElement::set("muted", value);
}

bool HTMLMediaElement::defaultMuted() const {
    return HTMLElement::get("defaultMuted").as<bool>();
}

void HTMLMediaElement::defaultMuted(bool value) {
    HTMLElement::set("defaultMuted", value);
}

AudioTrackList HTMLMediaElement::audioTracks() const {
    return HTMLElement::get("audioTracks").as<AudioTrackList>();
}

VideoTrackList HTMLMediaElement::videoTracks() const {
    return HTMLElement::get("videoTracks").as<VideoTrackList>();
}

TextTrackList HTMLMediaElement::textTracks() const {
    return HTMLElement::get("textTracks").as<TextTrackList>();
}

TextTrack HTMLMediaElement::addTextTrack(const TextTrackKind& kind) {
    return HTMLElement::call("addTextTrack", kind).as<TextTrack>();
}

TextTrack HTMLMediaElement::addTextTrack(const TextTrackKind& kind, const jsbind::DOMString& label) {
    return HTMLElement::call("addTextTrack", kind, label).as<TextTrack>();
}

TextTrack HTMLMediaElement::addTextTrack(const TextTrackKind& kind, const jsbind::DOMString& label, const jsbind::DOMString& language) {
    return HTMLElement::call("addTextTrack", kind, label, language).as<TextTrack>();
}

jsbind::DOMString HTMLMediaElement::sinkId() const {
    return HTMLElement::get("sinkId").as<jsbind::DOMString>();
}

jsbind::Promise<jsbind::Undefined> HTMLMediaElement::setSinkId(const jsbind::DOMString& sinkId) {
    return HTMLElement::call("setSinkId", sinkId).as<jsbind::Promise<jsbind::Undefined>>();
}

MediaKeys HTMLMediaElement::mediaKeys() const {
    return HTMLElement::get("mediaKeys").as<MediaKeys>();
}

jsbind::Any HTMLMediaElement::onencrypted() const {
    return HTMLElement::get("onencrypted").as<jsbind::Any>();
}

void HTMLMediaElement::onencrypted(const jsbind::Any& value) {
    HTMLElement::set("onencrypted", value);
}

jsbind::Any HTMLMediaElement::onwaitingforkey() const {
    return HTMLElement::get("onwaitingforkey").as<jsbind::Any>();
}

void HTMLMediaElement::onwaitingforkey(const jsbind::Any& value) {
    HTMLElement::set("onwaitingforkey", value);
}

jsbind::Promise<jsbind::Undefined> HTMLMediaElement::setMediaKeys(const MediaKeys& mediaKeys) {
    return HTMLElement::call("setMediaKeys", mediaKeys).as<jsbind::Promise<jsbind::Undefined>>();
}

MediaStream HTMLMediaElement::captureStream() {
    return HTMLElement::call("captureStream").as<MediaStream>();
}

RemotePlayback HTMLMediaElement::remote() const {
    return HTMLElement::get("remote").as<RemotePlayback>();
}

bool HTMLMediaElement::disableRemotePlayback() const {
    return HTMLElement::get("disableRemotePlayback").as<bool>();
}

void HTMLMediaElement::disableRemotePlayback(bool value) {
    HTMLElement::set("disableRemotePlayback", value);
}

