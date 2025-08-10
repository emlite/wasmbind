#include "webbind/FragmentResultOptions.hpp"
#include "webbind/LayoutFragment.hpp"
#include "webbind/BreakTokenOptions.hpp"

using emlite::Val;
namespace webbind {

FragmentResultOptions::FragmentResultOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FragmentResultOptions FragmentResultOptions::take_ownership(Handle h) noexcept {
        return FragmentResultOptions(h);
    }
FragmentResultOptions::FragmentResultOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FragmentResultOptions::FragmentResultOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FragmentResultOptions FragmentResultOptions::clone() const noexcept { return *this; }

double FragmentResultOptions::inlineSize() const {
    return emlite::Val::get("inlineSize").as<double>();
}

void FragmentResultOptions::inlineSize(double value) {
    emlite::Val::set("inlineSize", value);
}

double FragmentResultOptions::blockSize() const {
    return emlite::Val::get("blockSize").as<double>();
}

void FragmentResultOptions::blockSize(double value) {
    emlite::Val::set("blockSize", value);
}

double FragmentResultOptions::autoBlockSize() const {
    return emlite::Val::get("autoBlockSize").as<double>();
}

void FragmentResultOptions::autoBlockSize(double value) {
    emlite::Val::set("autoBlockSize", value);
}

jsbind::TypedArray<LayoutFragment> FragmentResultOptions::childFragments() const {
    return emlite::Val::get("childFragments").as<jsbind::TypedArray<LayoutFragment>>();
}

void FragmentResultOptions::childFragments(const jsbind::TypedArray<LayoutFragment>& value) {
    emlite::Val::set("childFragments", value);
}

jsbind::Any FragmentResultOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void FragmentResultOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

BreakTokenOptions FragmentResultOptions::breakToken() const {
    return emlite::Val::get("breakToken").as<BreakTokenOptions>();
}

void FragmentResultOptions::breakToken(const BreakTokenOptions& value) {
    emlite::Val::set("breakToken", value);
}


} // namespace webbind