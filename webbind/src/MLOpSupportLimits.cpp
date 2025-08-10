#include "webbind/MLOpSupportLimits.hpp"
#include "webbind/MLWhereSupportLimits.hpp"

using emlite::Val;
namespace webbind {

MLOpSupportLimits::MLOpSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOpSupportLimits MLOpSupportLimits::take_ownership(Handle h) noexcept {
        return MLOpSupportLimits(h);
    }
MLOpSupportLimits::MLOpSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOpSupportLimits::MLOpSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLOpSupportLimits MLOpSupportLimits::clone() const noexcept { return *this; }

MLWhereSupportLimits MLOpSupportLimits::where() const {
    return emlite::Val::get("where").as<MLWhereSupportLimits>();
}

void MLOpSupportLimits::where(const MLWhereSupportLimits& value) {
    emlite::Val::set("where", value);
}


} // namespace webbind