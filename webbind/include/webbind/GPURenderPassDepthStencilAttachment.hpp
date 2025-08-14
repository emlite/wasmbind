#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPURenderPassDepthStencilAttachment
class GPURenderPassDepthStencilAttachment : public emlite::Val {
  explicit GPURenderPassDepthStencilAttachment(Handle h) noexcept;
public:
    static GPURenderPassDepthStencilAttachment take_ownership(Handle h) noexcept;
    explicit GPURenderPassDepthStencilAttachment(const emlite::Val &val) noexcept;
    GPURenderPassDepthStencilAttachment() noexcept;
    [[nodiscard]] GPURenderPassDepthStencilAttachment clone() const noexcept;
    /// Getter of the `view` attribute.
    [[nodiscard]] jsbind::Any view() const;
    /// Setter of the `view` attribute.
    void view(const jsbind::Any& value);
    /// Getter of the `depthClearValue` attribute.
    [[nodiscard]] float depthClearValue() const;
    /// Setter of the `depthClearValue` attribute.
    void depthClearValue(float value);
    /// Getter of the `depthLoadOp` attribute.
    [[nodiscard]] GPULoadOp depthLoadOp() const;
    /// Setter of the `depthLoadOp` attribute.
    void depthLoadOp(const GPULoadOp& value);
    /// Getter of the `depthStoreOp` attribute.
    [[nodiscard]] GPUStoreOp depthStoreOp() const;
    /// Setter of the `depthStoreOp` attribute.
    void depthStoreOp(const GPUStoreOp& value);
    /// Getter of the `depthReadOnly` attribute.
    [[nodiscard]] bool depthReadOnly() const;
    /// Setter of the `depthReadOnly` attribute.
    void depthReadOnly(bool value);
    /// Getter of the `stencilClearValue` attribute.
    [[nodiscard]] jsbind::Any stencilClearValue() const;
    /// Setter of the `stencilClearValue` attribute.
    void stencilClearValue(const jsbind::Any& value);
    /// Getter of the `stencilLoadOp` attribute.
    [[nodiscard]] GPULoadOp stencilLoadOp() const;
    /// Setter of the `stencilLoadOp` attribute.
    void stencilLoadOp(const GPULoadOp& value);
    /// Getter of the `stencilStoreOp` attribute.
    [[nodiscard]] GPUStoreOp stencilStoreOp() const;
    /// Setter of the `stencilStoreOp` attribute.
    void stencilStoreOp(const GPUStoreOp& value);
    /// Getter of the `stencilReadOnly` attribute.
    [[nodiscard]] bool stencilReadOnly() const;
    /// Setter of the `stencilReadOnly` attribute.
    void stencilReadOnly(bool value);
};

} // namespace webbind