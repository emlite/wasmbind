#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Blob.hpp"
#include "FilePropertyBag.hpp"

namespace webbind {

/// Interface File
/// [`File`](https://developer.mozilla.org/en-US/docs/Web/API/File)
class File : public Blob {
    explicit File(Handle h) noexcept;
public:
    explicit File(const emlite::Val &val) noexcept;
    static File take_ownership(Handle h) noexcept;
    [[nodiscard]] File clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new File(..)` constructor, creating a new File instance
    File(const jsbind::TypedArray<jsbind::Any>& fileBits, const jsbind::String& fileName);
    /// The `new File(..)` constructor, creating a new File instance
    File(const jsbind::TypedArray<jsbind::Any>& fileBits, const jsbind::String& fileName, const FilePropertyBag& options);
    /// [`File.name`](https://developer.mozilla.org/en-US/docs/Web/API/File/name)
    /// [`File.name`](https://developer.mozilla.org/en-US/docs/Web/API/File/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`File.lastModified`](https://developer.mozilla.org/en-US/docs/Web/API/File/lastModified)
    /// [`File.lastModified`](https://developer.mozilla.org/en-US/docs/Web/API/File/lastModified)
    [[nodiscard]] long long lastModified() const;
    /// [`File.webkitRelativePath`](https://developer.mozilla.org/en-US/docs/Web/API/File/webkitRelativePath)
    /// [`File.webkitRelativePath`](https://developer.mozilla.org/en-US/docs/Web/API/File/webkitRelativePath)
    [[nodiscard]] jsbind::String webkitRelativePath() const;
};

} // namespace webbind