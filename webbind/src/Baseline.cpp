#include <webbind/Baseline.hpp>


Baseline Baseline::take_ownership(Handle h) noexcept {
        return Baseline(h);
    }
Baseline Baseline::clone() const noexcept { return *this; }
Baseline::Baseline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Baseline::Baseline(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString Baseline::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

double Baseline::value() const {
    return emlite::Val::get("value").as<double>();
}

