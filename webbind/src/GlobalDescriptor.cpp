#include "webbind/GlobalDescriptor.hpp"

using emlite::Val;
namespace webbind {

GlobalDescriptor::GlobalDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GlobalDescriptor GlobalDescriptor::take_ownership(Handle h) noexcept {
        return GlobalDescriptor(h);
    }
GlobalDescriptor::GlobalDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GlobalDescriptor::GlobalDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GlobalDescriptor GlobalDescriptor::clone() const noexcept { return *this; }

ValueType GlobalDescriptor::value() const {
    return emlite::Val::get("value").as<ValueType>();
}

void GlobalDescriptor::value(const ValueType& value) {
    emlite::Val::set("value", value);
}

bool GlobalDescriptor::mutable_() const {
    return emlite::Val::get("mutable").as<bool>();
}

void GlobalDescriptor::mutable_(bool value) {
    emlite::Val::set("mutable", value);
}


} // namespace webbind