#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaImage.hpp"

namespace webbind {

/// Dictionary type ChapterInformationInit
class ChapterInformationInit : public emlite::Val {
  explicit ChapterInformationInit(Handle h) noexcept;
public:
    static ChapterInformationInit take_ownership(Handle h) noexcept;
    explicit ChapterInformationInit(const emlite::Val &val) noexcept;
    ChapterInformationInit() noexcept;
    [[nodiscard]] ChapterInformationInit clone() const noexcept;
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `startTime` attribute.
    [[nodiscard]] double startTime() const;
    /// Setter of the `startTime` attribute.
    void startTime(double value);
    /// Getter of the `artwork` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaImage> artwork() const;
    /// Setter of the `artwork` attribute.
    void artwork(const jsbind::TypedArray<MediaImage>& value);
};

} // namespace webbind