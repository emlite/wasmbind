#include <webbind/SVGTransform.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMMatrix2DInit.hpp>

namespace webbind {

SVGTransform SVGTransform::take_ownership(Handle h) noexcept {
        return SVGTransform(h);
    }
SVGTransform SVGTransform::clone() const noexcept { return *this; }
emlite::Val SVGTransform::instance() noexcept { return emlite::Val::global("SVGTransform"); }
SVGTransform::SVGTransform(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGTransform::SVGTransform(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short SVGTransform::type() const {
    return emlite::Val::get("type").as<unsigned short>();
}

DOMMatrix SVGTransform::matrix() const {
    return emlite::Val::get("matrix").as<DOMMatrix>();
}

float SVGTransform::angle() const {
    return emlite::Val::get("angle").as<float>();
}

jsbind::Undefined SVGTransform::setMatrix() {
    return emlite::Val::call("setMatrix").as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setMatrix(const DOMMatrix2DInit& matrix) {
    return emlite::Val::call("setMatrix", matrix).as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setTranslate(float tx, float ty) {
    return emlite::Val::call("setTranslate", tx, ty).as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setScale(float sx, float sy) {
    return emlite::Val::call("setScale", sx, sy).as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setRotate(float angle, float cx, float cy) {
    return emlite::Val::call("setRotate", angle, cx, cy).as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setSkewX(float angle) {
    return emlite::Val::call("setSkewX", angle).as<jsbind::Undefined>();
}

jsbind::Undefined SVGTransform::setSkewY(float angle) {
    return emlite::Val::call("setSkewY", angle).as<jsbind::Undefined>();
}


} // namespace webbind