#include "webbind/MediaSettingsRange.hpp"

using emlite::Val;
namespace webbind {

MediaSettingsRange::MediaSettingsRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaSettingsRange MediaSettingsRange::take_ownership(Handle h) noexcept {
        return MediaSettingsRange(h);
    }
MediaSettingsRange::MediaSettingsRange(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaSettingsRange::MediaSettingsRange() noexcept: emlite::Val(emlite::Val::object()) {}
MediaSettingsRange MediaSettingsRange::clone() const noexcept { return *this; }

double MediaSettingsRange::max() const {
    return emlite::Val::get("max").as<double>();
}

void MediaSettingsRange::max(double value) {
    emlite::Val::set("max", value);
}

double MediaSettingsRange::min() const {
    return emlite::Val::get("min").as<double>();
}

void MediaSettingsRange::min(double value) {
    emlite::Val::set("min", value);
}

double MediaSettingsRange::step() const {
    return emlite::Val::get("step").as<double>();
}

void MediaSettingsRange::step(double value) {
    emlite::Val::set("step", value);
}


} // namespace webbind