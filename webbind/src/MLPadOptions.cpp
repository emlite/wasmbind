#include <webbind/MLPadOptions.hpp>

namespace webbind {

MLPadOptions::MLPadOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLPadOptions MLPadOptions::take_ownership(Handle h) noexcept {
    return MLPadOptions(h);
}

MLPadOptions::MLPadOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLPadOptions::MLPadOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLPadOptions MLPadOptions::clone() const noexcept { return *this; }

MLPaddingMode MLPadOptions::mode() const {
    return emlite::Val::get("mode").as<MLPaddingMode>();
}

void MLPadOptions::mode(const MLPaddingMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::Any MLPadOptions::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void MLPadOptions::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind