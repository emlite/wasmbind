#include <webbind/NDEFMakeReadOnlyOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions::take_ownership(Handle h) noexcept {
        return NDEFMakeReadOnlyOptions(h);
    }
NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions::clone() const noexcept { return *this; }

AbortSignal NDEFMakeReadOnlyOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFMakeReadOnlyOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind