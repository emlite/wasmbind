#include <webbind/FileSystem.hpp>
#include <webbind/FileSystemDirectoryEntry.hpp>

namespace webbind {

FileSystem FileSystem::take_ownership(Handle h) noexcept {
    return FileSystem(h);
}

FileSystem FileSystem::clone() const noexcept { return *this; }

emlite::Val FileSystem::instance() noexcept { return emlite::Val::global("FileSystem"); }

FileSystem::FileSystem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FileSystem::FileSystem(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String FileSystem::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

FileSystemDirectoryEntry FileSystem::root() const {
    return emlite::Val::get("root").as<FileSystemDirectoryEntry>();
}


} // namespace webbind