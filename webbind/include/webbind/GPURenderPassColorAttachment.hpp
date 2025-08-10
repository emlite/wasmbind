#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUTextureView;

/// Dictionary type GPURenderPassColorAttachment
/// [`GPURenderPassColorAttachment`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassColorAttachment)
class GPURenderPassColorAttachment : public emlite::Val {
  explicit GPURenderPassColorAttachment(Handle h) noexcept;
public:
    static GPURenderPassColorAttachment take_ownership(Handle h) noexcept;
    explicit GPURenderPassColorAttachment(const emlite::Val &val) noexcept;
    GPURenderPassColorAttachment() noexcept;
    [[nodiscard]] GPURenderPassColorAttachment clone() const noexcept;
    [[nodiscard]] GPUTextureView view() const;
    void view(const GPUTextureView& value);
    [[nodiscard]] jsbind::Any depthSlice() const;
    void depthSlice(const jsbind::Any& value);
    [[nodiscard]] GPUTextureView resolveTarget() const;
    void resolveTarget(const GPUTextureView& value);
    [[nodiscard]] jsbind::Any clearValue() const;
    void clearValue(const jsbind::Any& value);
    [[nodiscard]] GPULoadOp loadOp() const;
    void loadOp(const GPULoadOp& value);
    [[nodiscard]] GPUStoreOp storeOp() const;
    void storeOp(const GPUStoreOp& value);
};

} // namespace webbind