#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUShaderModuleCompilationHint
class GPUShaderModuleCompilationHint : public emlite::Val {
  explicit GPUShaderModuleCompilationHint(Handle h) noexcept;
public:
    static GPUShaderModuleCompilationHint take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleCompilationHint(const emlite::Val &val) noexcept;
    GPUShaderModuleCompilationHint() noexcept;
    [[nodiscard]] GPUShaderModuleCompilationHint clone() const noexcept;
    /// Getter of the `entryPoint` attribute.
    [[nodiscard]] jsbind::String entryPoint() const;
    /// Setter of the `entryPoint` attribute.
    void entryPoint(const jsbind::String& value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] jsbind::Any layout() const;
    /// Setter of the `layout` attribute.
    void layout(const jsbind::Any& value);
};

} // namespace webbind