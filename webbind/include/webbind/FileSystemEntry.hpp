#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystem;


class FileSystemEntry : public emlite::Val {
    explicit FileSystemEntry(Handle h) noexcept;

public:
    explicit FileSystemEntry(const emlite::Val &val) noexcept;
    static FileSystemEntry take_ownership(Handle h) noexcept;

    FileSystemEntry clone() const noexcept;
    bool isFile() const;
    bool isDirectory() const;
    jsbind::USVString name() const;
    jsbind::USVString fullPath() const;
    FileSystem filesystem() const;
    jsbind::Undefined getParent(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

