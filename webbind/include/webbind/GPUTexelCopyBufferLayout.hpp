#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUTexelCopyBufferLayout
class GPUTexelCopyBufferLayout : public emlite::Val {
  explicit GPUTexelCopyBufferLayout(Handle h) noexcept;
public:
    static GPUTexelCopyBufferLayout take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferLayout(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferLayout() noexcept;
    [[nodiscard]] GPUTexelCopyBufferLayout clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] jsbind::Any offset() const;
    /// Setter of the `offset` attribute.
    void offset(const jsbind::Any& value);
    /// Getter of the `bytesPerRow` attribute.
    [[nodiscard]] jsbind::Any bytesPerRow() const;
    /// Setter of the `bytesPerRow` attribute.
    void bytesPerRow(const jsbind::Any& value);
    /// Getter of the `rowsPerImage` attribute.
    [[nodiscard]] jsbind::Any rowsPerImage() const;
    /// Setter of the `rowsPerImage` attribute.
    void rowsPerImage(const jsbind::Any& value);
};

} // namespace webbind