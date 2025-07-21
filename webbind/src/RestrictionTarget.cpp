#include <webbind/RestrictionTarget.hpp>
#include <webbind/Element.hpp>


RestrictionTarget RestrictionTarget::take_ownership(Handle h) noexcept {
        return RestrictionTarget(h);
    }
RestrictionTarget RestrictionTarget::clone() const noexcept { return *this; }
RestrictionTarget::RestrictionTarget(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RestrictionTarget::RestrictionTarget(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<RestrictionTarget> RestrictionTarget::fromElement(const Element& element) {
    return emlite::Val::global("restrictiontarget").call("fromElement", element).as<jsbind::Promise<RestrictionTarget>>();
}

