#include <webbind/FileSystemRemoveOptions.hpp>

namespace webbind {

FileSystemRemoveOptions::FileSystemRemoveOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemRemoveOptions FileSystemRemoveOptions::take_ownership(Handle h) noexcept {
    return FileSystemRemoveOptions(h);
}

FileSystemRemoveOptions::FileSystemRemoveOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

FileSystemRemoveOptions::FileSystemRemoveOptions() noexcept: emlite::Val(emlite::Val::object()) {}

FileSystemRemoveOptions FileSystemRemoveOptions::clone() const noexcept { return *this; }

bool FileSystemRemoveOptions::recursive() const {
    return emlite::Val::get("recursive").as<bool>();
}

void FileSystemRemoveOptions::recursive(bool value) {
    emlite::Val::set("recursive", value);
}


} // namespace webbind