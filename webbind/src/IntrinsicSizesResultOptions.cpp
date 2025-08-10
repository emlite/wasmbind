#include <webbind/IntrinsicSizesResultOptions.hpp>

using emlite::Val;
namespace webbind {

IntrinsicSizesResultOptions::IntrinsicSizesResultOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntrinsicSizesResultOptions IntrinsicSizesResultOptions::take_ownership(Handle h) noexcept {
        return IntrinsicSizesResultOptions(h);
    }
IntrinsicSizesResultOptions::IntrinsicSizesResultOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IntrinsicSizesResultOptions::IntrinsicSizesResultOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IntrinsicSizesResultOptions IntrinsicSizesResultOptions::clone() const noexcept { return *this; }

double IntrinsicSizesResultOptions::maxContentSize() const {
    return emlite::Val::get("maxContentSize").as<double>();
}

void IntrinsicSizesResultOptions::maxContentSize(double value) {
    emlite::Val::set("maxContentSize", value);
}

double IntrinsicSizesResultOptions::minContentSize() const {
    return emlite::Val::get("minContentSize").as<double>();
}

void IntrinsicSizesResultOptions::minContentSize(double value) {
    emlite::Val::set("minContentSize", value);
}


} // namespace webbind