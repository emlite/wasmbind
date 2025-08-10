#include <webbind/OpenFilePickerOptions.hpp>

namespace webbind {

OpenFilePickerOptions::OpenFilePickerOptions(Handle h) noexcept : FilePickerOptions(emlite::Val::take_ownership(h)) {}
OpenFilePickerOptions OpenFilePickerOptions::take_ownership(Handle h) noexcept {
    return OpenFilePickerOptions(h);
}

OpenFilePickerOptions::OpenFilePickerOptions(const emlite::Val &val) noexcept: FilePickerOptions(val) {}

OpenFilePickerOptions::OpenFilePickerOptions() noexcept: FilePickerOptions(emlite::Val::object()) {}

OpenFilePickerOptions OpenFilePickerOptions::clone() const noexcept { return *this; }

bool OpenFilePickerOptions::multiple() const {
    return emlite::Val::get("multiple").as<bool>();
}

void OpenFilePickerOptions::multiple(bool value) {
    emlite::Val::set("multiple", value);
}


} // namespace webbind