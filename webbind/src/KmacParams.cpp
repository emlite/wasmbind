#include <webbind/KmacParams.hpp>

namespace webbind {

KmacParams::KmacParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
KmacParams KmacParams::take_ownership(Handle h) noexcept {
    return KmacParams(h);
}

KmacParams::KmacParams(const emlite::Val &val) noexcept: Algorithm(val) {}

KmacParams::KmacParams() noexcept: Algorithm(emlite::Val::object()) {}

KmacParams KmacParams::clone() const noexcept { return *this; }

unsigned long KmacParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void KmacParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}

jsbind::Any KmacParams::customization() const {
    return emlite::Val::get("customization").as<jsbind::Any>();
}

void KmacParams::customization(const jsbind::Any& value) {
    emlite::Val::set("customization", value);
}


} // namespace webbind