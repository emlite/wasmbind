#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Blob;

/// Interface FileReaderSync
/// [`FileReaderSync`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync)
class FileReaderSync : public emlite::Val {
    explicit FileReaderSync(Handle h) noexcept;
public:
    explicit FileReaderSync(const emlite::Val &val) noexcept;
    static FileReaderSync take_ownership(Handle h) noexcept;
    [[nodiscard]] FileReaderSync clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FileReaderSync(..)` constructor, creating a new FileReaderSync instance
    FileReaderSync();
    /// The readAsArrayBuffer method.
    /// [`FileReaderSync.readAsArrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync/readAsArrayBuffer)
    jsbind::ArrayBuffer readAsArrayBuffer(const Blob& blob);
    /// The readAsBinaryString method.
    /// [`FileReaderSync.readAsBinaryString`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync/readAsBinaryString)
    jsbind::String readAsBinaryString(const Blob& blob);
    /// The readAsText method.
    /// [`FileReaderSync.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync/readAsText)
    jsbind::String readAsText(const Blob& blob);
    /// The readAsText method.
    /// [`FileReaderSync.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync/readAsText)
    jsbind::String readAsText(const Blob& blob, const jsbind::String& encoding);
    /// The readAsDataURL method.
    /// [`FileReaderSync.readAsDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync/readAsDataURL)
    jsbind::String readAsDataURL(const Blob& blob);
};

} // namespace webbind