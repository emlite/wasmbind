#include <webbind/Screen.hpp>
#include <webbind/ScreenOrientation.hpp>


Screen Screen::take_ownership(Handle h) noexcept {
        return Screen(h);
    }
Screen Screen::clone() const noexcept { return *this; }
emlite::Val Screen::instance() noexcept { return emlite::Val::global("Screen"); }
Screen::Screen(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Screen::Screen(const emlite::Val &val) noexcept: emlite::Val(val) {}


long Screen::availWidth() const {
    return emlite::Val::get("availWidth").as<long>();
}

long Screen::availHeight() const {
    return emlite::Val::get("availHeight").as<long>();
}

long Screen::width() const {
    return emlite::Val::get("width").as<long>();
}

long Screen::height() const {
    return emlite::Val::get("height").as<long>();
}

unsigned long Screen::colorDepth() const {
    return emlite::Val::get("colorDepth").as<unsigned long>();
}

unsigned long Screen::pixelDepth() const {
    return emlite::Val::get("pixelDepth").as<unsigned long>();
}

ScreenOrientation Screen::orientation() const {
    return emlite::Val::get("orientation").as<ScreenOrientation>();
}

bool Screen::isExtended() const {
    return emlite::Val::get("isExtended").as<bool>();
}

jsbind::Any Screen::onchange() const {
    return emlite::Val::get("onchange").as<jsbind::Any>();
}

void Screen::onchange(const jsbind::Any& value) {
    emlite::Val::set("onchange", value);
}

