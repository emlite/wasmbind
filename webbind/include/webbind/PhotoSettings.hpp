#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PhotoSettings
/// [`PhotoSettings`](https://developer.mozilla.org/en-US/docs/Web/API/PhotoSettings)
class PhotoSettings : public emlite::Val {
  explicit PhotoSettings(Handle h) noexcept;
public:
    static PhotoSettings take_ownership(Handle h) noexcept;
    explicit PhotoSettings(const emlite::Val &val) noexcept;
    PhotoSettings() noexcept;
    [[nodiscard]] PhotoSettings clone() const noexcept;
    [[nodiscard]] FillLightMode fillLightMode() const;
    void fillLightMode(const FillLightMode& value);
    [[nodiscard]] double imageHeight() const;
    void imageHeight(double value);
    [[nodiscard]] double imageWidth() const;
    void imageWidth(double value);
    [[nodiscard]] bool redEyeReduction() const;
    void redEyeReduction(bool value);
};

} // namespace webbind