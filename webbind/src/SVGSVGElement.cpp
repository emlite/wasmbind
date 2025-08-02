#include <webbind/SVGSVGElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/SVGElement.hpp>
#include <webbind/SVGNumber.hpp>
#include <webbind/SVGLength.hpp>
#include <webbind/SVGAngle.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/SVGTransform.hpp>
#include <webbind/Element.hpp>
#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>


DOMMatrix2DInit::DOMMatrix2DInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMMatrix2DInit DOMMatrix2DInit::take_ownership(Handle h) noexcept {
        return DOMMatrix2DInit(h);
    }
DOMMatrix2DInit::DOMMatrix2DInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DOMMatrix2DInit::DOMMatrix2DInit() noexcept: emlite::Val(emlite::Val::object()) {}
DOMMatrix2DInit DOMMatrix2DInit::clone() const noexcept { return *this; }

double DOMMatrix2DInit::a() const {
    return emlite::Val::get("a").as<double>();
}

void DOMMatrix2DInit::a(double value) {
    emlite::Val::set("a", value);
}

double DOMMatrix2DInit::b() const {
    return emlite::Val::get("b").as<double>();
}

void DOMMatrix2DInit::b(double value) {
    emlite::Val::set("b", value);
}

double DOMMatrix2DInit::c() const {
    return emlite::Val::get("c").as<double>();
}

void DOMMatrix2DInit::c(double value) {
    emlite::Val::set("c", value);
}

double DOMMatrix2DInit::d() const {
    return emlite::Val::get("d").as<double>();
}

void DOMMatrix2DInit::d(double value) {
    emlite::Val::set("d", value);
}

double DOMMatrix2DInit::e() const {
    return emlite::Val::get("e").as<double>();
}

void DOMMatrix2DInit::e(double value) {
    emlite::Val::set("e", value);
}

double DOMMatrix2DInit::f() const {
    return emlite::Val::get("f").as<double>();
}

void DOMMatrix2DInit::f(double value) {
    emlite::Val::set("f", value);
}

double DOMMatrix2DInit::m11() const {
    return emlite::Val::get("m11").as<double>();
}

void DOMMatrix2DInit::m11(double value) {
    emlite::Val::set("m11", value);
}

double DOMMatrix2DInit::m12() const {
    return emlite::Val::get("m12").as<double>();
}

void DOMMatrix2DInit::m12(double value) {
    emlite::Val::set("m12", value);
}

double DOMMatrix2DInit::m21() const {
    return emlite::Val::get("m21").as<double>();
}

void DOMMatrix2DInit::m21(double value) {
    emlite::Val::set("m21", value);
}

double DOMMatrix2DInit::m22() const {
    return emlite::Val::get("m22").as<double>();
}

void DOMMatrix2DInit::m22(double value) {
    emlite::Val::set("m22", value);
}

double DOMMatrix2DInit::m41() const {
    return emlite::Val::get("m41").as<double>();
}

void DOMMatrix2DInit::m41(double value) {
    emlite::Val::set("m41", value);
}

double DOMMatrix2DInit::m42() const {
    return emlite::Val::get("m42").as<double>();
}

void DOMMatrix2DInit::m42(double value) {
    emlite::Val::set("m42", value);
}

SVGSVGElement SVGSVGElement::take_ownership(Handle h) noexcept {
        return SVGSVGElement(h);
    }
SVGSVGElement SVGSVGElement::clone() const noexcept { return *this; }
emlite::Val SVGSVGElement::instance() noexcept { return emlite::Val::global("SVGSVGElement"); }
SVGSVGElement::SVGSVGElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGSVGElement::SVGSVGElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


