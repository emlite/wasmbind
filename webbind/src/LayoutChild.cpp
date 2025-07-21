#include <webbind/LayoutChild.hpp>
#include <webbind/StylePropertyMapReadOnly.hpp>
#include <webbind/IntrinsicSizes.hpp>
#include <webbind/LayoutFragment.hpp>
#include <webbind/ChildBreakToken.hpp>


LayoutConstraintsOptions::LayoutConstraintsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutConstraintsOptions LayoutConstraintsOptions::take_ownership(Handle h) noexcept {
        return LayoutConstraintsOptions(h);
    }
LayoutConstraintsOptions::LayoutConstraintsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
LayoutConstraintsOptions::LayoutConstraintsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
LayoutConstraintsOptions LayoutConstraintsOptions::clone() const noexcept { return *this; }

double LayoutConstraintsOptions::availableInlineSize() const {
    return emlite::Val::get("availableInlineSize").as<double>();
}

void LayoutConstraintsOptions::availableInlineSize(double value) {
    emlite::Val::set("availableInlineSize", value);
}

double LayoutConstraintsOptions::availableBlockSize() const {
    return emlite::Val::get("availableBlockSize").as<double>();
}

void LayoutConstraintsOptions::availableBlockSize(double value) {
    emlite::Val::set("availableBlockSize", value);
}

double LayoutConstraintsOptions::fixedInlineSize() const {
    return emlite::Val::get("fixedInlineSize").as<double>();
}

void LayoutConstraintsOptions::fixedInlineSize(double value) {
    emlite::Val::set("fixedInlineSize", value);
}

double LayoutConstraintsOptions::fixedBlockSize() const {
    return emlite::Val::get("fixedBlockSize").as<double>();
}

void LayoutConstraintsOptions::fixedBlockSize(double value) {
    emlite::Val::set("fixedBlockSize", value);
}

double LayoutConstraintsOptions::percentageInlineSize() const {
    return emlite::Val::get("percentageInlineSize").as<double>();
}

void LayoutConstraintsOptions::percentageInlineSize(double value) {
    emlite::Val::set("percentageInlineSize", value);
}

double LayoutConstraintsOptions::percentageBlockSize() const {
    return emlite::Val::get("percentageBlockSize").as<double>();
}

void LayoutConstraintsOptions::percentageBlockSize(double value) {
    emlite::Val::set("percentageBlockSize", value);
}

double LayoutConstraintsOptions::blockFragmentationOffset() const {
    return emlite::Val::get("blockFragmentationOffset").as<double>();
}

void LayoutConstraintsOptions::blockFragmentationOffset(double value) {
    emlite::Val::set("blockFragmentationOffset", value);
}

BlockFragmentationType LayoutConstraintsOptions::blockFragmentationType() const {
    return emlite::Val::get("blockFragmentationType").as<BlockFragmentationType>();
}

void LayoutConstraintsOptions::blockFragmentationType(const BlockFragmentationType& value) {
    emlite::Val::set("blockFragmentationType", value);
}

jsbind::Any LayoutConstraintsOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void LayoutConstraintsOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

LayoutChild LayoutChild::take_ownership(Handle h) noexcept {
        return LayoutChild(h);
    }
LayoutChild LayoutChild::clone() const noexcept { return *this; }
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

