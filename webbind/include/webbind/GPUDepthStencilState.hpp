#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUStencilFaceState.hpp"

namespace webbind {

/// Dictionary type GPUDepthStencilState
/// [`GPUDepthStencilState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDepthStencilState)
class GPUDepthStencilState : public emlite::Val {
  explicit GPUDepthStencilState(Handle h) noexcept;
public:
    static GPUDepthStencilState take_ownership(Handle h) noexcept;
    explicit GPUDepthStencilState(const emlite::Val &val) noexcept;
    GPUDepthStencilState() noexcept;
    [[nodiscard]] GPUDepthStencilState clone() const noexcept;
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] bool depthWriteEnabled() const;
    void depthWriteEnabled(bool value);
    [[nodiscard]] GPUCompareFunction depthCompare() const;
    void depthCompare(const GPUCompareFunction& value);
    [[nodiscard]] GPUStencilFaceState stencilFront() const;
    void stencilFront(const GPUStencilFaceState& value);
    [[nodiscard]] GPUStencilFaceState stencilBack() const;
    void stencilBack(const GPUStencilFaceState& value);
    [[nodiscard]] jsbind::Any stencilReadMask() const;
    void stencilReadMask(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any stencilWriteMask() const;
    void stencilWriteMask(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthBias() const;
    void depthBias(const jsbind::Any& value);
    [[nodiscard]] float depthBiasSlopeScale() const;
    void depthBiasSlopeScale(float value);
    [[nodiscard]] float depthBiasClamp() const;
    void depthBiasClamp(float value);
};

} // namespace webbind