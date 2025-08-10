#include "webbind/ClipboardPermissionDescriptor.hpp"

using emlite::Val;
namespace webbind {

ClipboardPermissionDescriptor::ClipboardPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
ClipboardPermissionDescriptor ClipboardPermissionDescriptor::take_ownership(Handle h) noexcept {
        return ClipboardPermissionDescriptor(h);
    }
ClipboardPermissionDescriptor::ClipboardPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
ClipboardPermissionDescriptor::ClipboardPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
ClipboardPermissionDescriptor ClipboardPermissionDescriptor::clone() const noexcept { return *this; }

bool ClipboardPermissionDescriptor::allowWithoutGesture() const {
    return emlite::Val::get("allowWithoutGesture").as<bool>();
}

void ClipboardPermissionDescriptor::allowWithoutGesture(bool value) {
    emlite::Val::set("allowWithoutGesture", value);
}


} // namespace webbind