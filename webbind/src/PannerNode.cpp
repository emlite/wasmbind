#include <webbind/PannerNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


PannerNode PannerNode::take_ownership(Handle h) noexcept {
        return PannerNode(h);
    }
PannerNode PannerNode::clone() const noexcept { return *this; }
PannerNode::PannerNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
PannerNode::PannerNode(const emlite::Val &val) noexcept: AudioNode(val) {}


PannerNode::PannerNode(const BaseAudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("PannerNode").new_(context, options)) {}

PanningModelType PannerNode::panningModel() const {
    return AudioNode::get("panningModel").as<PanningModelType>();
}

void PannerNode::panningModel(const PanningModelType& value) {
    AudioNode::set("panningModel", value);
}

AudioParam PannerNode::positionX() const {
    return AudioNode::get("positionX").as<AudioParam>();
}

AudioParam PannerNode::positionY() const {
    return AudioNode::get("positionY").as<AudioParam>();
}

AudioParam PannerNode::positionZ() const {
    return AudioNode::get("positionZ").as<AudioParam>();
}

AudioParam PannerNode::orientationX() const {
    return AudioNode::get("orientationX").as<AudioParam>();
}

AudioParam PannerNode::orientationY() const {
    return AudioNode::get("orientationY").as<AudioParam>();
}

AudioParam PannerNode::orientationZ() const {
    return AudioNode::get("orientationZ").as<AudioParam>();
}

DistanceModelType PannerNode::distanceModel() const {
    return AudioNode::get("distanceModel").as<DistanceModelType>();
}

void PannerNode::distanceModel(const DistanceModelType& value) {
    AudioNode::set("distanceModel", value);
}

double PannerNode::refDistance() const {
    return AudioNode::get("refDistance").as<double>();
}

void PannerNode::refDistance(double value) {
    AudioNode::set("refDistance", value);
}

double PannerNode::maxDistance() const {
    return AudioNode::get("maxDistance").as<double>();
}

void PannerNode::maxDistance(double value) {
    AudioNode::set("maxDistance", value);
}

double PannerNode::rolloffFactor() const {
    return AudioNode::get("rolloffFactor").as<double>();
}

void PannerNode::rolloffFactor(double value) {
    AudioNode::set("rolloffFactor", value);
}

double PannerNode::coneInnerAngle() const {
    return AudioNode::get("coneInnerAngle").as<double>();
}

void PannerNode::coneInnerAngle(double value) {
    AudioNode::set("coneInnerAngle", value);
}

double PannerNode::coneOuterAngle() const {
    return AudioNode::get("coneOuterAngle").as<double>();
}

void PannerNode::coneOuterAngle(double value) {
    AudioNode::set("coneOuterAngle", value);
}

double PannerNode::coneOuterGain() const {
    return AudioNode::get("coneOuterGain").as<double>();
}

void PannerNode::coneOuterGain(double value) {
    AudioNode::set("coneOuterGain", value);
}

jsbind::Undefined PannerNode::setPosition(float x, float y, float z) {
    return AudioNode::call("setPosition", x, y, z).as<jsbind::Undefined>();
}

jsbind::Undefined PannerNode::setOrientation(float x, float y, float z) {
    return AudioNode::call("setOrientation", x, y, z).as<jsbind::Undefined>();
}

