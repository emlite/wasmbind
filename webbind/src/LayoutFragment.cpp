#include <webbind/LayoutFragment.hpp>
#include <webbind/ChildBreakToken.hpp>


LayoutFragment LayoutFragment::take_ownership(Handle h) noexcept {
        return LayoutFragment(h);
    }
LayoutFragment LayoutFragment::clone() const noexcept { return *this; }
emlite::Val LayoutFragment::instance() noexcept { return emlite::Val::global("LayoutFragment"); }
LayoutFragment::LayoutFragment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutFragment::LayoutFragment(const emlite::Val &val) noexcept: emlite::Val(val) {}


double LayoutFragment::inlineSize() const {
    return emlite::Val::get("inlineSize").as<double>();
}

double LayoutFragment::blockSize() const {
    return emlite::Val::get("blockSize").as<double>();
}

double LayoutFragment::inlineOffset() const {
    return emlite::Val::get("inlineOffset").as<double>();
}

void LayoutFragment::inlineOffset(double value) {
    emlite::Val::set("inlineOffset", value);
}

double LayoutFragment::blockOffset() const {
    return emlite::Val::get("blockOffset").as<double>();
}

void LayoutFragment::blockOffset(double value) {
    emlite::Val::set("blockOffset", value);
}

jsbind::Any LayoutFragment::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

ChildBreakToken LayoutFragment::breakToken() const {
    return emlite::Val::get("breakToken").as<ChildBreakToken>();
}

