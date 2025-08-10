#include "webbind/DOMQuadInit.hpp"
#include "webbind/DOMPointInit.hpp"

using emlite::Val;
namespace webbind {

DOMQuadInit::DOMQuadInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMQuadInit DOMQuadInit::take_ownership(Handle h) noexcept {
        return DOMQuadInit(h);
    }
DOMQuadInit::DOMQuadInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DOMQuadInit::DOMQuadInit() noexcept: emlite::Val(emlite::Val::object()) {}
DOMQuadInit DOMQuadInit::clone() const noexcept { return *this; }

DOMPointInit DOMQuadInit::p1() const {
    return emlite::Val::get("p1").as<DOMPointInit>();
}

void DOMQuadInit::p1(const DOMPointInit& value) {
    emlite::Val::set("p1", value);
}

DOMPointInit DOMQuadInit::p2() const {
    return emlite::Val::get("p2").as<DOMPointInit>();
}

void DOMQuadInit::p2(const DOMPointInit& value) {
    emlite::Val::set("p2", value);
}

DOMPointInit DOMQuadInit::p3() const {
    return emlite::Val::get("p3").as<DOMPointInit>();
}

void DOMQuadInit::p3(const DOMPointInit& value) {
    emlite::Val::set("p3", value);
}

DOMPointInit DOMQuadInit::p4() const {
    return emlite::Val::get("p4").as<DOMPointInit>();
}

void DOMQuadInit::p4(const DOMPointInit& value) {
    emlite::Val::set("p4", value);
}


} // namespace webbind