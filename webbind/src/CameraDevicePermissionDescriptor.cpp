#include "webbind/CameraDevicePermissionDescriptor.hpp"

using emlite::Val;
namespace webbind {

CameraDevicePermissionDescriptor::CameraDevicePermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
CameraDevicePermissionDescriptor CameraDevicePermissionDescriptor::take_ownership(Handle h) noexcept {
        return CameraDevicePermissionDescriptor(h);
    }
CameraDevicePermissionDescriptor::CameraDevicePermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
CameraDevicePermissionDescriptor::CameraDevicePermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
CameraDevicePermissionDescriptor CameraDevicePermissionDescriptor::clone() const noexcept { return *this; }

bool CameraDevicePermissionDescriptor::panTiltZoom() const {
    return emlite::Val::get("panTiltZoom").as<bool>();
}

void CameraDevicePermissionDescriptor::panTiltZoom(bool value) {
    emlite::Val::set("panTiltZoom", value);
}


} // namespace webbind