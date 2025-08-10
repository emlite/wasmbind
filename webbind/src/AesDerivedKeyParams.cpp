#include <webbind/AesDerivedKeyParams.hpp>

using emlite::Val;
namespace webbind {

AesDerivedKeyParams::AesDerivedKeyParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
AesDerivedKeyParams AesDerivedKeyParams::take_ownership(Handle h) noexcept {
        return AesDerivedKeyParams(h);
    }
AesDerivedKeyParams::AesDerivedKeyParams(const emlite::Val &val) noexcept: Algorithm(val) {}
AesDerivedKeyParams::AesDerivedKeyParams() noexcept: Algorithm(emlite::Val::object()) {}
AesDerivedKeyParams AesDerivedKeyParams::clone() const noexcept { return *this; }

unsigned short AesDerivedKeyParams::length() const {
    return emlite::Val::get("length").as<unsigned short>();
}

void AesDerivedKeyParams::length(unsigned short value) {
    emlite::Val::set("length", value);
}


} // namespace webbind