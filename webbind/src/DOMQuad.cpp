#include <webbind/DOMQuad.hpp>
#include <webbind/DOMPointInit.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/DOMRectInit.hpp>
#include <webbind/DOMQuadInit.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMRect.hpp>

namespace webbind {

DOMQuad DOMQuad::take_ownership(Handle h) noexcept {
        return DOMQuad(h);
    }
DOMQuad DOMQuad::clone() const noexcept { return *this; }
emlite::Val DOMQuad::instance() noexcept { return emlite::Val::global("DOMQuad"); }
DOMQuad::DOMQuad(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMQuad::DOMQuad(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMQuad::DOMQuad() : emlite::Val(emlite::Val::global("DOMQuad").new_()) {}

DOMQuad::DOMQuad(const DOMPointInit& p1) : emlite::Val(emlite::Val::global("DOMQuad").new_(p1)) {}

DOMQuad::DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2) : emlite::Val(emlite::Val::global("DOMQuad").new_(p1, p2)) {}

DOMQuad::DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2, const DOMPointInit& p3) : emlite::Val(emlite::Val::global("DOMQuad").new_(p1, p2, p3)) {}

DOMQuad::DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2, const DOMPointInit& p3, const DOMPointInit& p4) : emlite::Val(emlite::Val::global("DOMQuad").new_(p1, p2, p3, p4)) {}

DOMQuad DOMQuad::fromRect() {
    return emlite::Val::global("domquad").call("fromRect").as<DOMQuad>();
}

DOMQuad DOMQuad::fromRect(const DOMRectInit& other) {
    return emlite::Val::global("domquad").call("fromRect", other).as<DOMQuad>();
}

DOMQuad DOMQuad::fromQuad() {
    return emlite::Val::global("domquad").call("fromQuad").as<DOMQuad>();
}

DOMQuad DOMQuad::fromQuad(const DOMQuadInit& other) {
    return emlite::Val::global("domquad").call("fromQuad", other).as<DOMQuad>();
}

DOMPoint DOMQuad::p1() const {
    return emlite::Val::get("p1").as<DOMPoint>();
}

DOMPoint DOMQuad::p2() const {
    return emlite::Val::get("p2").as<DOMPoint>();
}

DOMPoint DOMQuad::p3() const {
    return emlite::Val::get("p3").as<DOMPoint>();
}

DOMPoint DOMQuad::p4() const {
    return emlite::Val::get("p4").as<DOMPoint>();
}

DOMRect DOMQuad::getBounds() {
    return emlite::Val::call("getBounds").as<DOMRect>();
}

jsbind::Object DOMQuad::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind