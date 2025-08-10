#include <webbind/DocumentPictureInPictureEventInit.hpp>
#include <webbind/Window.hpp>

namespace webbind {

DocumentPictureInPictureEventInit::DocumentPictureInPictureEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit::take_ownership(Handle h) noexcept {
    return DocumentPictureInPictureEventInit(h);
}

DocumentPictureInPictureEventInit::DocumentPictureInPictureEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

DocumentPictureInPictureEventInit::DocumentPictureInPictureEventInit() noexcept: EventInit(emlite::Val::object()) {}

DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit::clone() const noexcept { return *this; }

Window DocumentPictureInPictureEventInit::window() const {
    return emlite::Val::get("window").as<Window>();
}

void DocumentPictureInPictureEventInit::window(const Window& value) {
    emlite::Val::set("window", value);
}


} // namespace webbind