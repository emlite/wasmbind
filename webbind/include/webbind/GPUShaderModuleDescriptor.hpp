#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUShaderModuleCompilationHint.hpp"

namespace webbind {

/// Dictionary type GPUShaderModuleDescriptor
class GPUShaderModuleDescriptor : public GPUObjectDescriptorBase {
  explicit GPUShaderModuleDescriptor(Handle h) noexcept;
public:
    static GPUShaderModuleDescriptor take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleDescriptor(const emlite::Val &val) noexcept;
    GPUShaderModuleDescriptor() noexcept;
    [[nodiscard]] GPUShaderModuleDescriptor clone() const noexcept;
    /// Getter of the `code` attribute.
    [[nodiscard]] jsbind::String code() const;
    /// Setter of the `code` attribute.
    void code(const jsbind::String& value);
    /// Getter of the `compilationHints` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUShaderModuleCompilationHint> compilationHints() const;
    /// Setter of the `compilationHints` attribute.
    void compilationHints(const jsbind::TypedArray<GPUShaderModuleCompilationHint>& value);
};

} // namespace webbind