SVGAnimatedLength SVGSVGElement::x() const {
    return SVGGraphicsElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGSVGElement::y() const {
    return SVGGraphicsElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGSVGElement::width() const {
    return SVGGraphicsElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGSVGElement::height() const {
    return SVGGraphicsElement::get("height").as<SVGAnimatedLength>();
}

float SVGSVGElement::currentScale() const {
    return SVGGraphicsElement::get("currentScale").as<float>();
}

void SVGSVGElement::currentScale(float value) {
    SVGGraphicsElement::set("currentScale", value);
}

DOMPointReadOnly SVGSVGElement::currentTranslate() const {
    return SVGGraphicsElement::get("currentTranslate").as<DOMPointReadOnly>();
}

NodeList SVGSVGElement::getIntersectionList(const DOMRectReadOnly& rect, const SVGElement& referenceElement) {
    return SVGGraphicsElement::call("getIntersectionList", rect, referenceElement).as<NodeList>();
}

NodeList SVGSVGElement::getEnclosureList(const DOMRectReadOnly& rect, const SVGElement& referenceElement) {
    return SVGGraphicsElement::call("getEnclosureList", rect, referenceElement).as<NodeList>();
}

bool SVGSVGElement::checkIntersection(const SVGElement& element, const DOMRectReadOnly& rect) {
    return SVGGraphicsElement::call("checkIntersection", element, rect).as<bool>();
}

bool SVGSVGElement::checkEnclosure(const SVGElement& element, const DOMRectReadOnly& rect) {
    return SVGGraphicsElement::call("checkEnclosure", element, rect).as<bool>();
}

jsbind::Undefined SVGSVGElement::deselectAll() {
    return SVGGraphicsElement::call("deselectAll").as<jsbind::Undefined>();
}

SVGNumber SVGSVGElement::createSVGNumber() {
    return SVGGraphicsElement::call("createSVGNumber").as<SVGNumber>();
}

SVGLength SVGSVGElement::createSVGLength() {
    return SVGGraphicsElement::call("createSVGLength").as<SVGLength>();
}

SVGAngle SVGSVGElement::createSVGAngle() {
    return SVGGraphicsElement::call("createSVGAngle").as<SVGAngle>();
}

DOMPoint SVGSVGElement::createSVGPoint() {
    return SVGGraphicsElement::call("createSVGPoint").as<DOMPoint>();
}

DOMMatrix SVGSVGElement::createSVGMatrix() {
    return SVGGraphicsElement::call("createSVGMatrix").as<DOMMatrix>();
}

DOMRect SVGSVGElement::createSVGRect() {
    return SVGGraphicsElement::call("createSVGRect").as<DOMRect>();
}

SVGTransform SVGSVGElement::createSVGTransform() {
    return SVGGraphicsElement::call("createSVGTransform").as<SVGTransform>();
}

SVGTransform SVGSVGElement::createSVGTransformFromMatrix() {
    return SVGGraphicsElement::call("createSVGTransformFromMatrix").as<SVGTransform>();
}

SVGTransform SVGSVGElement::createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix) {
    return SVGGraphicsElement::call("createSVGTransformFromMatrix", matrix).as<SVGTransform>();
}

Element SVGSVGElement::getElementById(const jsbind::String& elementId) {
    return SVGGraphicsElement::call("getElementById", elementId).as<Element>();
}

unsigned long SVGSVGElement::suspendRedraw(unsigned long maxWaitMilliseconds) {
    return SVGGraphicsElement::call("suspendRedraw", maxWaitMilliseconds).as<unsigned long>();
}

jsbind::Undefined SVGSVGElement::unsuspendRedraw(unsigned long suspendHandleID) {
    return SVGGraphicsElement::call("unsuspendRedraw", suspendHandleID).as<jsbind::Undefined>();
}

jsbind::Undefined SVGSVGElement::unsuspendRedrawAll() {
    return SVGGraphicsElement::call("unsuspendRedrawAll").as<jsbind::Undefined>();
}

jsbind::Undefined SVGSVGElement::forceRedraw() {
    return SVGGraphicsElement::call("forceRedraw").as<jsbind::Undefined>();
}

jsbind::Undefined SVGSVGElement::pauseAnimations() {
    return SVGGraphicsElement::call("pauseAnimations").as<jsbind::Undefined>();
}

jsbind::Undefined SVGSVGElement::unpauseAnimations() {
    return SVGGraphicsElement::call("unpauseAnimations").as<jsbind::Undefined>();
}

bool SVGSVGElement::animationsPaused() {
    return SVGGraphicsElement::call("animationsPaused").as<bool>();
}

float SVGSVGElement::getCurrentTime() {
    return SVGGraphicsElement::call("getCurrentTime").as<float>();
}

jsbind::Undefined SVGSVGElement::setCurrentTime(float seconds) {
    return SVGGraphicsElement::call("setCurrentTime", seconds).as<jsbind::Undefined>();
}

SVGAnimatedRect SVGSVGElement::viewBox() const {
    return SVGGraphicsElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGSVGElement::preserveAspectRatio() const {
    return SVGGraphicsElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

jsbind::Any SVGSVGElement::onportalactivate() const {
    return SVGGraphicsElement::get("onportalactivate").as<jsbind::Any>();
}

void SVGSVGElement::onportalactivate(const jsbind::Any& value) {
    SVGGraphicsElement::set("onportalactivate", value);
}

