#include <webbind/PhotoSettings.hpp>

using emlite::Val;
namespace webbind {

PhotoSettings::PhotoSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PhotoSettings PhotoSettings::take_ownership(Handle h) noexcept {
        return PhotoSettings(h);
    }
PhotoSettings::PhotoSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
PhotoSettings::PhotoSettings() noexcept: emlite::Val(emlite::Val::object()) {}
PhotoSettings PhotoSettings::clone() const noexcept { return *this; }

FillLightMode PhotoSettings::fillLightMode() const {
    return emlite::Val::get("fillLightMode").as<FillLightMode>();
}

void PhotoSettings::fillLightMode(const FillLightMode& value) {
    emlite::Val::set("fillLightMode", value);
}

double PhotoSettings::imageHeight() const {
    return emlite::Val::get("imageHeight").as<double>();
}

void PhotoSettings::imageHeight(double value) {
    emlite::Val::set("imageHeight", value);
}

double PhotoSettings::imageWidth() const {
    return emlite::Val::get("imageWidth").as<double>();
}

void PhotoSettings::imageWidth(double value) {
    emlite::Val::set("imageWidth", value);
}

bool PhotoSettings::redEyeReduction() const {
    return emlite::Val::get("redEyeReduction").as<bool>();
}

void PhotoSettings::redEyeReduction(bool value) {
    emlite::Val::set("redEyeReduction", value);
}


} // namespace webbind