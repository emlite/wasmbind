#include "webbind/PushPermissionDescriptor.hpp"

using emlite::Val;
namespace webbind {

PushPermissionDescriptor::PushPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
PushPermissionDescriptor PushPermissionDescriptor::take_ownership(Handle h) noexcept {
        return PushPermissionDescriptor(h);
    }
PushPermissionDescriptor::PushPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
PushPermissionDescriptor::PushPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
PushPermissionDescriptor PushPermissionDescriptor::clone() const noexcept { return *this; }

bool PushPermissionDescriptor::userVisibleOnly() const {
    return emlite::Val::get("userVisibleOnly").as<bool>();
}

void PushPermissionDescriptor::userVisibleOnly(bool value) {
    emlite::Val::set("userVisibleOnly", value);
}


} // namespace webbind