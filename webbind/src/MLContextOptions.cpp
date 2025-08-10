#include "webbind/MLContextOptions.hpp"

using emlite::Val;
namespace webbind {

MLContextOptions::MLContextOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLContextOptions MLContextOptions::take_ownership(Handle h) noexcept {
        return MLContextOptions(h);
    }
MLContextOptions::MLContextOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLContextOptions::MLContextOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLContextOptions MLContextOptions::clone() const noexcept { return *this; }

MLPowerPreference MLContextOptions::powerPreference() const {
    return emlite::Val::get("powerPreference").as<MLPowerPreference>();
}

void MLContextOptions::powerPreference(const MLPowerPreference& value) {
    emlite::Val::set("powerPreference", value);
}


} // namespace webbind