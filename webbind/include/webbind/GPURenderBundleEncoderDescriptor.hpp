#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPURenderPassLayout.hpp"

namespace webbind {

/// Dictionary type GPURenderBundleEncoderDescriptor
class GPURenderBundleEncoderDescriptor : public GPURenderPassLayout {
  explicit GPURenderBundleEncoderDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleEncoderDescriptor() noexcept;
    [[nodiscard]] GPURenderBundleEncoderDescriptor clone() const noexcept;
    /// Getter of the `depthReadOnly` attribute.
    [[nodiscard]] bool depthReadOnly() const;
    /// Setter of the `depthReadOnly` attribute.
    void depthReadOnly(bool value);
    /// Getter of the `stencilReadOnly` attribute.
    [[nodiscard]] bool stencilReadOnly() const;
    /// Setter of the `stencilReadOnly` attribute.
    void stencilReadOnly(bool value);
};

} // namespace webbind