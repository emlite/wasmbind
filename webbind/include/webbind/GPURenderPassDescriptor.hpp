#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

class GPURenderPassColorAttachment;
class GPURenderPassDepthStencilAttachment;
class GPUQuerySet;
class GPURenderPassTimestampWrites;

/// Dictionary type GPURenderPassDescriptor
class GPURenderPassDescriptor : public GPUObjectDescriptorBase {
  explicit GPURenderPassDescriptor(Handle h) noexcept;
public:
    static GPURenderPassDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPassDescriptor(const emlite::Val &val) noexcept;
    GPURenderPassDescriptor() noexcept;
    [[nodiscard]] GPURenderPassDescriptor clone() const noexcept;
    /// Getter of the `colorAttachments` attribute.
    [[nodiscard]] jsbind::TypedArray<GPURenderPassColorAttachment> colorAttachments() const;
    /// Setter of the `colorAttachments` attribute.
    void colorAttachments(const jsbind::TypedArray<GPURenderPassColorAttachment>& value);
    /// Getter of the `depthStencilAttachment` attribute.
    [[nodiscard]] GPURenderPassDepthStencilAttachment depthStencilAttachment() const;
    /// Setter of the `depthStencilAttachment` attribute.
    void depthStencilAttachment(const GPURenderPassDepthStencilAttachment& value);
    /// Getter of the `occlusionQuerySet` attribute.
    [[nodiscard]] GPUQuerySet occlusionQuerySet() const;
    /// Setter of the `occlusionQuerySet` attribute.
    void occlusionQuerySet(const GPUQuerySet& value);
    /// Getter of the `timestampWrites` attribute.
    [[nodiscard]] GPURenderPassTimestampWrites timestampWrites() const;
    /// Setter of the `timestampWrites` attribute.
    void timestampWrites(const GPURenderPassTimestampWrites& value);
    /// Getter of the `maxDrawCount` attribute.
    [[nodiscard]] jsbind::Any maxDrawCount() const;
    /// Setter of the `maxDrawCount` attribute.
    void maxDrawCount(const jsbind::Any& value);
};

} // namespace webbind