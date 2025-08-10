#include <webbind/SVGTitleElement.hpp>

namespace webbind {

SVGTitleElement SVGTitleElement::take_ownership(Handle h) noexcept {
    return SVGTitleElement(h);
}

SVGTitleElement SVGTitleElement::clone() const noexcept { return *this; }

emlite::Val SVGTitleElement::instance() noexcept { return emlite::Val::global("SVGTitleElement"); }

SVGTitleElement::SVGTitleElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGTitleElement::SVGTitleElement(const emlite::Val &val) noexcept: SVGElement(val) {}


} // namespace webbind