#include "webbind/DirectoryPickerOptions.hpp"

using emlite::Val;
namespace webbind {

DirectoryPickerOptions::DirectoryPickerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DirectoryPickerOptions DirectoryPickerOptions::take_ownership(Handle h) noexcept {
        return DirectoryPickerOptions(h);
    }
DirectoryPickerOptions::DirectoryPickerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DirectoryPickerOptions::DirectoryPickerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DirectoryPickerOptions DirectoryPickerOptions::clone() const noexcept { return *this; }

jsbind::String DirectoryPickerOptions::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void DirectoryPickerOptions::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Any DirectoryPickerOptions::startIn() const {
    return emlite::Val::get("startIn").as<jsbind::Any>();
}

void DirectoryPickerOptions::startIn(const jsbind::Any& value) {
    emlite::Val::set("startIn", value);
}

FileSystemPermissionMode DirectoryPickerOptions::mode() const {
    return emlite::Val::get("mode").as<FileSystemPermissionMode>();
}

void DirectoryPickerOptions::mode(const FileSystemPermissionMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind