#include <webbind/XRMediaBinding.hpp>
#include <webbind/XRQuadLayer.hpp>
#include <webbind/HTMLVideoElement.hpp>
#include <webbind/XRCylinderLayer.hpp>
#include <webbind/XREquirectLayer.hpp>
#include <webbind/XRRigidTransform.hpp>
#include <webbind/XRSession.hpp>


XRMediaQuadLayerInit::XRMediaQuadLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaQuadLayerInit XRMediaQuadLayerInit::take_ownership(Handle h) noexcept {
        return XRMediaQuadLayerInit(h);
    }
XRMediaQuadLayerInit::XRMediaQuadLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRMediaQuadLayerInit::XRMediaQuadLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRMediaQuadLayerInit XRMediaQuadLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaQuadLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaQuadLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaQuadLayerInit::width() const {
    return emlite::Val::get("width").as<float>();
}

void XRMediaQuadLayerInit::width(float value) {
    emlite::Val::set("width", value);
}

float XRMediaQuadLayerInit::height() const {
    return emlite::Val::get("height").as<float>();
}

void XRMediaQuadLayerInit::height(float value) {
    emlite::Val::set("height", value);
}

XRMediaCylinderLayerInit::XRMediaCylinderLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaCylinderLayerInit XRMediaCylinderLayerInit::take_ownership(Handle h) noexcept {
        return XRMediaCylinderLayerInit(h);
    }
XRMediaCylinderLayerInit::XRMediaCylinderLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRMediaCylinderLayerInit::XRMediaCylinderLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRMediaCylinderLayerInit XRMediaCylinderLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaCylinderLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaCylinderLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaCylinderLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRMediaCylinderLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRMediaCylinderLayerInit::centralAngle() const {
    return emlite::Val::get("centralAngle").as<float>();
}

void XRMediaCylinderLayerInit::centralAngle(float value) {
    emlite::Val::set("centralAngle", value);
}

float XRMediaCylinderLayerInit::aspectRatio() const {
    return emlite::Val::get("aspectRatio").as<float>();
}

void XRMediaCylinderLayerInit::aspectRatio(float value) {
    emlite::Val::set("aspectRatio", value);
}

XRMediaEquirectLayerInit::XRMediaEquirectLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaEquirectLayerInit XRMediaEquirectLayerInit::take_ownership(Handle h) noexcept {
        return XRMediaEquirectLayerInit(h);
    }
XRMediaEquirectLayerInit::XRMediaEquirectLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRMediaEquirectLayerInit::XRMediaEquirectLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRMediaEquirectLayerInit XRMediaEquirectLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaEquirectLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaEquirectLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaEquirectLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRMediaEquirectLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRMediaEquirectLayerInit::centralHorizontalAngle() const {
    return emlite::Val::get("centralHorizontalAngle").as<float>();
}

void XRMediaEquirectLayerInit::centralHorizontalAngle(float value) {
    emlite::Val::set("centralHorizontalAngle", value);
}

float XRMediaEquirectLayerInit::upperVerticalAngle() const {
    return emlite::Val::get("upperVerticalAngle").as<float>();
}

void XRMediaEquirectLayerInit::upperVerticalAngle(float value) {
    emlite::Val::set("upperVerticalAngle", value);
}

float XRMediaEquirectLayerInit::lowerVerticalAngle() const {
    return emlite::Val::get("lowerVerticalAngle").as<float>();
}

void XRMediaEquirectLayerInit::lowerVerticalAngle(float value) {
    emlite::Val::set("lowerVerticalAngle", value);
}

XRMediaBinding XRMediaBinding::take_ownership(Handle h) noexcept {
        return XRMediaBinding(h);
    }
XRMediaBinding XRMediaBinding::clone() const noexcept { return *this; }
XRMediaBinding::XRMediaBinding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaBinding::XRMediaBinding(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRMediaBinding::XRMediaBinding(const XRSession& session): emlite::Val(emlite::Val::global("XRMediaBinding").new_(session)) {}

XRQuadLayer XRMediaBinding::createQuadLayer(const HTMLVideoElement& video, const XRMediaQuadLayerInit& init) {
    return emlite::Val::call("createQuadLayer", video, init).as<XRQuadLayer>();
}

XRCylinderLayer XRMediaBinding::createCylinderLayer(const HTMLVideoElement& video, const XRMediaCylinderLayerInit& init) {
    return emlite::Val::call("createCylinderLayer", video, init).as<XRCylinderLayer>();
}

XREquirectLayer XRMediaBinding::createEquirectLayer(const HTMLVideoElement& video, const XRMediaEquirectLayerInit& init) {
    return emlite::Val::call("createEquirectLayer", video, init).as<XREquirectLayer>();
}

