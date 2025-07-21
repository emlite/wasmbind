#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class File;
class FileSystemEntry;
class FileSystemHandle;


class DataTransferItem : public emlite::Val {
    explicit DataTransferItem(Handle h) noexcept;

public:
    explicit DataTransferItem(const emlite::Val &val) noexcept;
    static DataTransferItem take_ownership(Handle h) noexcept;

    DataTransferItem clone() const noexcept;
    jsbind::DOMString kind() const;
    jsbind::DOMString type() const;
    jsbind::Undefined getAsString(const jsbind::Any& callback);
    File getAsFile();
    FileSystemEntry webkitGetAsEntry();
    jsbind::Promise<FileSystemHandle> getAsFileSystemHandle();
};

