#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUBuffer;

/// Dictionary type GPUBufferBinding
class GPUBufferBinding : public emlite::Val {
  explicit GPUBufferBinding(Handle h) noexcept;
public:
    static GPUBufferBinding take_ownership(Handle h) noexcept;
    explicit GPUBufferBinding(const emlite::Val &val) noexcept;
    GPUBufferBinding() noexcept;
    [[nodiscard]] GPUBufferBinding clone() const noexcept;
    /// Getter of the `buffer` attribute.
    [[nodiscard]] GPUBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    void buffer(const GPUBuffer& value);
    /// Getter of the `offset` attribute.
    [[nodiscard]] jsbind::Any offset() const;
    /// Setter of the `offset` attribute.
    void offset(const jsbind::Any& value);
    /// Getter of the `size` attribute.
    [[nodiscard]] jsbind::Any size() const;
    /// Setter of the `size` attribute.
    void size(const jsbind::Any& value);
};

} // namespace webbind