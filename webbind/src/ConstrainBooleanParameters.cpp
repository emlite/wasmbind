#include "webbind/ConstrainBooleanParameters.hpp"

using emlite::Val;
namespace webbind {

ConstrainBooleanParameters::ConstrainBooleanParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConstrainBooleanParameters ConstrainBooleanParameters::take_ownership(Handle h) noexcept {
        return ConstrainBooleanParameters(h);
    }
ConstrainBooleanParameters::ConstrainBooleanParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
ConstrainBooleanParameters::ConstrainBooleanParameters() noexcept: emlite::Val(emlite::Val::object()) {}
ConstrainBooleanParameters ConstrainBooleanParameters::clone() const noexcept { return *this; }

bool ConstrainBooleanParameters::exact() const {
    return emlite::Val::get("exact").as<bool>();
}

void ConstrainBooleanParameters::exact(bool value) {
    emlite::Val::set("exact", value);
}

bool ConstrainBooleanParameters::ideal() const {
    return emlite::Val::get("ideal").as<bool>();
}

void ConstrainBooleanParameters::ideal(bool value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind