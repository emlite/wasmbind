#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUShaderModuleCompilationHint.hpp"

namespace webbind {

/// Dictionary type GPUShaderModuleDescriptor
/// [`GPUShaderModuleDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModuleDescriptor)
class GPUShaderModuleDescriptor : public GPUObjectDescriptorBase {
  explicit GPUShaderModuleDescriptor(Handle h) noexcept;
public:
    static GPUShaderModuleDescriptor take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleDescriptor(const emlite::Val &val) noexcept;
    GPUShaderModuleDescriptor() noexcept;
    [[nodiscard]] GPUShaderModuleDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String code() const;
    void code(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<GPUShaderModuleCompilationHint> compilationHints() const;
    void compilationHints(const jsbind::TypedArray<GPUShaderModuleCompilationHint>& value);
};

} // namespace webbind