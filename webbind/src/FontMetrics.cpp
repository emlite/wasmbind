#include <webbind/FontMetrics.hpp>
#include <webbind/Baseline.hpp>
#include <webbind/Font.hpp>


FontMetrics FontMetrics::take_ownership(Handle h) noexcept {
        return FontMetrics(h);
    }
FontMetrics FontMetrics::clone() const noexcept { return *this; }
FontMetrics::FontMetrics(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontMetrics::FontMetrics(const emlite::Val &val) noexcept: emlite::Val(val) {}


double FontMetrics::width() const {
    return emlite::Val::get("width").as<double>();
}

jsbind::TypedArray<double> FontMetrics::advances() const {
    return emlite::Val::get("advances").as<jsbind::TypedArray<double>>();
}

double FontMetrics::boundingBoxLeft() const {
    return emlite::Val::get("boundingBoxLeft").as<double>();
}

double FontMetrics::boundingBoxRight() const {
    return emlite::Val::get("boundingBoxRight").as<double>();
}

double FontMetrics::height() const {
    return emlite::Val::get("height").as<double>();
}

double FontMetrics::emHeightAscent() const {
    return emlite::Val::get("emHeightAscent").as<double>();
}

double FontMetrics::emHeightDescent() const {
    return emlite::Val::get("emHeightDescent").as<double>();
}

double FontMetrics::boundingBoxAscent() const {
    return emlite::Val::get("boundingBoxAscent").as<double>();
}

double FontMetrics::boundingBoxDescent() const {
    return emlite::Val::get("boundingBoxDescent").as<double>();
}

double FontMetrics::fontBoundingBoxAscent() const {
    return emlite::Val::get("fontBoundingBoxAscent").as<double>();
}

double FontMetrics::fontBoundingBoxDescent() const {
    return emlite::Val::get("fontBoundingBoxDescent").as<double>();
}

Baseline FontMetrics::dominantBaseline() const {
    return emlite::Val::get("dominantBaseline").as<Baseline>();
}

jsbind::TypedArray<Baseline> FontMetrics::baselines() const {
    return emlite::Val::get("baselines").as<jsbind::TypedArray<Baseline>>();
}

jsbind::TypedArray<Font> FontMetrics::fonts() const {
    return emlite::Val::get("fonts").as<jsbind::TypedArray<Font>>();
}

