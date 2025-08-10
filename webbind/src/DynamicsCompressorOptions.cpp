#include <webbind/DynamicsCompressorOptions.hpp>

using emlite::Val;
namespace webbind {

DynamicsCompressorOptions::DynamicsCompressorOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
DynamicsCompressorOptions DynamicsCompressorOptions::take_ownership(Handle h) noexcept {
        return DynamicsCompressorOptions(h);
    }
DynamicsCompressorOptions::DynamicsCompressorOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
DynamicsCompressorOptions::DynamicsCompressorOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
DynamicsCompressorOptions DynamicsCompressorOptions::clone() const noexcept { return *this; }

float DynamicsCompressorOptions::attack() const {
    return emlite::Val::get("attack").as<float>();
}

void DynamicsCompressorOptions::attack(float value) {
    emlite::Val::set("attack", value);
}

float DynamicsCompressorOptions::knee() const {
    return emlite::Val::get("knee").as<float>();
}

void DynamicsCompressorOptions::knee(float value) {
    emlite::Val::set("knee", value);
}

float DynamicsCompressorOptions::ratio() const {
    return emlite::Val::get("ratio").as<float>();
}

void DynamicsCompressorOptions::ratio(float value) {
    emlite::Val::set("ratio", value);
}

float DynamicsCompressorOptions::release() const {
    return emlite::Val::get("release").as<float>();
}

void DynamicsCompressorOptions::release(float value) {
    emlite::Val::set("release", value);
}

float DynamicsCompressorOptions::threshold() const {
    return emlite::Val::get("threshold").as<float>();
}

void DynamicsCompressorOptions::threshold(float value) {
    emlite::Val::set("threshold", value);
}


} // namespace webbind