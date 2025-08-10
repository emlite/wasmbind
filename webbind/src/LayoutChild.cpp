#include <webbind/LayoutChild.hpp>
#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/IntrinsicSizes.hpp>
#include <webbind/LayoutFragment.hpp>
#include <webbind/LayoutConstraintsOptions.hpp>
#include <webbind/ChildBreakToken.hpp>

namespace webbind {

LayoutChild LayoutChild::take_ownership(Handle h) noexcept {
        return LayoutChild(h);
    }
LayoutChild LayoutChild::clone() const noexcept { return *this; }
emlite::Val LayoutChild::instance() noexcept { return emlite::Val::global("LayoutChild"); }
LayoutChild::LayoutChild(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutChild::LayoutChild(const emlite::Val &val) noexcept: emlite::Val(val) {}

StylePropertyMapReadOnly LayoutChild::styleMap() const {
    return emlite::Val::get("styleMap").as<StylePropertyMapReadOnly>();
}

jsbind::Promise<IntrinsicSizes> LayoutChild::intrinsicSizes() {
    return emlite::Val::call("intrinsicSizes").as<jsbind::Promise<IntrinsicSizes>>();
}

jsbind::Promise<LayoutFragment> LayoutChild::layoutNextFragment(const LayoutConstraintsOptions& constraints, const ChildBreakToken& breakToken) {
    return emlite::Val::call("layoutNextFragment", constraints, breakToken).as<jsbind::Promise<LayoutFragment>>();
}


} // namespace webbind