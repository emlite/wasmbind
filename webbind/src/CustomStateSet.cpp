#include "webbind/CustomStateSet.hpp"

namespace webbind {

CustomStateSet CustomStateSet::take_ownership(Handle h) noexcept {
        return CustomStateSet(h);
    }
CustomStateSet CustomStateSet::clone() const noexcept { return *this; }
emlite::Val CustomStateSet::instance() noexcept { return emlite::Val::global("CustomStateSet"); }
CustomStateSet::CustomStateSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CustomStateSet::CustomStateSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind