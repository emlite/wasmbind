#include <webbind/SVGFEMergeNodeElement.hpp>
#include <webbind/SVGAnimatedString.hpp>

namespace webbind {

SVGFEMergeNodeElement SVGFEMergeNodeElement::take_ownership(Handle h) noexcept {
    return SVGFEMergeNodeElement(h);
}

SVGFEMergeNodeElement SVGFEMergeNodeElement::clone() const noexcept { return *this; }

emlite::Val SVGFEMergeNodeElement::instance() noexcept { return emlite::Val::global("SVGFEMergeNodeElement"); }

SVGFEMergeNodeElement::SVGFEMergeNodeElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFEMergeNodeElement::SVGFEMergeNodeElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEMergeNodeElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}


} // namespace webbind