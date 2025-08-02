#include <webbind/BarProp.hpp>


BarProp BarProp::take_ownership(Handle h) noexcept {
        return BarProp(h);
    }
BarProp BarProp::clone() const noexcept { return *this; }
emlite::Val BarProp::instance() noexcept { return emlite::Val::global("BarProp"); }
BarProp::BarProp(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BarProp::BarProp(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool BarProp::visible() const {
    return emlite::Val::get("visible").as<bool>();
}

