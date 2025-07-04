#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemEntry.hpp"
#include "enums.hpp"

class FileSystemDirectoryReader;
class FileSystemFlags;


class FileSystemFlags : public emlite::Val {
  explicit FileSystemFlags(Handle h) noexcept;
public:
    static FileSystemFlags take_ownership(Handle h) noexcept;
    explicit FileSystemFlags(const emlite::Val &val) noexcept;
    FileSystemFlags() noexcept;
    FileSystemFlags clone() const noexcept;
    bool create() const;
    void create(bool value);
    bool exclusive() const;
    void exclusive(bool value);
};

class FileSystemDirectoryEntry : public FileSystemEntry {
    explicit FileSystemDirectoryEntry(Handle h) noexcept;

public:
    explicit FileSystemDirectoryEntry(const emlite::Val &val) noexcept;
    static FileSystemDirectoryEntry take_ownership(Handle h) noexcept;

    FileSystemDirectoryEntry clone() const noexcept;
    FileSystemDirectoryReader createReader();
    jsbind::Undefined getFile(const jsbind::USVString& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
    jsbind::Undefined getDirectory(const jsbind::USVString& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

