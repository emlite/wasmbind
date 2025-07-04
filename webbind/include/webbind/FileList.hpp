#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class File;


class FileList : public emlite::Val {
    explicit FileList(Handle h) noexcept;

public:
    explicit FileList(const emlite::Val &val) noexcept;
    static FileList take_ownership(Handle h) noexcept;

    FileList clone() const noexcept;
    File item(unsigned long index);
    unsigned long length() const;
};

