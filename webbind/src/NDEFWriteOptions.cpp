#include <webbind/NDEFWriteOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

NDEFWriteOptions::NDEFWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFWriteOptions NDEFWriteOptions::take_ownership(Handle h) noexcept {
    return NDEFWriteOptions(h);
}

NDEFWriteOptions::NDEFWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

NDEFWriteOptions::NDEFWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}

NDEFWriteOptions NDEFWriteOptions::clone() const noexcept { return *this; }

bool NDEFWriteOptions::overwrite() const {
    return emlite::Val::get("overwrite").as<bool>();
}

void NDEFWriteOptions::overwrite(bool value) {
    emlite::Val::set("overwrite", value);
}

AbortSignal NDEFWriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFWriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind