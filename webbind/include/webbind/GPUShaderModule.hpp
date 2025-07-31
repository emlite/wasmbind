#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUCompilationInfo;


/// The GPUShaderModule class.
/// [`GPUShaderModule`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule)
class GPUShaderModule : public emlite::Val {
    explicit GPUShaderModule(Handle h) noexcept;

public:
    explicit GPUShaderModule(const emlite::Val &val) noexcept;
    static GPUShaderModule take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUShaderModule clone() const noexcept;
    /// The getCompilationInfo method.
    /// [`GPUShaderModule.getCompilationInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/getCompilationInfo)
    jsbind::Promise<GPUCompilationInfo> getCompilationInfo();
    /// Getter of the `label` attribute.
    /// [`GPUShaderModule.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUShaderModule.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule/label)
    void label(const jsbind::String& value);
};

