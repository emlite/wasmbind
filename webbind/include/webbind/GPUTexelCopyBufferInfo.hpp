#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTexelCopyBufferLayout.hpp"

namespace webbind {

class GPUBuffer;

/// Dictionary type GPUTexelCopyBufferInfo
class GPUTexelCopyBufferInfo : public GPUTexelCopyBufferLayout {
  explicit GPUTexelCopyBufferInfo(Handle h) noexcept;
public:
    static GPUTexelCopyBufferInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferInfo() noexcept;
    [[nodiscard]] GPUTexelCopyBufferInfo clone() const noexcept;
    /// Getter of the `buffer` attribute.
    [[nodiscard]] GPUBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    void buffer(const GPUBuffer& value);
};

} // namespace webbind