#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaImage.hpp"
#include "ChapterInformationInit.hpp"

namespace webbind {

/// Dictionary type MediaMetadataInit
/// [`MediaMetadataInit`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadataInit)
class MediaMetadataInit : public emlite::Val {
  explicit MediaMetadataInit(Handle h) noexcept;
public:
    static MediaMetadataInit take_ownership(Handle h) noexcept;
    explicit MediaMetadataInit(const emlite::Val &val) noexcept;
    MediaMetadataInit() noexcept;
    [[nodiscard]] MediaMetadataInit clone() const noexcept;
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String artist() const;
    void artist(const jsbind::String& value);
    [[nodiscard]] jsbind::String album() const;
    void album(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
    void artwork(const jsbind::TypedArray<MediaImage>& value);
    [[nodiscard]] jsbind::TypedArray<ChapterInformationInit> chapterInfo() const;
    void chapterInfo(const jsbind::TypedArray<ChapterInformationInit>& value);
};

} // namespace webbind