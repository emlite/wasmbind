#include <webbind/PannerOptions.hpp>

namespace webbind {

PannerOptions::PannerOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
PannerOptions PannerOptions::take_ownership(Handle h) noexcept {
    return PannerOptions(h);
}

PannerOptions::PannerOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}

PannerOptions::PannerOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}

PannerOptions PannerOptions::clone() const noexcept { return *this; }

PanningModelType PannerOptions::panningModel() const {
    return emlite::Val::get("panningModel").as<PanningModelType>();
}

void PannerOptions::panningModel(const PanningModelType& value) {
    emlite::Val::set("panningModel", value);
}

DistanceModelType PannerOptions::distanceModel() const {
    return emlite::Val::get("distanceModel").as<DistanceModelType>();
}

void PannerOptions::distanceModel(const DistanceModelType& value) {
    emlite::Val::set("distanceModel", value);
}

float PannerOptions::positionX() const {
    return emlite::Val::get("positionX").as<float>();
}

void PannerOptions::positionX(float value) {
    emlite::Val::set("positionX", value);
}

float PannerOptions::positionY() const {
    return emlite::Val::get("positionY").as<float>();
}

void PannerOptions::positionY(float value) {
    emlite::Val::set("positionY", value);
}

float PannerOptions::positionZ() const {
    return emlite::Val::get("positionZ").as<float>();
}

void PannerOptions::positionZ(float value) {
    emlite::Val::set("positionZ", value);
}

float PannerOptions::orientationX() const {
    return emlite::Val::get("orientationX").as<float>();
}

void PannerOptions::orientationX(float value) {
    emlite::Val::set("orientationX", value);
}

float PannerOptions::orientationY() const {
    return emlite::Val::get("orientationY").as<float>();
}

void PannerOptions::orientationY(float value) {
    emlite::Val::set("orientationY", value);
}

float PannerOptions::orientationZ() const {
    return emlite::Val::get("orientationZ").as<float>();
}

void PannerOptions::orientationZ(float value) {
    emlite::Val::set("orientationZ", value);
}

double PannerOptions::refDistance() const {
    return emlite::Val::get("refDistance").as<double>();
}

void PannerOptions::refDistance(double value) {
    emlite::Val::set("refDistance", value);
}

double PannerOptions::maxDistance() const {
    return emlite::Val::get("maxDistance").as<double>();
}

void PannerOptions::maxDistance(double value) {
    emlite::Val::set("maxDistance", value);
}

double PannerOptions::rolloffFactor() const {
    return emlite::Val::get("rolloffFactor").as<double>();
}

void PannerOptions::rolloffFactor(double value) {
    emlite::Val::set("rolloffFactor", value);
}

double PannerOptions::coneInnerAngle() const {
    return emlite::Val::get("coneInnerAngle").as<double>();
}

void PannerOptions::coneInnerAngle(double value) {
    emlite::Val::set("coneInnerAngle", value);
}

double PannerOptions::coneOuterAngle() const {
    return emlite::Val::get("coneOuterAngle").as<double>();
}

void PannerOptions::coneOuterAngle(double value) {
    emlite::Val::set("coneOuterAngle", value);
}

double PannerOptions::coneOuterGain() const {
    return emlite::Val::get("coneOuterGain").as<double>();
}

void PannerOptions::coneOuterGain(double value) {
    emlite::Val::set("coneOuterGain", value);
}


} // namespace webbind