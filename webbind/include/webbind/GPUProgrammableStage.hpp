#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUShaderModule;

/// Dictionary type GPUProgrammableStage
/// [`GPUProgrammableStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUProgrammableStage)
class GPUProgrammableStage : public emlite::Val {
  explicit GPUProgrammableStage(Handle h) noexcept;
public:
    static GPUProgrammableStage take_ownership(Handle h) noexcept;
    explicit GPUProgrammableStage(const emlite::Val &val) noexcept;
    GPUProgrammableStage() noexcept;
    [[nodiscard]] GPUProgrammableStage clone() const noexcept;
    [[nodiscard]] GPUShaderModule module_() const;
    void module_(const GPUShaderModule& value);
    [[nodiscard]] jsbind::String entryPoint() const;
    void entryPoint(const jsbind::String& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> constants() const;
    void constants(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind