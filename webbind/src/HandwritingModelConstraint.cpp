#include <webbind/HandwritingModelConstraint.hpp>

using emlite::Val;
namespace webbind {

HandwritingModelConstraint::HandwritingModelConstraint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingModelConstraint HandwritingModelConstraint::take_ownership(Handle h) noexcept {
        return HandwritingModelConstraint(h);
    }
HandwritingModelConstraint::HandwritingModelConstraint(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingModelConstraint::HandwritingModelConstraint() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingModelConstraint HandwritingModelConstraint::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> HandwritingModelConstraint::languages() const {
    return emlite::Val::get("languages").as<jsbind::TypedArray<jsbind::String>>();
}

void HandwritingModelConstraint::languages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("languages", value);
}


} // namespace webbind