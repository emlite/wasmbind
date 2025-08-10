#include "webbind/FilePickerOptions.hpp"
#include "webbind/FilePickerAcceptType.hpp"

using emlite::Val;
namespace webbind {

FilePickerOptions::FilePickerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FilePickerOptions FilePickerOptions::take_ownership(Handle h) noexcept {
        return FilePickerOptions(h);
    }
FilePickerOptions::FilePickerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FilePickerOptions::FilePickerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FilePickerOptions FilePickerOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<FilePickerAcceptType> FilePickerOptions::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<FilePickerAcceptType>>();
}

void FilePickerOptions::types(const jsbind::TypedArray<FilePickerAcceptType>& value) {
    emlite::Val::set("types", value);
}

bool FilePickerOptions::excludeAcceptAllOption() const {
    return emlite::Val::get("excludeAcceptAllOption").as<bool>();
}

void FilePickerOptions::excludeAcceptAllOption(bool value) {
    emlite::Val::set("excludeAcceptAllOption", value);
}

jsbind::String FilePickerOptions::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void FilePickerOptions::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Any FilePickerOptions::startIn() const {
    return emlite::Val::get("startIn").as<jsbind::Any>();
}

void FilePickerOptions::startIn(const jsbind::Any& value) {
    emlite::Val::set("startIn", value);
}


} // namespace webbind