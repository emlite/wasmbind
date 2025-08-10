#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUVertexAttribute
/// [`GPUVertexAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexAttribute)
class GPUVertexAttribute : public emlite::Val {
  explicit GPUVertexAttribute(Handle h) noexcept;
public:
    static GPUVertexAttribute take_ownership(Handle h) noexcept;
    explicit GPUVertexAttribute(const emlite::Val &val) noexcept;
    GPUVertexAttribute() noexcept;
    [[nodiscard]] GPUVertexAttribute clone() const noexcept;
    [[nodiscard]] GPUVertexFormat format() const;
    void format(const GPUVertexFormat& value);
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any shaderLocation() const;
    void shaderLocation(const jsbind::Any& value);
};

} // namespace webbind