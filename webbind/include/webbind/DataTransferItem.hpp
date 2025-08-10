#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class File;
class FileSystemEntry;
class FileSystemHandle;

/// Interface DataTransferItem
/// [`DataTransferItem`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem)
class DataTransferItem : public emlite::Val {
    explicit DataTransferItem(Handle h) noexcept;
public:
    explicit DataTransferItem(const emlite::Val &val) noexcept;
    static DataTransferItem take_ownership(Handle h) noexcept;
    [[nodiscard]] DataTransferItem clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `kind` attribute.
    /// [`DataTransferItem.kind`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// Getter of the `type` attribute.
    /// [`DataTransferItem.type`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/type)
    [[nodiscard]] jsbind::String type() const;
    /// The getAsString method.
    /// [`DataTransferItem.getAsString`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/getAsString)
    jsbind::Undefined getAsString(const jsbind::Function& callback);
    /// The getAsFile method.
    /// [`DataTransferItem.getAsFile`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/getAsFile)
    File getAsFile();
    /// The webkitGetAsEntry method.
    /// [`DataTransferItem.webkitGetAsEntry`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/webkitGetAsEntry)
    FileSystemEntry webkitGetAsEntry();
    /// The getAsFileSystemHandle method.
    /// [`DataTransferItem.getAsFileSystemHandle`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem/getAsFileSystemHandle)
    jsbind::Promise<FileSystemHandle> getAsFileSystemHandle();
};

} // namespace webbind