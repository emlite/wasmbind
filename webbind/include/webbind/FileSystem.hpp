#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemDirectoryEntry;


class FileSystem : public emlite::Val {
    explicit FileSystem(Handle h) noexcept;

public:
    explicit FileSystem(const emlite::Val &val) noexcept;
    static FileSystem take_ownership(Handle h) noexcept;

    FileSystem clone() const noexcept;
    jsbind::String name() const;
    FileSystemDirectoryEntry root() const;
};

