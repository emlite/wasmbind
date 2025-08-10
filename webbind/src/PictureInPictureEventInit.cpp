#include <webbind/PictureInPictureEventInit.hpp>
#include <webbind/PictureInPictureWindow.hpp>

namespace webbind {

PictureInPictureEventInit::PictureInPictureEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PictureInPictureEventInit PictureInPictureEventInit::take_ownership(Handle h) noexcept {
    return PictureInPictureEventInit(h);
}

PictureInPictureEventInit::PictureInPictureEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

PictureInPictureEventInit::PictureInPictureEventInit() noexcept: EventInit(emlite::Val::object()) {}

PictureInPictureEventInit PictureInPictureEventInit::clone() const noexcept { return *this; }

PictureInPictureWindow PictureInPictureEventInit::pictureInPictureWindow() const {
    return emlite::Val::get("pictureInPictureWindow").as<PictureInPictureWindow>();
}

void PictureInPictureEventInit::pictureInPictureWindow(const PictureInPictureWindow& value) {
    emlite::Val::set("pictureInPictureWindow", value);
}


} // namespace webbind