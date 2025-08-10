#include <webbind/ScreenDetailed.hpp>

namespace webbind {

ScreenDetailed ScreenDetailed::take_ownership(Handle h) noexcept {
        return ScreenDetailed(h);
    }
ScreenDetailed ScreenDetailed::clone() const noexcept { return *this; }
emlite::Val ScreenDetailed::instance() noexcept { return emlite::Val::global("ScreenDetailed"); }
ScreenDetailed::ScreenDetailed(Handle h) noexcept : Screen(emlite::Val::take_ownership(h)) {}
ScreenDetailed::ScreenDetailed(const emlite::Val &val) noexcept: Screen(val) {}

long ScreenDetailed::availLeft() const {
    return Screen::get("availLeft").as<long>();
}

long ScreenDetailed::availTop() const {
    return Screen::get("availTop").as<long>();
}

long ScreenDetailed::left() const {
    return Screen::get("left").as<long>();
}

long ScreenDetailed::top() const {
    return Screen::get("top").as<long>();
}

bool ScreenDetailed::isPrimary() const {
    return Screen::get("isPrimary").as<bool>();
}

bool ScreenDetailed::isInternal() const {
    return Screen::get("isInternal").as<bool>();
}

float ScreenDetailed::devicePixelRatio() const {
    return Screen::get("devicePixelRatio").as<float>();
}

jsbind::String ScreenDetailed::label() const {
    return Screen::get("label").as<jsbind::String>();
}


} // namespace webbind