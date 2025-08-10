#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTexelCopyBufferLayout.hpp"

namespace webbind {

class GPUBuffer;

/// Dictionary type GPUTexelCopyBufferInfo
/// [`GPUTexelCopyBufferInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexelCopyBufferInfo)
class GPUTexelCopyBufferInfo : public GPUTexelCopyBufferLayout {
  explicit GPUTexelCopyBufferInfo(Handle h) noexcept;
public:
    static GPUTexelCopyBufferInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferInfo() noexcept;
    [[nodiscard]] GPUTexelCopyBufferInfo clone() const noexcept;
    [[nodiscard]] GPUBuffer buffer() const;
    void buffer(const GPUBuffer& value);
};

} // namespace webbind