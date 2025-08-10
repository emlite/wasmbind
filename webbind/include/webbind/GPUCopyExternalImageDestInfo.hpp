#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTexelCopyTextureInfo.hpp"

namespace webbind {

/// Dictionary type GPUCopyExternalImageDestInfo
/// [`GPUCopyExternalImageDestInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCopyExternalImageDestInfo)
class GPUCopyExternalImageDestInfo : public GPUTexelCopyTextureInfo {
  explicit GPUCopyExternalImageDestInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageDestInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageDestInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageDestInfo clone() const noexcept;
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    [[nodiscard]] bool premultipliedAlpha() const;
    void premultipliedAlpha(bool value);
};

} // namespace webbind