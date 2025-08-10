#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaImage.hpp"

namespace webbind {

/// Dictionary type ChapterInformationInit
/// [`ChapterInformationInit`](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformationInit)
class ChapterInformationInit : public emlite::Val {
  explicit ChapterInformationInit(Handle h) noexcept;
public:
    static ChapterInformationInit take_ownership(Handle h) noexcept;
    explicit ChapterInformationInit(const emlite::Val &val) noexcept;
    ChapterInformationInit() noexcept;
    [[nodiscard]] ChapterInformationInit clone() const noexcept;
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] double startTime() const;
    void startTime(double value);
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
    void artwork(const jsbind::TypedArray<MediaImage>& value);
};

} // namespace webbind