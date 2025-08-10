#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUVertexAttribute.hpp"

namespace webbind {

/// Dictionary type GPUVertexBufferLayout
/// [`GPUVertexBufferLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexBufferLayout)
class GPUVertexBufferLayout : public emlite::Val {
  explicit GPUVertexBufferLayout(Handle h) noexcept;
public:
    static GPUVertexBufferLayout take_ownership(Handle h) noexcept;
    explicit GPUVertexBufferLayout(const emlite::Val &val) noexcept;
    GPUVertexBufferLayout() noexcept;
    [[nodiscard]] GPUVertexBufferLayout clone() const noexcept;
    [[nodiscard]] jsbind::Any arrayStride() const;
    void arrayStride(const jsbind::Any& value);
    [[nodiscard]] GPUVertexStepMode stepMode() const;
    void stepMode(const GPUVertexStepMode& value);
    [[nodiscard]] jsbind::TypedArray<GPUVertexAttribute> attributes() const;
    void attributes(const jsbind::TypedArray<GPUVertexAttribute>& value);
};

} // namespace webbind