#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemEntry.hpp"
#include "enums.hpp"


class FileSystemFileEntry : public FileSystemEntry {
    explicit FileSystemFileEntry(Handle h) noexcept;

public:
    explicit FileSystemFileEntry(const emlite::Val &val) noexcept;
    static FileSystemFileEntry take_ownership(Handle h) noexcept;

    FileSystemFileEntry clone() const noexcept;
    jsbind::Undefined file(const jsbind::Function& successCallback);
    jsbind::Undefined file(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

