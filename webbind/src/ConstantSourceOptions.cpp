#include <webbind/ConstantSourceOptions.hpp>

namespace webbind {

ConstantSourceOptions::ConstantSourceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConstantSourceOptions ConstantSourceOptions::take_ownership(Handle h) noexcept {
    return ConstantSourceOptions(h);
}

ConstantSourceOptions::ConstantSourceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ConstantSourceOptions::ConstantSourceOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ConstantSourceOptions ConstantSourceOptions::clone() const noexcept { return *this; }

float ConstantSourceOptions::offset() const {
    return emlite::Val::get("offset").as<float>();
}

void ConstantSourceOptions::offset(float value) {
    emlite::Val::set("offset", value);
}


} // namespace webbind