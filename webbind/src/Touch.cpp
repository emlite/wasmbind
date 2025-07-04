#include <webbind/Touch.hpp>
#include <webbind/EventTarget.hpp>


Touch Touch::take_ownership(Handle h) noexcept {
        return Touch(h);
    }
Touch Touch::clone() const noexcept { return *this; }
Touch::Touch(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Touch::Touch(const emlite::Val &val) noexcept: emlite::Val(val) {}


Touch::Touch(const jsbind::Any& touchInitDict): emlite::Val(emlite::Val::global("Touch").new_(touchInitDict)) {}

long Touch::identifier() const {
    return emlite::Val::get("identifier").as<long>();
}

EventTarget Touch::target() const {
    return emlite::Val::get("target").as<EventTarget>();
}

double Touch::screenX() const {
    return emlite::Val::get("screenX").as<double>();
}

double Touch::screenY() const {
    return emlite::Val::get("screenY").as<double>();
}

double Touch::clientX() const {
    return emlite::Val::get("clientX").as<double>();
}

double Touch::clientY() const {
    return emlite::Val::get("clientY").as<double>();
}

double Touch::pageX() const {
    return emlite::Val::get("pageX").as<double>();
}

double Touch::pageY() const {
    return emlite::Val::get("pageY").as<double>();
}

float Touch::radiusX() const {
    return emlite::Val::get("radiusX").as<float>();
}

float Touch::radiusY() const {
    return emlite::Val::get("radiusY").as<float>();
}

float Touch::rotationAngle() const {
    return emlite::Val::get("rotationAngle").as<float>();
}

float Touch::force() const {
    return emlite::Val::get("force").as<float>();
}

float Touch::altitudeAngle() const {
    return emlite::Val::get("altitudeAngle").as<float>();
}

float Touch::azimuthAngle() const {
    return emlite::Val::get("azimuthAngle").as<float>();
}

TouchType Touch::touchType() const {
    return emlite::Val::get("touchType").as<TouchType>();
}

