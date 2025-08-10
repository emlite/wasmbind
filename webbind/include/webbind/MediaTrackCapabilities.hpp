#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackCapabilities
/// [`MediaTrackCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/MediaTrackCapabilities)
class MediaTrackCapabilities : public emlite::Val {
  explicit MediaTrackCapabilities(Handle h) noexcept;
public:
    static MediaTrackCapabilities take_ownership(Handle h) noexcept;
    explicit MediaTrackCapabilities(const emlite::Val &val) noexcept;
    MediaTrackCapabilities() noexcept;
    [[nodiscard]] MediaTrackCapabilities clone() const noexcept;
    [[nodiscard]] jsbind::String displaySurface() const;
    void displaySurface(const jsbind::String& value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> cursor() const;
    void cursor(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind