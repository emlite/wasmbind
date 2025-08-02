#include <webbind/LayoutConstraints.hpp>


LayoutConstraints LayoutConstraints::take_ownership(Handle h) noexcept {
        return LayoutConstraints(h);
    }
LayoutConstraints LayoutConstraints::clone() const noexcept { return *this; }
emlite::Val LayoutConstraints::instance() noexcept { return emlite::Val::global("LayoutConstraints"); }
LayoutConstraints::LayoutConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutConstraints::LayoutConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}


double LayoutConstraints::availableInlineSize() const {
    return emlite::Val::get("availableInlineSize").as<double>();
}

double LayoutConstraints::availableBlockSize() const {
    return emlite::Val::get("availableBlockSize").as<double>();
}

double LayoutConstraints::fixedInlineSize() const {
    return emlite::Val::get("fixedInlineSize").as<double>();
}

double LayoutConstraints::fixedBlockSize() const {
    return emlite::Val::get("fixedBlockSize").as<double>();
}

double LayoutConstraints::percentageInlineSize() const {
    return emlite::Val::get("percentageInlineSize").as<double>();
}

double LayoutConstraints::percentageBlockSize() const {
    return emlite::Val::get("percentageBlockSize").as<double>();
}

double LayoutConstraints::blockFragmentationOffset() const {
    return emlite::Val::get("blockFragmentationOffset").as<double>();
}

BlockFragmentationType LayoutConstraints::blockFragmentationType() const {
    return emlite::Val::get("blockFragmentationType").as<BlockFragmentationType>();
}

jsbind::Any LayoutConstraints::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

