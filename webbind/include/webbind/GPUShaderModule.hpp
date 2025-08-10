#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUCompilationInfo;

/// Interface GPUShaderModule
/// [`GPUShaderModule`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule)
class GPUShaderModule : public emlite::Val {
    explicit GPUShaderModule(Handle h) noexcept;
public:
    explicit GPUShaderModule(const emlite::Val &val) noexcept;
    static GPUShaderModule take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUShaderModule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getCompilationInfo method.
    /// [`GPUShaderModule.getCompilationInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/getCompilationInfo)
    jsbind::Promise<GPUCompilationInfo> getCompilationInfo();
    /// [`GPUShaderModule.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/label)
    /// [`GPUShaderModule.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUShaderModule.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/label)
    void label(const jsbind::String& value);
};

} // namespace webbind