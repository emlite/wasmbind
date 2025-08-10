#include "webbind/FilePickerAcceptType.hpp"

using emlite::Val;
namespace webbind {

FilePickerAcceptType::FilePickerAcceptType(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FilePickerAcceptType FilePickerAcceptType::take_ownership(Handle h) noexcept {
        return FilePickerAcceptType(h);
    }
FilePickerAcceptType::FilePickerAcceptType(const emlite::Val &val) noexcept: emlite::Val(val) {}
FilePickerAcceptType::FilePickerAcceptType() noexcept: emlite::Val(emlite::Val::object()) {}
FilePickerAcceptType FilePickerAcceptType::clone() const noexcept { return *this; }

jsbind::String FilePickerAcceptType::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

void FilePickerAcceptType::description(const jsbind::String& value) {
    emlite::Val::set("description", value);
}

jsbind::Record<jsbind::String, jsbind::Any> FilePickerAcceptType::accept() const {
    return emlite::Val::get("accept").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void FilePickerAcceptType::accept(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("accept", value);
}


} // namespace webbind