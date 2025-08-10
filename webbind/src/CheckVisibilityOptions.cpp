#include <webbind/CheckVisibilityOptions.hpp>

namespace webbind {

CheckVisibilityOptions::CheckVisibilityOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CheckVisibilityOptions CheckVisibilityOptions::take_ownership(Handle h) noexcept {
    return CheckVisibilityOptions(h);
}

CheckVisibilityOptions::CheckVisibilityOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CheckVisibilityOptions::CheckVisibilityOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CheckVisibilityOptions CheckVisibilityOptions::clone() const noexcept { return *this; }

bool CheckVisibilityOptions::checkOpacity() const {
    return emlite::Val::get("checkOpacity").as<bool>();
}

void CheckVisibilityOptions::checkOpacity(bool value) {
    emlite::Val::set("checkOpacity", value);
}

bool CheckVisibilityOptions::checkVisibilityCSS() const {
    return emlite::Val::get("checkVisibilityCSS").as<bool>();
}

void CheckVisibilityOptions::checkVisibilityCSS(bool value) {
    emlite::Val::set("checkVisibilityCSS", value);
}

bool CheckVisibilityOptions::contentVisibilityAuto() const {
    return emlite::Val::get("contentVisibilityAuto").as<bool>();
}

void CheckVisibilityOptions::contentVisibilityAuto(bool value) {
    emlite::Val::set("contentVisibilityAuto", value);
}

bool CheckVisibilityOptions::opacityProperty() const {
    return emlite::Val::get("opacityProperty").as<bool>();
}

void CheckVisibilityOptions::opacityProperty(bool value) {
    emlite::Val::set("opacityProperty", value);
}

bool CheckVisibilityOptions::visibilityProperty() const {
    return emlite::Val::get("visibilityProperty").as<bool>();
}

void CheckVisibilityOptions::visibilityProperty(bool value) {
    emlite::Val::set("visibilityProperty", value);
}


} // namespace webbind