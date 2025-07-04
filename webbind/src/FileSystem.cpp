#include <webbind/FileSystem.hpp>
#include <webbind/FileSystemDirectoryEntry.hpp>


FileSystem FileSystem::take_ownership(Handle h) noexcept {
        return FileSystem(h);
    }
FileSystem FileSystem::clone() const noexcept { return *this; }
FileSystem::FileSystem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystem::FileSystem(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString FileSystem::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

FileSystemDirectoryEntry FileSystem::root() const {
    return emlite::Val::get("root").as<FileSystemDirectoryEntry>();
}

