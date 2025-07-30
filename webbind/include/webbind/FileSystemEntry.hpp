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
    jsbind::String name() const;
    jsbind::String fullPath() const;
    FileSystem filesystem() const;
    jsbind::Undefined getParent();
    jsbind::Undefined getParent(const jsbind::Function& successCallback);
    jsbind::Undefined getParent(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

