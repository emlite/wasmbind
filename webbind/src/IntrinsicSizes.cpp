#include <webbind/IntrinsicSizes.hpp>


IntrinsicSizes IntrinsicSizes::take_ownership(Handle h) noexcept {
        return IntrinsicSizes(h);
    }
IntrinsicSizes IntrinsicSizes::clone() const noexcept { return *this; }
emlite::Val IntrinsicSizes::instance() noexcept { return emlite::Val::global("IntrinsicSizes"); }
IntrinsicSizes::IntrinsicSizes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntrinsicSizes::IntrinsicSizes(const emlite::Val &val) noexcept: emlite::Val(val) {}


double IntrinsicSizes::minContentSize() const {
    return emlite::Val::get("minContentSize").as<double>();
}

double IntrinsicSizes::maxContentSize() const {
    return emlite::Val::get("maxContentSize").as<double>();
}

