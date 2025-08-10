#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUPipelineDescriptorBase.hpp"
#include "GPUVertexState.hpp"
#include "GPUPrimitiveState.hpp"
#include "GPUDepthStencilState.hpp"
#include "GPUMultisampleState.hpp"
#include "GPUFragmentState.hpp"

namespace webbind {

/// Dictionary type GPURenderPipelineDescriptor
/// [`GPURenderPipelineDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipelineDescriptor)
class GPURenderPipelineDescriptor : public GPUPipelineDescriptorBase {
  explicit GPURenderPipelineDescriptor(Handle h) noexcept;
public:
    static GPURenderPipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPipelineDescriptor(const emlite::Val &val) noexcept;
    GPURenderPipelineDescriptor() noexcept;
    [[nodiscard]] GPURenderPipelineDescriptor clone() const noexcept;
    [[nodiscard]] GPUVertexState vertex() const;
    void vertex(const GPUVertexState& value);
    [[nodiscard]] GPUPrimitiveState primitive() const;
    void primitive(const GPUPrimitiveState& value);
    [[nodiscard]] GPUDepthStencilState depthStencil() const;
    void depthStencil(const GPUDepthStencilState& value);
    [[nodiscard]] GPUMultisampleState multisample() const;
    void multisample(const GPUMultisampleState& value);
    [[nodiscard]] GPUFragmentState fragment() const;
    void fragment(const GPUFragmentState& value);
};

} // namespace webbind