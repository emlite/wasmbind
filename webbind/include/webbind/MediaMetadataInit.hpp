#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaImage;
class ChapterInformationInit;

/// Dictionary type MediaMetadataInit
class MediaMetadataInit : public emlite::Val {
  explicit MediaMetadataInit(Handle h) noexcept;
public:
    static MediaMetadataInit take_ownership(Handle h) noexcept;
    explicit MediaMetadataInit(const emlite::Val &val) noexcept;
    MediaMetadataInit() noexcept;
    [[nodiscard]] MediaMetadataInit clone() const noexcept;
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `artist` attribute.
    [[nodiscard]] jsbind::String artist() const;
    /// Setter of the `artist` attribute.
    void artist(const jsbind::String& value);
    /// Getter of the `album` attribute.
    [[nodiscard]] jsbind::String album() const;
    /// Setter of the `album` attribute.
    void album(const jsbind::String& value);
    /// Getter of the `artwork` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
    /// Setter of the `artwork` attribute.
    void artwork(const jsbind::TypedArray<MediaImage>& value);
    /// Getter of the `chapterInfo` attribute.
    [[nodiscard]] jsbind::TypedArray<ChapterInformationInit> chapterInfo() const;
    /// Setter of the `chapterInfo` attribute.
    void chapterInfo(const jsbind::TypedArray<ChapterInformationInit>& value);
};

} // namespace webbind