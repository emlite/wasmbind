#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPURenderPassColorAttachment.hpp"
#include "GPURenderPassDepthStencilAttachment.hpp"
#include "GPURenderPassTimestampWrites.hpp"

namespace webbind {

class GPUQuerySet;

/// Dictionary type GPURenderPassDescriptor
/// [`GPURenderPassDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassDescriptor)
class GPURenderPassDescriptor : public GPUObjectDescriptorBase {
  explicit GPURenderPassDescriptor(Handle h) noexcept;
public:
    static GPURenderPassDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPassDescriptor(const emlite::Val &val) noexcept;
    GPURenderPassDescriptor() noexcept;
    [[nodiscard]] GPURenderPassDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPURenderPassColorAttachment> colorAttachments() const;
    void colorAttachments(const jsbind::TypedArray<GPURenderPassColorAttachment>& value);
    [[nodiscard]] GPURenderPassDepthStencilAttachment depthStencilAttachment() const;
    void depthStencilAttachment(const GPURenderPassDepthStencilAttachment& value);
    [[nodiscard]] GPUQuerySet occlusionQuerySet() const;
    void occlusionQuerySet(const GPUQuerySet& value);
    [[nodiscard]] GPURenderPassTimestampWrites timestampWrites() const;
    void timestampWrites(const GPURenderPassTimestampWrites& value);
    [[nodiscard]] jsbind::Any maxDrawCount() const;
    void maxDrawCount(const jsbind::Any& value);
};

} // namespace webbind