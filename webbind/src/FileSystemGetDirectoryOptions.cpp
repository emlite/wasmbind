#include <webbind/FileSystemGetDirectoryOptions.hpp>

using emlite::Val;
namespace webbind {

FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions::take_ownership(Handle h) noexcept {
        return FileSystemGetDirectoryOptions(h);
    }
FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions::clone() const noexcept { return *this; }

bool FileSystemGetDirectoryOptions::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemGetDirectoryOptions::create(bool value) {
    emlite::Val::set("create", value);
}


} // namespace webbind