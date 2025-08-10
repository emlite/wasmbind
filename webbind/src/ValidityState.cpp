#include "webbind/ValidityState.hpp"

namespace webbind {

ValidityState ValidityState::take_ownership(Handle h) noexcept {
        return ValidityState(h);
    }
ValidityState ValidityState::clone() const noexcept { return *this; }
emlite::Val ValidityState::instance() noexcept { return emlite::Val::global("ValidityState"); }
ValidityState::ValidityState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ValidityState::ValidityState(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool ValidityState::valueMissing() const {
    return emlite::Val::get("valueMissing").as<bool>();
}

bool ValidityState::typeMismatch() const {
    return emlite::Val::get("typeMismatch").as<bool>();
}

bool ValidityState::patternMismatch() const {
    return emlite::Val::get("patternMismatch").as<bool>();
}

bool ValidityState::tooLong() const {
    return emlite::Val::get("tooLong").as<bool>();
}

bool ValidityState::tooShort() const {
    return emlite::Val::get("tooShort").as<bool>();
}

bool ValidityState::rangeUnderflow() const {
    return emlite::Val::get("rangeUnderflow").as<bool>();
}

bool ValidityState::rangeOverflow() const {
    return emlite::Val::get("rangeOverflow").as<bool>();
}

bool ValidityState::stepMismatch() const {
    return emlite::Val::get("stepMismatch").as<bool>();
}

bool ValidityState::badInput() const {
    return emlite::Val::get("badInput").as<bool>();
}

bool ValidityState::customError() const {
    return emlite::Val::get("customError").as<bool>();
}

bool ValidityState::valid() const {
    return emlite::Val::get("valid").as<bool>();
}


} // namespace webbind