#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUBuffer;

/// Dictionary type GPUBufferBinding
/// [`GPUBufferBinding`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferBinding)
class GPUBufferBinding : public emlite::Val {
  explicit GPUBufferBinding(Handle h) noexcept;
public:
    static GPUBufferBinding take_ownership(Handle h) noexcept;
    explicit GPUBufferBinding(const emlite::Val &val) noexcept;
    GPUBufferBinding() noexcept;
    [[nodiscard]] GPUBufferBinding clone() const noexcept;
    [[nodiscard]] GPUBuffer buffer() const;
    void buffer(const GPUBuffer& value);
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any size() const;
    void size(const jsbind::Any& value);
};

} // namespace webbind