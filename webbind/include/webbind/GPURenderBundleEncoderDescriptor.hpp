#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPURenderPassLayout.hpp"

namespace webbind {

/// Dictionary type GPURenderBundleEncoderDescriptor
/// [`GPURenderBundleEncoderDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoderDescriptor)
class GPURenderBundleEncoderDescriptor : public GPURenderPassLayout {
  explicit GPURenderBundleEncoderDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleEncoderDescriptor() noexcept;
    [[nodiscard]] GPURenderBundleEncoderDescriptor clone() const noexcept;
    [[nodiscard]] bool depthReadOnly() const;
    void depthReadOnly(bool value);
    [[nodiscard]] bool stencilReadOnly() const;
    void stencilReadOnly(bool value);
};

} // namespace webbind