#include <webbind/SVGTextPositioningElement.hpp>
#include <webbind/SVGAnimatedLengthList.hpp>
#include <webbind/SVGAnimatedNumberList.hpp>

namespace webbind {

SVGTextPositioningElement SVGTextPositioningElement::take_ownership(Handle h) noexcept {
        return SVGTextPositioningElement(h);
    }
SVGTextPositioningElement SVGTextPositioningElement::clone() const noexcept { return *this; }
emlite::Val SVGTextPositioningElement::instance() noexcept { return emlite::Val::global("SVGTextPositioningElement"); }
SVGTextPositioningElement::SVGTextPositioningElement(Handle h) noexcept : SVGTextContentElement(emlite::Val::take_ownership(h)) {}
SVGTextPositioningElement::SVGTextPositioningElement(const emlite::Val &val) noexcept: SVGTextContentElement(val) {}

SVGAnimatedLengthList SVGTextPositioningElement::x() const {
    return SVGTextContentElement::get("x").as<SVGAnimatedLengthList>();
}

SVGAnimatedLengthList SVGTextPositioningElement::y() const {
    return SVGTextContentElement::get("y").as<SVGAnimatedLengthList>();
}

SVGAnimatedLengthList SVGTextPositioningElement::dx() const {
    return SVGTextContentElement::get("dx").as<SVGAnimatedLengthList>();
}

SVGAnimatedLengthList SVGTextPositioningElement::dy() const {
    return SVGTextContentElement::get("dy").as<SVGAnimatedLengthList>();
}

SVGAnimatedNumberList SVGTextPositioningElement::rotate() const {
    return SVGTextContentElement::get("rotate").as<SVGAnimatedNumberList>();
}


} // namespace webbind