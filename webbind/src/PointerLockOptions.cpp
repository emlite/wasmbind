#include "webbind/PointerLockOptions.hpp"

using emlite::Val;
namespace webbind {

PointerLockOptions::PointerLockOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PointerLockOptions PointerLockOptions::take_ownership(Handle h) noexcept {
        return PointerLockOptions(h);
    }
PointerLockOptions::PointerLockOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PointerLockOptions::PointerLockOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PointerLockOptions PointerLockOptions::clone() const noexcept { return *this; }

bool PointerLockOptions::unadjustedMovement() const {
    return emlite::Val::get("unadjustedMovement").as<bool>();
}

void PointerLockOptions::unadjustedMovement(bool value) {
    emlite::Val::set("unadjustedMovement", value);
}


} // namespace webbind