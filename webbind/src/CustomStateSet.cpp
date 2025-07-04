#include <webbind/CustomStateSet.hpp>


CustomStateSet CustomStateSet::take_ownership(Handle h) noexcept {
        return CustomStateSet(h);
    }
CustomStateSet CustomStateSet::clone() const noexcept { return *this; }
CustomStateSet::CustomStateSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CustomStateSet::CustomStateSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


