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
    MediaMetadata(const jsbind::Any& init);
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    jsbind::DOMString artist() const;
    void artist(const jsbind::DOMString& value);
    jsbind::DOMString album() const;
    void album(const jsbind::DOMString& value);
    jsbind::FrozenArray<jsbind::Object> artwork() const;
    void artwork(const jsbind::FrozenArray<jsbind::Object>& value);
    jsbind::FrozenArray<ChapterInformation> chapterInfo() const;
};

