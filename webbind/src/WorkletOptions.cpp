#include "webbind/WorkletOptions.hpp"

using emlite::Val;
namespace webbind {

WorkletOptions::WorkletOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkletOptions WorkletOptions::take_ownership(Handle h) noexcept {
        return WorkletOptions(h);
    }
WorkletOptions::WorkletOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WorkletOptions::WorkletOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WorkletOptions WorkletOptions::clone() const noexcept { return *this; }

RequestCredentials WorkletOptions::credentials() const {
    return emlite::Val::get("credentials").as<RequestCredentials>();
}

void WorkletOptions::credentials(const RequestCredentials& value) {
    emlite::Val::set("credentials", value);
}


} // namespace webbind