#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUCommandEncoderDescriptor
class GPUCommandEncoderDescriptor : public GPUObjectDescriptorBase {
  explicit GPUCommandEncoderDescriptor(Handle h) noexcept;
public:
    static GPUCommandEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandEncoderDescriptor(const emlite::Val &val) noexcept;
    GPUCommandEncoderDescriptor() noexcept;
    [[nodiscard]] GPUCommandEncoderDescriptor clone() const noexcept;
};

} // namespace webbind