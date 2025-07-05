#include <webbind/DocumentPictureInPicture.hpp>
#include <webbind/Window.hpp>


DocumentPictureInPictureOptions::DocumentPictureInPictureOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DocumentPictureInPictureOptions DocumentPictureInPictureOptions::take_ownership(Handle h) noexcept {
        return DocumentPictureInPictureOptions(h);
    }
DocumentPictureInPictureOptions::DocumentPictureInPictureOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DocumentPictureInPictureOptions::DocumentPictureInPictureOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DocumentPictureInPictureOptions DocumentPictureInPictureOptions::clone() const noexcept { return *this; }

long long DocumentPictureInPictureOptions::width() const {
    return emlite::Val::get("width").as<long long>();
}

void DocumentPictureInPictureOptions::width(long long value) {
    emlite::Val::set("width", value);
}

long long DocumentPictureInPictureOptions::height() const {
    return emlite::Val::get("height").as<long long>();
}

void DocumentPictureInPictureOptions::height(long long value) {
    emlite::Val::set("height", value);
}

bool DocumentPictureInPictureOptions::disallowReturnToOpener() const {
    return emlite::Val::get("disallowReturnToOpener").as<bool>();
}

void DocumentPictureInPictureOptions::disallowReturnToOpener(bool value) {
    emlite::Val::set("disallowReturnToOpener", value);
}

bool DocumentPictureInPictureOptions::preferInitialWindowPlacement() const {
    return emlite::Val::get("preferInitialWindowPlacement").as<bool>();
}

void DocumentPictureInPictureOptions::preferInitialWindowPlacement(bool value) {
    emlite::Val::set("preferInitialWindowPlacement", value);
}

DocumentPictureInPicture DocumentPictureInPicture::take_ownership(Handle h) noexcept {
        return DocumentPictureInPicture(h);
    }
DocumentPictureInPicture DocumentPictureInPicture::clone() const noexcept { return *this; }
DocumentPictureInPicture::DocumentPictureInPicture(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
DocumentPictureInPicture::DocumentPictureInPicture(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise DocumentPictureInPicture::requestWindow() {
    return EventTarget::call("requestWindow").as<jsbind::Promise>();
}

jsbind::Promise DocumentPictureInPicture::requestWindow(const DocumentPictureInPictureOptions& options) {
    return EventTarget::call("requestWindow", options).as<jsbind::Promise>();
}

Window DocumentPictureInPicture::window() const {
    return EventTarget::get("window").as<Window>();
}

jsbind::Any DocumentPictureInPicture::onenter() const {
    return EventTarget::get("onenter").as<jsbind::Any>();
}

void DocumentPictureInPicture::onenter(const jsbind::Any& value) {
    EventTarget::set("onenter", value);
}

