#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class File;


/// The FileList class.
/// [`FileList`](https://developer.mozilla.org/en-US/docs/Web/API/FileList)
class FileList : public emlite::Val {
    explicit FileList(Handle h) noexcept;

public:
    explicit FileList(const emlite::Val &val) noexcept;
    static FileList take_ownership(Handle h) noexcept;

    [[nodiscard]] FileList clone() const noexcept;
    /// The item method.
    /// [`FileList.item`](https://developer.mozilla.org/en-US/docs/Web/API/FileList/item)
    File item(unsigned long index);
    /// Getter of the `length` attribute.
    /// [`FileList.length`](https://developer.mozilla.org/en-US/docs/Web/API/FileList/length)
    [[nodiscard]] unsigned long length() const;
};

