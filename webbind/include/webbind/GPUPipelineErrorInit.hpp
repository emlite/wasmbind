#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUPipelineErrorInit
class GPUPipelineErrorInit : public emlite::Val {
  explicit GPUPipelineErrorInit(Handle h) noexcept;
public:
    static GPUPipelineErrorInit take_ownership(Handle h) noexcept;
    explicit GPUPipelineErrorInit(const emlite::Val &val) noexcept;
    GPUPipelineErrorInit() noexcept;
    [[nodiscard]] GPUPipelineErrorInit clone() const noexcept;
    /// Getter of the `reason` attribute.
    [[nodiscard]] GPUPipelineErrorReason reason() const;
    /// Setter of the `reason` attribute.
    void reason(const GPUPipelineErrorReason& value);
};

} // namespace webbind