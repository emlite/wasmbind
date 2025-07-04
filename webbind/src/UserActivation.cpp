#include <webbind/UserActivation.hpp>


UserActivation UserActivation::take_ownership(Handle h) noexcept {
        return UserActivation(h);
    }
UserActivation UserActivation::clone() const noexcept { return *this; }
UserActivation::UserActivation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UserActivation::UserActivation(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool UserActivation::hasBeenActive() const {
    return emlite::Val::get("hasBeenActive").as<bool>();
}

bool UserActivation::isActive() const {
    return emlite::Val::get("isActive").as<bool>();
}

