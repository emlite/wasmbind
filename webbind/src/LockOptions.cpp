#include <webbind/LockOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

LockOptions::LockOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockOptions LockOptions::take_ownership(Handle h) noexcept {
    return LockOptions(h);
}

LockOptions::LockOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

LockOptions::LockOptions() noexcept: emlite::Val(emlite::Val::object()) {}

LockOptions LockOptions::clone() const noexcept { return *this; }

LockMode LockOptions::mode() const {
    return emlite::Val::get("mode").as<LockMode>();
}

void LockOptions::mode(const LockMode& value) {
    emlite::Val::set("mode", value);
}

bool LockOptions::ifAvailable() const {
    return emlite::Val::get("ifAvailable").as<bool>();
}

void LockOptions::ifAvailable(bool value) {
    emlite::Val::set("ifAvailable", value);
}

bool LockOptions::steal() const {
    return emlite::Val::get("steal").as<bool>();
}

void LockOptions::steal(bool value) {
    emlite::Val::set("steal", value);
}

AbortSignal LockOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void LockOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind