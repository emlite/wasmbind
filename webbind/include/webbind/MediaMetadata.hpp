#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ChapterInformation;


class MediaMetadata : public emlite::Val {
    explicit MediaMetadata(Handle h) noexcept;

public:
    explicit MediaMetadata(const emlite::Val &val) noexcept;
    static MediaMetadata take_ownership(Handle h) noexcept;

    MediaMetadata clone() const noexcept;
    MediaMetadata();
    MediaMetadata(const jsbind::Any& init);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    jsbind::String artist() const;
    void artist(const jsbind::String& value);
    jsbind::String album() const;
    void album(const jsbind::String& value);
    jsbind::TypedArray<jsbind::Object> artwork() const;
    void artwork(const jsbind::TypedArray<jsbind::Object>& value);
    jsbind::TypedArray<ChapterInformation> chapterInfo() const;
};

