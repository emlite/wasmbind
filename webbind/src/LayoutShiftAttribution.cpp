#include <webbind/LayoutShiftAttribution.hpp>
#include <webbind/Node.hpp>
#include <webbind/DOMRectReadOnly.hpp>


LayoutShiftAttribution LayoutShiftAttribution::take_ownership(Handle h) noexcept {
        return LayoutShiftAttribution(h);
    }
LayoutShiftAttribution LayoutShiftAttribution::clone() const noexcept { return *this; }
emlite::Val LayoutShiftAttribution::instance() noexcept { return emlite::Val::global("LayoutShiftAttribution"); }
LayoutShiftAttribution::LayoutShiftAttribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutShiftAttribution::LayoutShiftAttribution(const emlite::Val &val) noexcept: emlite::Val(val) {}


Node LayoutShiftAttribution::node() const {
    return emlite::Val::get("node").as<Node>();
}

DOMRectReadOnly LayoutShiftAttribution::previousRect() const {
    return emlite::Val::get("previousRect").as<DOMRectReadOnly>();
}

DOMRectReadOnly LayoutShiftAttribution::currentRect() const {
    return emlite::Val::get("currentRect").as<DOMRectReadOnly>();
}

