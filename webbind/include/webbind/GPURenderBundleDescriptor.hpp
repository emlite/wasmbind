#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPURenderBundleDescriptor
class GPURenderBundleDescriptor : public GPUObjectDescriptorBase {
  explicit GPURenderBundleDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleDescriptor() noexcept;
    [[nodiscard]] GPURenderBundleDescriptor clone() const noexcept;
};

} // namespace webbind