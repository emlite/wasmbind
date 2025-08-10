#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUShaderModuleCompilationHint
/// [`GPUShaderModuleCompilationHint`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModuleCompilationHint)
class GPUShaderModuleCompilationHint : public emlite::Val {
  explicit GPUShaderModuleCompilationHint(Handle h) noexcept;
public:
    static GPUShaderModuleCompilationHint take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleCompilationHint(const emlite::Val &val) noexcept;
    GPUShaderModuleCompilationHint() noexcept;
    [[nodiscard]] GPUShaderModuleCompilationHint clone() const noexcept;
    [[nodiscard]] jsbind::String entryPoint() const;
    void entryPoint(const jsbind::String& value);
    [[nodiscard]] jsbind::Any layout() const;
    void layout(const jsbind::Any& value);
};

} // namespace webbind