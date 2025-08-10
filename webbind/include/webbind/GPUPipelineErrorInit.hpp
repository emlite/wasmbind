#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUPipelineErrorInit
/// [`GPUPipelineErrorInit`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineErrorInit)
class GPUPipelineErrorInit : public emlite::Val {
  explicit GPUPipelineErrorInit(Handle h) noexcept;
public:
    static GPUPipelineErrorInit take_ownership(Handle h) noexcept;
    explicit GPUPipelineErrorInit(const emlite::Val &val) noexcept;
    GPUPipelineErrorInit() noexcept;
    [[nodiscard]] GPUPipelineErrorInit clone() const noexcept;
    [[nodiscard]] GPUPipelineErrorReason reason() const;
    void reason(const GPUPipelineErrorReason& value);
};

} // namespace webbind