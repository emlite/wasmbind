#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUShaderModule;

/// Dictionary type GPUProgrammableStage
class GPUProgrammableStage : public emlite::Val {
  explicit GPUProgrammableStage(Handle h) noexcept;
public:
    static GPUProgrammableStage take_ownership(Handle h) noexcept;
    explicit GPUProgrammableStage(const emlite::Val &val) noexcept;
    GPUProgrammableStage() noexcept;
    [[nodiscard]] GPUProgrammableStage clone() const noexcept;
    /// Getter of the `module` attribute.
    [[nodiscard]] GPUShaderModule module_() const;
    /// Setter of the `module` attribute.
    void module_(const GPUShaderModule& value);
    /// Getter of the `entryPoint` attribute.
    [[nodiscard]] jsbind::String entryPoint() const;
    /// Setter of the `entryPoint` attribute.
    void entryPoint(const jsbind::String& value);
    /// Getter of the `constants` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> constants() const;
    /// Setter of the `constants` attribute.
    void constants(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind