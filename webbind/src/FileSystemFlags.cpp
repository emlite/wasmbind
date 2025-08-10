#include "webbind/FileSystemFlags.hpp"

using emlite::Val;
namespace webbind {

FileSystemFlags::FileSystemFlags(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemFlags FileSystemFlags::take_ownership(Handle h) noexcept {
        return FileSystemFlags(h);
    }
FileSystemFlags::FileSystemFlags(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemFlags::FileSystemFlags() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemFlags FileSystemFlags::clone() const noexcept { return *this; }

bool FileSystemFlags::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemFlags::create(bool value) {
    emlite::Val::set("create", value);
}

bool FileSystemFlags::exclusive() const {
    return emlite::Val::get("exclusive").as<bool>();
}

void FileSystemFlags::exclusive(bool value) {
    emlite::Val::set("exclusive", value);
}


} // namespace webbind