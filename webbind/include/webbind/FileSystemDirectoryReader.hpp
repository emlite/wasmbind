#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FileSystemDirectoryReader class.
/// [`FileSystemDirectoryReader`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryReader)
class FileSystemDirectoryReader : public emlite::Val {
    explicit FileSystemDirectoryReader(Handle h) noexcept;

public:
    explicit FileSystemDirectoryReader(const emlite::Val &val) noexcept;
    static FileSystemDirectoryReader take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemDirectoryReader clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The readEntries method.
    /// [`FileSystemDirectoryReader.readEntries`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryReader/readEntries)
    jsbind::Undefined readEntries(const jsbind::Function& successCallback);
    /// The readEntries method.
    /// [`FileSystemDirectoryReader.readEntries`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryReader/readEntries)
    jsbind::Undefined readEntries(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

