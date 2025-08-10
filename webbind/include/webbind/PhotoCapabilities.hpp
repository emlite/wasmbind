#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaSettingsRange.hpp"

namespace webbind {

/// Dictionary type PhotoCapabilities
/// [`PhotoCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/PhotoCapabilities)
class PhotoCapabilities : public emlite::Val {
  explicit PhotoCapabilities(Handle h) noexcept;
public:
    static PhotoCapabilities take_ownership(Handle h) noexcept;
    explicit PhotoCapabilities(const emlite::Val &val) noexcept;
    PhotoCapabilities() noexcept;
    [[nodiscard]] PhotoCapabilities clone() const noexcept;
    [[nodiscard]] RedEyeReduction redEyeReduction() const;
    void redEyeReduction(const RedEyeReduction& value);
    [[nodiscard]] MediaSettingsRange imageHeight() const;
    void imageHeight(const MediaSettingsRange& value);
    [[nodiscard]] MediaSettingsRange imageWidth() const;
    void imageWidth(const MediaSettingsRange& value);
    [[nodiscard]] jsbind::TypedArray<FillLightMode> fillLightMode() const;
    void fillLightMode(const jsbind::TypedArray<FillLightMode>& value);
};

} // namespace webbind