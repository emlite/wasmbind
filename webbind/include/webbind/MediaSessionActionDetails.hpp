#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaSessionActionDetails
/// [`MediaSessionActionDetails`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSessionActionDetails)
class MediaSessionActionDetails : public emlite::Val {
  explicit MediaSessionActionDetails(Handle h) noexcept;
public:
    static MediaSessionActionDetails take_ownership(Handle h) noexcept;
    explicit MediaSessionActionDetails(const emlite::Val &val) noexcept;
    MediaSessionActionDetails() noexcept;
    [[nodiscard]] MediaSessionActionDetails clone() const noexcept;
    [[nodiscard]] MediaSessionAction action() const;
    void action(const MediaSessionAction& value);
    [[nodiscard]] double seekOffset() const;
    void seekOffset(double value);
    [[nodiscard]] double seekTime() const;
    void seekTime(double value);
    [[nodiscard]] bool fastSeek() const;
    void fastSeek(bool value);
    [[nodiscard]] bool isActivating() const;
    void isActivating(bool value);
};

} // namespace webbind