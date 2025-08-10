#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PhotoSettings
class PhotoSettings : public emlite::Val {
  explicit PhotoSettings(Handle h) noexcept;
public:
    static PhotoSettings take_ownership(Handle h) noexcept;
    explicit PhotoSettings(const emlite::Val &val) noexcept;
    PhotoSettings() noexcept;
    [[nodiscard]] PhotoSettings clone() const noexcept;
    /// Getter of the `fillLightMode` attribute.
    [[nodiscard]] FillLightMode fillLightMode() const;
    /// Setter of the `fillLightMode` attribute.
    void fillLightMode(const FillLightMode& value);
    /// Getter of the `imageHeight` attribute.
    [[nodiscard]] double imageHeight() const;
    /// Setter of the `imageHeight` attribute.
    void imageHeight(double value);
    /// Getter of the `imageWidth` attribute.
    [[nodiscard]] double imageWidth() const;
    /// Setter of the `imageWidth` attribute.
    void imageWidth(double value);
    /// Getter of the `redEyeReduction` attribute.
    [[nodiscard]] bool redEyeReduction() const;
    /// Setter of the `redEyeReduction` attribute.
    void redEyeReduction(bool value);
};

} // namespace webbind