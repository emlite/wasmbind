#include <webbind/TextMetrics.hpp>

namespace webbind {

TextMetrics TextMetrics::take_ownership(Handle h) noexcept {
        return TextMetrics(h);
    }
TextMetrics TextMetrics::clone() const noexcept { return *this; }
emlite::Val TextMetrics::instance() noexcept { return emlite::Val::global("TextMetrics"); }
TextMetrics::TextMetrics(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextMetrics::TextMetrics(const emlite::Val &val) noexcept: emlite::Val(val) {}

double TextMetrics::width() const {
    return emlite::Val::get("width").as<double>();
}

double TextMetrics::actualBoundingBoxLeft() const {
    return emlite::Val::get("actualBoundingBoxLeft").as<double>();
}

double TextMetrics::actualBoundingBoxRight() const {
    return emlite::Val::get("actualBoundingBoxRight").as<double>();
}

double TextMetrics::fontBoundingBoxAscent() const {
    return emlite::Val::get("fontBoundingBoxAscent").as<double>();
}

double TextMetrics::fontBoundingBoxDescent() const {
    return emlite::Val::get("fontBoundingBoxDescent").as<double>();
}

double TextMetrics::actualBoundingBoxAscent() const {
    return emlite::Val::get("actualBoundingBoxAscent").as<double>();
}

double TextMetrics::actualBoundingBoxDescent() const {
    return emlite::Val::get("actualBoundingBoxDescent").as<double>();
}

double TextMetrics::emHeightAscent() const {
    return emlite::Val::get("emHeightAscent").as<double>();
}

double TextMetrics::emHeightDescent() const {
    return emlite::Val::get("emHeightDescent").as<double>();
}

double TextMetrics::hangingBaseline() const {
    return emlite::Val::get("hangingBaseline").as<double>();
}

double TextMetrics::alphabeticBaseline() const {
    return emlite::Val::get("alphabeticBaseline").as<double>();
}

double TextMetrics::ideographicBaseline() const {
    return emlite::Val::get("ideographicBaseline").as<double>();
}


} // namespace webbind