#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLDataTypeLimits::MLDataTypeLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLDataTypeLimits MLDataTypeLimits::take_ownership(Handle h) noexcept {
        return MLDataTypeLimits(h);
    }
MLDataTypeLimits::MLDataTypeLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLDataTypeLimits::MLDataTypeLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLDataTypeLimits MLDataTypeLimits::clone() const noexcept { return *this; }

jsbind::Any MLDataTypeLimits::dataTypes() const {
    return emlite::Val::get("dataTypes").as<jsbind::Any>();
}

void MLDataTypeLimits::dataTypes(const jsbind::Any& value) {
    emlite::Val::set("dataTypes", value);
}


} // namespace webbind