#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUTexelCopyBufferLayout
/// [`GPUTexelCopyBufferLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexelCopyBufferLayout)
class GPUTexelCopyBufferLayout : public emlite::Val {
  explicit GPUTexelCopyBufferLayout(Handle h) noexcept;
public:
    static GPUTexelCopyBufferLayout take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferLayout(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferLayout() noexcept;
    [[nodiscard]] GPUTexelCopyBufferLayout clone() const noexcept;
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any bytesPerRow() const;
    void bytesPerRow(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any rowsPerImage() const;
    void rowsPerImage(const jsbind::Any& value);
};

} // namespace webbind