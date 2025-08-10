#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackCapabilities
class MediaTrackCapabilities : public emlite::Val {
  explicit MediaTrackCapabilities(Handle h) noexcept;
public:
    static MediaTrackCapabilities take_ownership(Handle h) noexcept;
    explicit MediaTrackCapabilities(const emlite::Val &val) noexcept;
    MediaTrackCapabilities() noexcept;
    [[nodiscard]] MediaTrackCapabilities clone() const noexcept;
    /// Getter of the `displaySurface` attribute.
    [[nodiscard]] jsbind::String displaySurface() const;
    /// Setter of the `displaySurface` attribute.
    void displaySurface(const jsbind::String& value);
    /// Getter of the `logicalSurface` attribute.
    [[nodiscard]] bool logicalSurface() const;
    /// Setter of the `logicalSurface` attribute.
    void logicalSurface(bool value);
    /// Getter of the `cursor` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> cursor() const;
    /// Setter of the `cursor` attribute.
    void cursor(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind