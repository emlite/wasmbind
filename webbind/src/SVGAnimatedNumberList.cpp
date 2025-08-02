#include <webbind/SVGAnimatedNumberList.hpp>
#include <webbind/SVGNumberList.hpp>


SVGAnimatedNumberList SVGAnimatedNumberList::take_ownership(Handle h) noexcept {
        return SVGAnimatedNumberList(h);
    }
SVGAnimatedNumberList SVGAnimatedNumberList::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedNumberList::instance() noexcept { return emlite::Val::global("SVGAnimatedNumberList"); }
SVGAnimatedNumberList::SVGAnimatedNumberList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedNumberList::SVGAnimatedNumberList(const emlite::Val &val) noexcept: emlite::Val(val) {}


SVGNumberList SVGAnimatedNumberList::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGNumberList>();
}

SVGNumberList SVGAnimatedNumberList::animVal() const {
    return emlite::Val::get("animVal").as<SVGNumberList>();
}

