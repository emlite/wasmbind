#include <webbind/FileSystemCreateWritableOptions.hpp>

using emlite::Val;
namespace webbind {

FileSystemCreateWritableOptions::FileSystemCreateWritableOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemCreateWritableOptions FileSystemCreateWritableOptions::take_ownership(Handle h) noexcept {
        return FileSystemCreateWritableOptions(h);
    }
FileSystemCreateWritableOptions::FileSystemCreateWritableOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemCreateWritableOptions::FileSystemCreateWritableOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemCreateWritableOptions FileSystemCreateWritableOptions::clone() const noexcept { return *this; }

bool FileSystemCreateWritableOptions::keepExistingData() const {
    return emlite::Val::get("keepExistingData").as<bool>();
}

void FileSystemCreateWritableOptions::keepExistingData(bool value) {
    emlite::Val::set("keepExistingData", value);
}


} // namespace webbind