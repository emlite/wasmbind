#include <webbind/FontFaceVariationAxis.hpp>

namespace webbind {

FontFaceVariationAxis FontFaceVariationAxis::take_ownership(Handle h) noexcept {
    return FontFaceVariationAxis(h);
}

FontFaceVariationAxis FontFaceVariationAxis::clone() const noexcept { return *this; }

emlite::Val FontFaceVariationAxis::instance() noexcept { return emlite::Val::global("FontFaceVariationAxis"); }

FontFaceVariationAxis::FontFaceVariationAxis(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FontFaceVariationAxis::FontFaceVariationAxis(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String FontFaceVariationAxis::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String FontFaceVariationAxis::axisTag() const {
    return emlite::Val::get("axisTag").as<jsbind::String>();
}

double FontFaceVariationAxis::minimumValue() const {
    return emlite::Val::get("minimumValue").as<double>();
}

double FontFaceVariationAxis::maximumValue() const {
    return emlite::Val::get("maximumValue").as<double>();
}

double FontFaceVariationAxis::defaultValue() const {
    return emlite::Val::get("defaultValue").as<double>();
}


} // namespace webbind