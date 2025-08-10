#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTexelCopyTextureInfo.hpp"

namespace webbind {

/// Dictionary type GPUCopyExternalImageDestInfo
class GPUCopyExternalImageDestInfo : public GPUTexelCopyTextureInfo {
  explicit GPUCopyExternalImageDestInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageDestInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageDestInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageDestInfo clone() const noexcept;
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
    /// Getter of the `premultipliedAlpha` attribute.
    [[nodiscard]] bool premultipliedAlpha() const;
    /// Setter of the `premultipliedAlpha` attribute.
    void premultipliedAlpha(bool value);
};

} // namespace webbind