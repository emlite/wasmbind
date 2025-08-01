#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ChapterInformation;


/// The MediaMetadata class.
/// [`MediaMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata)
class MediaMetadata : public emlite::Val {
    explicit MediaMetadata(Handle h) noexcept;

public:
    explicit MediaMetadata(const emlite::Val &val) noexcept;
    static MediaMetadata take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaMetadata clone() const noexcept;
    /// The `new MediaMetadata(..)` constructor, creating a new MediaMetadata instance
    MediaMetadata();
    /// The `new MediaMetadata(..)` constructor, creating a new MediaMetadata instance
    MediaMetadata(const jsbind::Any& init);
    /// Getter of the `title` attribute.
    /// [`MediaMetadata.title`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/title)
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    /// [`MediaMetadata.title`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/title)
    void title(const jsbind::String& value);
    /// Getter of the `artist` attribute.
    /// [`MediaMetadata.artist`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/artist)
    [[nodiscard]] jsbind::String artist() const;
    /// Setter of the `artist` attribute.
    /// [`MediaMetadata.artist`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/artist)
    void artist(const jsbind::String& value);
    /// Getter of the `album` attribute.
    /// [`MediaMetadata.album`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/album)
    [[nodiscard]] jsbind::String album() const;
    /// Setter of the `album` attribute.
    /// [`MediaMetadata.album`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/album)
    void album(const jsbind::String& value);
    /// Getter of the `artwork` attribute.
    /// [`MediaMetadata.artwork`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/artwork)
    [[nodiscard]] jsbind::TypedArray<jsbind::Object> artwork() const;
    /// Setter of the `artwork` attribute.
    /// [`MediaMetadata.artwork`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/artwork)
    void artwork(const jsbind::TypedArray<jsbind::Object>& value);
    /// Getter of the `chapterInfo` attribute.
    /// [`MediaMetadata.chapterInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata/chapterInfo)
    [[nodiscard]] jsbind::TypedArray<ChapterInformation> chapterInfo() const;
};

