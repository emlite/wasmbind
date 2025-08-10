#include "webbind/ValidityStateFlags.hpp"

using emlite::Val;
namespace webbind {

ValidityStateFlags::ValidityStateFlags(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ValidityStateFlags ValidityStateFlags::take_ownership(Handle h) noexcept {
        return ValidityStateFlags(h);
    }
ValidityStateFlags::ValidityStateFlags(const emlite::Val &val) noexcept: emlite::Val(val) {}
ValidityStateFlags::ValidityStateFlags() noexcept: emlite::Val(emlite::Val::object()) {}
ValidityStateFlags ValidityStateFlags::clone() const noexcept { return *this; }

bool ValidityStateFlags::valueMissing() const {
    return emlite::Val::get("valueMissing").as<bool>();
}

void ValidityStateFlags::valueMissing(bool value) {
    emlite::Val::set("valueMissing", value);
}

bool ValidityStateFlags::typeMismatch() const {
    return emlite::Val::get("typeMismatch").as<bool>();
}

void ValidityStateFlags::typeMismatch(bool value) {
    emlite::Val::set("typeMismatch", value);
}

bool ValidityStateFlags::patternMismatch() const {
    return emlite::Val::get("patternMismatch").as<bool>();
}

void ValidityStateFlags::patternMismatch(bool value) {
    emlite::Val::set("patternMismatch", value);
}

bool ValidityStateFlags::tooLong() const {
    return emlite::Val::get("tooLong").as<bool>();
}

void ValidityStateFlags::tooLong(bool value) {
    emlite::Val::set("tooLong", value);
}

bool ValidityStateFlags::tooShort() const {
    return emlite::Val::get("tooShort").as<bool>();
}

void ValidityStateFlags::tooShort(bool value) {
    emlite::Val::set("tooShort", value);
}

bool ValidityStateFlags::rangeUnderflow() const {
    return emlite::Val::get("rangeUnderflow").as<bool>();
}

void ValidityStateFlags::rangeUnderflow(bool value) {
    emlite::Val::set("rangeUnderflow", value);
}

bool ValidityStateFlags::rangeOverflow() const {
    return emlite::Val::get("rangeOverflow").as<bool>();
}

void ValidityStateFlags::rangeOverflow(bool value) {
    emlite::Val::set("rangeOverflow", value);
}

bool ValidityStateFlags::stepMismatch() const {
    return emlite::Val::get("stepMismatch").as<bool>();
}

void ValidityStateFlags::stepMismatch(bool value) {
    emlite::Val::set("stepMismatch", value);
}

bool ValidityStateFlags::badInput() const {
    return emlite::Val::get("badInput").as<bool>();
}

void ValidityStateFlags::badInput(bool value) {
    emlite::Val::set("badInput", value);
}

bool ValidityStateFlags::customError() const {
    return emlite::Val::get("customError").as<bool>();
}

void ValidityStateFlags::customError(bool value) {
    emlite::Val::set("customError", value);
}


} // namespace webbind