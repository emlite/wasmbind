#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaImage;


class MediaImage : public emlite::Val {
  explicit MediaImage(Handle h) noexcept;
public:
    static MediaImage take_ownership(Handle h) noexcept;
    explicit MediaImage(const emlite::Val &val) noexcept;
    MediaImage() noexcept;
    MediaImage clone() const noexcept;
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString sizes() const;
    void sizes(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
};

class ChapterInformation : public emlite::Val {
    explicit ChapterInformation(Handle h) noexcept;

public:
    explicit ChapterInformation(const emlite::Val &val) noexcept;
    static ChapterInformation take_ownership(Handle h) noexcept;

    ChapterInformation clone() const noexcept;
    jsbind::DOMString title() const;
    double startTime() const;
    jsbind::FrozenArray<MediaImage> artwork() const;
};

