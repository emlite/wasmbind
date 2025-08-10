#include <webbind/FileSystemGetFileOptions.hpp>

namespace webbind {

FileSystemGetFileOptions::FileSystemGetFileOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemGetFileOptions FileSystemGetFileOptions::take_ownership(Handle h) noexcept {
    return FileSystemGetFileOptions(h);
}

FileSystemGetFileOptions::FileSystemGetFileOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

FileSystemGetFileOptions::FileSystemGetFileOptions() noexcept: emlite::Val(emlite::Val::object()) {}

FileSystemGetFileOptions FileSystemGetFileOptions::clone() const noexcept { return *this; }

bool FileSystemGetFileOptions::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemGetFileOptions::create(bool value) {
    emlite::Val::set("create", value);
}


} // namespace webbind