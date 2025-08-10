#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaImage.hpp"

namespace webbind {

/// Interface ChapterInformation
/// [`ChapterInformation`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation)
class ChapterInformation : public emlite::Val {
    explicit ChapterInformation(Handle h) noexcept;
public:
    explicit ChapterInformation(const emlite::Val &val) noexcept;
    static ChapterInformation take_ownership(Handle h) noexcept;
    [[nodiscard]] ChapterInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ChapterInformation.title`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/title)
    /// [`ChapterInformation.title`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/title)
    [[nodiscard]] jsbind::String title() const;
    /// [`ChapterInformation.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/startTime)
    /// [`ChapterInformation.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/startTime)
    [[nodiscard]] double startTime() const;
    /// [`ChapterInformation.artwork`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/artwork)
    /// [`ChapterInformation.artwork`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation/artwork)
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
};

} // namespace webbind