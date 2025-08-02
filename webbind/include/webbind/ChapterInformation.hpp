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
    [[nodiscard]] MediaImage clone() const noexcept;
    [[nodiscard]] jsbind::String src() const;
    void src(const jsbind::String& value);
    [[nodiscard]] jsbind::String sizes() const;
    void sizes(const jsbind::String& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
};

/// The ChapterInformation class.
/// [`ChapterInformation`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation)
class ChapterInformation : public emlite::Val {
    explicit ChapterInformation(Handle h) noexcept;

public:
    explicit ChapterInformation(const emlite::Val &val) noexcept;
    static ChapterInformation take_ownership(Handle h) noexcept;

    [[nodiscard]] ChapterInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `title` attribute.
    /// [`ChapterInformation.title`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/title)
    [[nodiscard]] jsbind::String title() const;
    /// Getter of the `startTime` attribute.
    /// [`ChapterInformation.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/startTime)
    [[nodiscard]] double startTime() const;
    /// Getter of the `artwork` attribute.
    /// [`ChapterInformation.artwork`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/artwork)
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
};

