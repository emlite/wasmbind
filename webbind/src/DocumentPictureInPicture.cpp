#include <webbind/DocumentPictureInPicture.hpp>
#include <webbind/Window.hpp>
#include <webbind/DocumentPictureInPictureOptions.hpp>

namespace webbind {

DocumentPictureInPicture DocumentPictureInPicture::take_ownership(Handle h) noexcept {
        return DocumentPictureInPicture(h);
    }
DocumentPictureInPicture DocumentPictureInPicture::clone() const noexcept { return *this; }
emlite::Val DocumentPictureInPicture::instance() noexcept { return emlite::Val::global("DocumentPictureInPicture"); }
DocumentPictureInPicture::DocumentPictureInPicture(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
DocumentPictureInPicture::DocumentPictureInPicture(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<Window> DocumentPictureInPicture::requestWindow() {
    return EventTarget::call("requestWindow").as<jsbind::Promise<Window>>();
}

jsbind::Promise<Window> DocumentPictureInPicture::requestWindow(const DocumentPictureInPictureOptions& options) {
    return EventTarget::call("requestWindow", options).as<jsbind::Promise<Window>>();
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


} // namespace webbind