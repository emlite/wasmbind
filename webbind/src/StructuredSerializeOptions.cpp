#include "webbind/StructuredSerializeOptions.hpp"

using emlite::Val;
namespace webbind {

StructuredSerializeOptions::StructuredSerializeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StructuredSerializeOptions StructuredSerializeOptions::take_ownership(Handle h) noexcept {
        return StructuredSerializeOptions(h);
    }
StructuredSerializeOptions::StructuredSerializeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StructuredSerializeOptions::StructuredSerializeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StructuredSerializeOptions StructuredSerializeOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Object> StructuredSerializeOptions::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::Object>>();
}

void StructuredSerializeOptions::transfer(const jsbind::TypedArray<jsbind::Object>& value) {
    emlite::Val::set("transfer", value);
}


} // namespace webbind