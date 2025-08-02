#include <webbind/FileReader.hpp>
#include <webbind/Blob.hpp>
#include <webbind/DOMException.hpp>


FileReader FileReader::take_ownership(Handle h) noexcept {
        return FileReader(h);
    }
FileReader FileReader::clone() const noexcept { return *this; }
emlite::Val FileReader::instance() noexcept { return emlite::Val::global("FileReader"); }
FileReader::FileReader(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
FileReader::FileReader(const emlite::Val &val) noexcept: EventTarget(val) {}


FileReader::FileReader() : EventTarget(emlite::Val::global("FileReader").new_()) {}

jsbind::Undefined FileReader::readAsArrayBuffer(const Blob& blob) {
    return EventTarget::call("readAsArrayBuffer", blob).as<jsbind::Undefined>();
}

jsbind::Undefined FileReader::readAsBinaryString(const Blob& blob) {
    return EventTarget::call("readAsBinaryString", blob).as<jsbind::Undefined>();
}

jsbind::Undefined FileReader::readAsText(const Blob& blob) {
    return EventTarget::call("readAsText", blob).as<jsbind::Undefined>();
}

jsbind::Undefined FileReader::readAsText(const Blob& blob, const jsbind::String& encoding) {
    return EventTarget::call("readAsText", blob, encoding).as<jsbind::Undefined>();
}

jsbind::Undefined FileReader::readAsDataURL(const Blob& blob) {
    return EventTarget::call("readAsDataURL", blob).as<jsbind::Undefined>();
}

jsbind::Undefined FileReader::abort() {
    return EventTarget::call("abort").as<jsbind::Undefined>();
}

unsigned short FileReader::readyState() const {
    return EventTarget::get("readyState").as<unsigned short>();
}

jsbind::Any FileReader::result() const {
    return EventTarget::get("result").as<jsbind::Any>();
}

DOMException FileReader::error() const {
    return EventTarget::get("error").as<DOMException>();
}

jsbind::Any FileReader::onloadstart() const {
    return EventTarget::get("onloadstart").as<jsbind::Any>();
}

void FileReader::onloadstart(const jsbind::Any& value) {
    EventTarget::set("onloadstart", value);
}

jsbind::Any FileReader::onprogress() const {
    return EventTarget::get("onprogress").as<jsbind::Any>();
}

void FileReader::onprogress(const jsbind::Any& value) {
    EventTarget::set("onprogress", value);
}

jsbind::Any FileReader::onload() const {
    return EventTarget::get("onload").as<jsbind::Any>();
}

void FileReader::onload(const jsbind::Any& value) {
    EventTarget::set("onload", value);
}

jsbind::Any FileReader::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void FileReader::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

jsbind::Any FileReader::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void FileReader::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any FileReader::onloadend() const {
    return EventTarget::get("onloadend").as<jsbind::Any>();
}

void FileReader::onloadend(const jsbind::Any& value) {
    EventTarget::set("onloadend", value);
}

