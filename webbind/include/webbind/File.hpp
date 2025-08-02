#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Blob.hpp"
#include "enums.hpp"


/// The File class.
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
    File(const jsbind::TypedArray<jsbind::Any>& fileBits, const jsbind::String& fileName, const jsbind::Any& options);
    /// Getter of the `name` attribute.
    /// [`File.name`](https://developer.mozilla.org/en-US/docs/Web/API/File/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `lastModified` attribute.
    /// [`File.lastModified`](https://developer.mozilla.org/en-US/docs/Web/API/File/lastModified)
    [[nodiscard]] long long lastModified() const;
    /// Getter of the `webkitRelativePath` attribute.
    /// [`File.webkitRelativePath`](https://developer.mozilla.org/en-US/docs/Web/API/File/webkitRelativePath)
    [[nodiscard]] jsbind::String webkitRelativePath() const;
};

