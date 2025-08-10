#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUVertexAttribute
class GPUVertexAttribute : public emlite::Val {
  explicit GPUVertexAttribute(Handle h) noexcept;
public:
    static GPUVertexAttribute take_ownership(Handle h) noexcept;
    explicit GPUVertexAttribute(const emlite::Val &val) noexcept;
    GPUVertexAttribute() noexcept;
    [[nodiscard]] GPUVertexAttribute clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUVertexFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUVertexFormat& value);
    /// Getter of the `offset` attribute.
    [[nodiscard]] jsbind::Any offset() const;
    /// Setter of the `offset` attribute.
    void offset(const jsbind::Any& value);
    /// Getter of the `shaderLocation` attribute.
    [[nodiscard]] jsbind::Any shaderLocation() const;
    /// Setter of the `shaderLocation` attribute.
    void shaderLocation(const jsbind::Any& value);
};

} // namespace webbind