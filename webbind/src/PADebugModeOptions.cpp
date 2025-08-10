#include "webbind/PADebugModeOptions.hpp"

using emlite::Val;
namespace webbind {

PADebugModeOptions::PADebugModeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PADebugModeOptions PADebugModeOptions::take_ownership(Handle h) noexcept {
        return PADebugModeOptions(h);
    }
PADebugModeOptions::PADebugModeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PADebugModeOptions::PADebugModeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PADebugModeOptions PADebugModeOptions::clone() const noexcept { return *this; }

long long PADebugModeOptions::debugKey() const {
    return emlite::Val::get("debugKey").as<long long>();
}

void PADebugModeOptions::debugKey(long long value) {
    emlite::Val::set("debugKey", value);
}


} // namespace webbind