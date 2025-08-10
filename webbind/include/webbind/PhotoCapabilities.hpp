#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaSettingsRange.hpp"

namespace webbind {

/// Dictionary type PhotoCapabilities
class PhotoCapabilities : public emlite::Val {
  explicit PhotoCapabilities(Handle h) noexcept;
public:
    static PhotoCapabilities take_ownership(Handle h) noexcept;
    explicit PhotoCapabilities(const emlite::Val &val) noexcept;
    PhotoCapabilities() noexcept;
    [[nodiscard]] PhotoCapabilities clone() const noexcept;
    /// Getter of the `redEyeReduction` attribute.
    [[nodiscard]] RedEyeReduction redEyeReduction() const;
    /// Setter of the `redEyeReduction` attribute.
    void redEyeReduction(const RedEyeReduction& value);
    /// Getter of the `imageHeight` attribute.
    [[nodiscard]] MediaSettingsRange imageHeight() const;
    /// Setter of the `imageHeight` attribute.
    void imageHeight(const MediaSettingsRange& value);
    /// Getter of the `imageWidth` attribute.
    [[nodiscard]] MediaSettingsRange imageWidth() const;
    /// Setter of the `imageWidth` attribute.
    void imageWidth(const MediaSettingsRange& value);
    /// Getter of the `fillLightMode` attribute.
    [[nodiscard]] jsbind::TypedArray<FillLightMode> fillLightMode() const;
    /// Setter of the `fillLightMode` attribute.
    void fillLightMode(const jsbind::TypedArray<FillLightMode>& value);
};

} // namespace webbind