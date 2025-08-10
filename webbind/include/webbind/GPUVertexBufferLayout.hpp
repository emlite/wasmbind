#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUVertexAttribute;

/// Dictionary type GPUVertexBufferLayout
class GPUVertexBufferLayout : public emlite::Val {
  explicit GPUVertexBufferLayout(Handle h) noexcept;
public:
    static GPUVertexBufferLayout take_ownership(Handle h) noexcept;
    explicit GPUVertexBufferLayout(const emlite::Val &val) noexcept;
    GPUVertexBufferLayout() noexcept;
    [[nodiscard]] GPUVertexBufferLayout clone() const noexcept;
    /// Getter of the `arrayStride` attribute.
    [[nodiscard]] jsbind::Any arrayStride() const;
    /// Setter of the `arrayStride` attribute.
    void arrayStride(const jsbind::Any& value);
    /// Getter of the `stepMode` attribute.
    [[nodiscard]] GPUVertexStepMode stepMode() const;
    /// Setter of the `stepMode` attribute.
    void stepMode(const GPUVertexStepMode& value);
    /// Getter of the `attributes` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUVertexAttribute> attributes() const;
    /// Setter of the `attributes` attribute.
    void attributes(const jsbind::TypedArray<GPUVertexAttribute>& value);
};

} // namespace webbind