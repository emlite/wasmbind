#include "webbind/MLTensorDescriptor.hpp"

using emlite::Val;
namespace webbind {

MLTensorDescriptor::MLTensorDescriptor(Handle h) noexcept : MLOperandDescriptor(emlite::Val::take_ownership(h)) {}
MLTensorDescriptor MLTensorDescriptor::take_ownership(Handle h) noexcept {
        return MLTensorDescriptor(h);
    }
MLTensorDescriptor::MLTensorDescriptor(const emlite::Val &val) noexcept: MLOperandDescriptor(val) {}
MLTensorDescriptor::MLTensorDescriptor() noexcept: MLOperandDescriptor(emlite::Val::object()) {}
MLTensorDescriptor MLTensorDescriptor::clone() const noexcept { return *this; }

bool MLTensorDescriptor::readable() const {
    return emlite::Val::get("readable").as<bool>();
}

void MLTensorDescriptor::readable(bool value) {
    emlite::Val::set("readable", value);
}

bool MLTensorDescriptor::writable() const {
    return emlite::Val::get("writable").as<bool>();
}

void MLTensorDescriptor::writable(bool value) {
    emlite::Val::set("writable", value);
}


} // namespace webbind