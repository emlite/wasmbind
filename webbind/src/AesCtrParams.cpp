#include "webbind/AesCtrParams.hpp"

using emlite::Val;
namespace webbind {

AesCtrParams::AesCtrParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AesCtrParams AesCtrParams::take_ownership(Handle h) noexcept {
        return AesCtrParams(h);
    }
AesCtrParams::AesCtrParams(const emlite::Val &val) noexcept: Algorithm(val) {}
AesCtrParams::AesCtrParams() noexcept: Algorithm(emlite::Val::object()) {}
AesCtrParams AesCtrParams::clone() const noexcept { return *this; }

jsbind::Any AesCtrParams::counter() const {
    return emlite::Val::get("counter").as<jsbind::Any>();
}

void AesCtrParams::counter(const jsbind::Any& value) {
    emlite::Val::set("counter", value);
}

unsigned char AesCtrParams::length() const {
    return emlite::Val::get("length").as<unsigned char>();
}

void AesCtrParams::length(unsigned char value) {
    emlite::Val::set("length", value);
}


} // namespace webbind