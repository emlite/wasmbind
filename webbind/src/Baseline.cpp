#include <webbind/Baseline.hpp>

namespace webbind {

Baseline Baseline::take_ownership(Handle h) noexcept {
        return Baseline(h);
    }
Baseline Baseline::clone() const noexcept { return *this; }
emlite::Val Baseline::instance() noexcept { return emlite::Val::global("Baseline"); }
Baseline::Baseline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Baseline::Baseline(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Baseline::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

double Baseline::value() const {
    return emlite::Val::get("value").as<double>();
}


} // namespace webbind