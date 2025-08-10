#include "webbind/MLGemmOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLGemmOptions::MLGemmOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLGemmOptions MLGemmOptions::take_ownership(Handle h) noexcept {
        return MLGemmOptions(h);
    }
MLGemmOptions::MLGemmOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLGemmOptions::MLGemmOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLGemmOptions MLGemmOptions::clone() const noexcept { return *this; }

MLOperand MLGemmOptions::c() const {
    return emlite::Val::get("c").as<MLOperand>();
}

void MLGemmOptions::c(const MLOperand& value) {
    emlite::Val::set("c", value);
}

double MLGemmOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLGemmOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLGemmOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLGemmOptions::beta(double value) {
    emlite::Val::set("beta", value);
}

bool MLGemmOptions::aTranspose() const {
    return emlite::Val::get("aTranspose").as<bool>();
}

void MLGemmOptions::aTranspose(bool value) {
    emlite::Val::set("aTranspose", value);
}

bool MLGemmOptions::bTranspose() const {
    return emlite::Val::get("bTranspose").as<bool>();
}

void MLGemmOptions::bTranspose(bool value) {
    emlite::Val::set("bTranspose", value);
}


} // namespace webbind