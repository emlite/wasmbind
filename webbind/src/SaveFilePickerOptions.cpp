#include <webbind/SaveFilePickerOptions.hpp>

namespace webbind {

SaveFilePickerOptions::SaveFilePickerOptions(Handle h) noexcept : FilePickerOptions(emlite::Val::take_ownership(h)) {}
SaveFilePickerOptions SaveFilePickerOptions::take_ownership(Handle h) noexcept {
    return SaveFilePickerOptions(h);
}

SaveFilePickerOptions::SaveFilePickerOptions(const emlite::Val &val) noexcept: FilePickerOptions(val) {}

SaveFilePickerOptions::SaveFilePickerOptions() noexcept: FilePickerOptions(emlite::Val::object()) {}

SaveFilePickerOptions SaveFilePickerOptions::clone() const noexcept { return *this; }

jsbind::String SaveFilePickerOptions::suggestedName() const {
    return emlite::Val::get("suggestedName").as<jsbind::String>();
}

void SaveFilePickerOptions::suggestedName(const jsbind::String& value) {
    emlite::Val::set("suggestedName", value);
}


} // namespace webbind