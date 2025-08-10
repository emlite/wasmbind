#include <webbind/IsInputPendingOptions.hpp>

namespace webbind {

IsInputPendingOptions::IsInputPendingOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IsInputPendingOptions IsInputPendingOptions::take_ownership(Handle h) noexcept {
    return IsInputPendingOptions(h);
}

IsInputPendingOptions::IsInputPendingOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

IsInputPendingOptions::IsInputPendingOptions() noexcept: emlite::Val(emlite::Val::object()) {}

IsInputPendingOptions IsInputPendingOptions::clone() const noexcept { return *this; }

bool IsInputPendingOptions::includeContinuous() const {
    return emlite::Val::get("includeContinuous").as<bool>();
}

void IsInputPendingOptions::includeContinuous(bool value) {
    emlite::Val::set("includeContinuous", value);
}


} // namespace webbind