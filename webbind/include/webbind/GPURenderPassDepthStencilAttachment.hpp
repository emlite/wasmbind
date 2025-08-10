#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUTextureView;

/// Dictionary type GPURenderPassDepthStencilAttachment
/// [`GPURenderPassDepthStencilAttachment`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassDepthStencilAttachment)
class GPURenderPassDepthStencilAttachment : public emlite::Val {
  explicit GPURenderPassDepthStencilAttachment(Handle h) noexcept;
public:
    static GPURenderPassDepthStencilAttachment take_ownership(Handle h) noexcept;
    explicit GPURenderPassDepthStencilAttachment(const emlite::Val &val) noexcept;
    GPURenderPassDepthStencilAttachment() noexcept;
    [[nodiscard]] GPURenderPassDepthStencilAttachment clone() const noexcept;
    [[nodiscard]] GPUTextureView view() const;
    void view(const GPUTextureView& value);
    [[nodiscard]] float depthClearValue() const;
    void depthClearValue(float value);
    [[nodiscard]] GPULoadOp depthLoadOp() const;
    void depthLoadOp(const GPULoadOp& value);
    [[nodiscard]] GPUStoreOp depthStoreOp() const;
    void depthStoreOp(const GPUStoreOp& value);
    [[nodiscard]] bool depthReadOnly() const;
    void depthReadOnly(bool value);
    [[nodiscard]] jsbind::Any stencilClearValue() const;
    void stencilClearValue(const jsbind::Any& value);
    [[nodiscard]] GPULoadOp stencilLoadOp() const;
    void stencilLoadOp(const GPULoadOp& value);
    [[nodiscard]] GPUStoreOp stencilStoreOp() const;
    void stencilStoreOp(const GPUStoreOp& value);
    [[nodiscard]] bool stencilReadOnly() const;
    void stencilReadOnly(bool value);
};

} // namespace webbind