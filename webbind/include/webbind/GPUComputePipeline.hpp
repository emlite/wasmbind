#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUBindGroupLayout;


/// The GPUComputePipeline class.
/// [`GPUComputePipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePipeline)
class GPUComputePipeline : public emlite::Val {
    explicit GPUComputePipeline(Handle h) noexcept;

public:
    explicit GPUComputePipeline(const emlite::Val &val) noexcept;
    static GPUComputePipeline take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUComputePipeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUComputePipeline.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePipeline/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUComputePipeline.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePipeline/label)
    void label(const jsbind::String& value);
    /// The getBindGroupLayout method.
    /// [`GPUComputePipeline.getBindGroupLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePipeline/getBindGroupLayout)
    GPUBindGroupLayout getBindGroupLayout(unsigned long index);
};

