#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUStencilFaceState;

/// Dictionary type GPUDepthStencilState
class GPUDepthStencilState : public emlite::Val {
  explicit GPUDepthStencilState(Handle h) noexcept;
public:
    static GPUDepthStencilState take_ownership(Handle h) noexcept;
    explicit GPUDepthStencilState(const emlite::Val &val) noexcept;
    GPUDepthStencilState() noexcept;
    [[nodiscard]] GPUDepthStencilState clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUTextureFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUTextureFormat& value);
    /// Getter of the `depthWriteEnabled` attribute.
    [[nodiscard]] bool depthWriteEnabled() const;
    /// Setter of the `depthWriteEnabled` attribute.
    void depthWriteEnabled(bool value);
    /// Getter of the `depthCompare` attribute.
    [[nodiscard]] GPUCompareFunction depthCompare() const;
    /// Setter of the `depthCompare` attribute.
    void depthCompare(const GPUCompareFunction& value);
    /// Getter of the `stencilFront` attribute.
    [[nodiscard]] GPUStencilFaceState stencilFront() const;
    /// Setter of the `stencilFront` attribute.
    void stencilFront(const GPUStencilFaceState& value);
    /// Getter of the `stencilBack` attribute.
    [[nodiscard]] GPUStencilFaceState stencilBack() const;
    /// Setter of the `stencilBack` attribute.
    void stencilBack(const GPUStencilFaceState& value);
    /// Getter of the `stencilReadMask` attribute.
    [[nodiscard]] jsbind::Any stencilReadMask() const;
    /// Setter of the `stencilReadMask` attribute.
    void stencilReadMask(const jsbind::Any& value);
    /// Getter of the `stencilWriteMask` attribute.
    [[nodiscard]] jsbind::Any stencilWriteMask() const;
    /// Setter of the `stencilWriteMask` attribute.
    void stencilWriteMask(const jsbind::Any& value);
    /// Getter of the `depthBias` attribute.
    [[nodiscard]] jsbind::Any depthBias() const;
    /// Setter of the `depthBias` attribute.
    void depthBias(const jsbind::Any& value);
    /// Getter of the `depthBiasSlopeScale` attribute.
    [[nodiscard]] float depthBiasSlopeScale() const;
    /// Setter of the `depthBiasSlopeScale` attribute.
    void depthBiasSlopeScale(float value);
    /// Getter of the `depthBiasClamp` attribute.
    [[nodiscard]] float depthBiasClamp() const;
    /// Setter of the `depthBiasClamp` attribute.
    void depthBiasClamp(float value);
};

} // namespace webbind