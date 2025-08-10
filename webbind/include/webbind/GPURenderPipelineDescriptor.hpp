#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUPipelineDescriptorBase.hpp"

namespace webbind {

class GPUVertexState;
class GPUPrimitiveState;
class GPUDepthStencilState;
class GPUMultisampleState;
class GPUFragmentState;

/// Dictionary type GPURenderPipelineDescriptor
class GPURenderPipelineDescriptor : public GPUPipelineDescriptorBase {
  explicit GPURenderPipelineDescriptor(Handle h) noexcept;
public:
    static GPURenderPipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPipelineDescriptor(const emlite::Val &val) noexcept;
    GPURenderPipelineDescriptor() noexcept;
    [[nodiscard]] GPURenderPipelineDescriptor clone() const noexcept;
    /// Getter of the `vertex` attribute.
    [[nodiscard]] GPUVertexState vertex() const;
    /// Setter of the `vertex` attribute.
    void vertex(const GPUVertexState& value);
    /// Getter of the `primitive` attribute.
    [[nodiscard]] GPUPrimitiveState primitive() const;
    /// Setter of the `primitive` attribute.
    void primitive(const GPUPrimitiveState& value);
    /// Getter of the `depthStencil` attribute.
    [[nodiscard]] GPUDepthStencilState depthStencil() const;
    /// Setter of the `depthStencil` attribute.
    void depthStencil(const GPUDepthStencilState& value);
    /// Getter of the `multisample` attribute.
    [[nodiscard]] GPUMultisampleState multisample() const;
    /// Setter of the `multisample` attribute.
    void multisample(const GPUMultisampleState& value);
    /// Getter of the `fragment` attribute.
    [[nodiscard]] GPUFragmentState fragment() const;
    /// Setter of the `fragment` attribute.
    void fragment(const GPUFragmentState& value);
};

} // namespace webbind