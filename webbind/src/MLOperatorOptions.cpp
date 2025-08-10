#include "webbind/MLOperatorOptions.hpp"

using emlite::Val;
namespace webbind {

MLOperatorOptions::MLOperatorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOperatorOptions MLOperatorOptions::take_ownership(Handle h) noexcept {
        return MLOperatorOptions(h);
    }
MLOperatorOptions::MLOperatorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOperatorOptions::MLOperatorOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MLOperatorOptions MLOperatorOptions::clone() const noexcept { return *this; }

jsbind::String MLOperatorOptions::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void MLOperatorOptions::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind