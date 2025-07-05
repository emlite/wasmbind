#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FileSystemDirectoryReader : public emlite::Val {
    explicit FileSystemDirectoryReader(Handle h) noexcept;

public:
    explicit FileSystemDirectoryReader(const emlite::Val &val) noexcept;
    static FileSystemDirectoryReader take_ownership(Handle h) noexcept;

    FileSystemDirectoryReader clone() const noexcept;
    jsbind::Undefined readEntries(const jsbind::Function& successCallback);
    jsbind::Undefined readEntries(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

