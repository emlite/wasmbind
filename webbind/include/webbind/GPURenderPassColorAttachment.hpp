#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUTextureView;

/// Dictionary type GPURenderPassColorAttachment
class GPURenderPassColorAttachment : public emlite::Val {
  explicit GPURenderPassColorAttachment(Handle h) noexcept;
public:
    static GPURenderPassColorAttachment take_ownership(Handle h) noexcept;
    explicit GPURenderPassColorAttachment(const emlite::Val &val) noexcept;
    GPURenderPassColorAttachment() noexcept;
    [[nodiscard]] GPURenderPassColorAttachment clone() const noexcept;
    /// Getter of the `view` attribute.
    [[nodiscard]] GPUTextureView view() const;
    /// Setter of the `view` attribute.
    void view(const GPUTextureView& value);
    /// Getter of the `depthSlice` attribute.
    [[nodiscard]] jsbind::Any depthSlice() const;
    /// Setter of the `depthSlice` attribute.
    void depthSlice(const jsbind::Any& value);
    /// Getter of the `resolveTarget` attribute.
    [[nodiscard]] GPUTextureView resolveTarget() const;
    /// Setter of the `resolveTarget` attribute.
    void resolveTarget(const GPUTextureView& value);
    /// Getter of the `clearValue` attribute.
    [[nodiscard]] jsbind::Any clearValue() const;
    /// Setter of the `clearValue` attribute.
    void clearValue(const jsbind::Any& value);
    /// Getter of the `loadOp` attribute.
    [[nodiscard]] GPULoadOp loadOp() const;
    /// Setter of the `loadOp` attribute.
    void loadOp(const GPULoadOp& value);
    /// Getter of the `storeOp` attribute.
    [[nodiscard]] GPUStoreOp storeOp() const;
    /// Setter of the `storeOp` attribute.
    void storeOp(const GPUStoreOp& value);
};

} // namespace webbind