#include "webbind/FileSystemReadWriteOptions.hpp"

using emlite::Val;
namespace webbind {

FileSystemReadWriteOptions::FileSystemReadWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemReadWriteOptions FileSystemReadWriteOptions::take_ownership(Handle h) noexcept {
        return FileSystemReadWriteOptions(h);
    }
FileSystemReadWriteOptions::FileSystemReadWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemReadWriteOptions::FileSystemReadWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemReadWriteOptions FileSystemReadWriteOptions::clone() const noexcept { return *this; }

long long FileSystemReadWriteOptions::at() const {
    return emlite::Val::get("at").as<long long>();
}

void FileSystemReadWriteOptions::at(long long value) {
    emlite::Val::set("at", value);
}


} // namespace webbind