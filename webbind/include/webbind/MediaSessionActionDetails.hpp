#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaSessionActionDetails
class MediaSessionActionDetails : public emlite::Val {
  explicit MediaSessionActionDetails(Handle h) noexcept;
public:
    static MediaSessionActionDetails take_ownership(Handle h) noexcept;
    explicit MediaSessionActionDetails(const emlite::Val &val) noexcept;
    MediaSessionActionDetails() noexcept;
    [[nodiscard]] MediaSessionActionDetails clone() const noexcept;
    /// Getter of the `action` attribute.
    [[nodiscard]] MediaSessionAction action() const;
    /// Setter of the `action` attribute.
    void action(const MediaSessionAction& value);
    /// Getter of the `seekOffset` attribute.
    [[nodiscard]] double seekOffset() const;
    /// Setter of the `seekOffset` attribute.
    void seekOffset(double value);
    /// Getter of the `seekTime` attribute.
    [[nodiscard]] double seekTime() const;
    /// Setter of the `seekTime` attribute.
    void seekTime(double value);
    /// Getter of the `fastSeek` attribute.
    [[nodiscard]] bool fastSeek() const;
    /// Setter of the `fastSeek` attribute.
    void fastSeek(bool value);
    /// Getter of the `isActivating` attribute.
    [[nodiscard]] bool isActivating() const;
    /// Setter of the `isActivating` attribute.
    void isActivating(bool value);
};

} // namespace webbind