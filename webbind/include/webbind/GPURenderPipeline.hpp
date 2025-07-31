#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUBindGroupLayout;


/// The GPURenderPipeline class.
/// [`GPURenderPipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipeline)
class GPURenderPipeline : public emlite::Val {
    explicit GPURenderPipeline(Handle h) noexcept;

public:
    explicit GPURenderPipeline(const emlite::Val &val) noexcept;
    static GPURenderPipeline take_ownership(Handle h) noexcept;

    [[nodiscard]] GPURenderPipeline clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`GPURenderPipeline.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipeline/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPURenderPipeline.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipeline/label)
    void label(const jsbind::String& value);
    /// The getBindGroupLayout method.
    /// [`GPURenderPipeline.getBindGroupLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipeline/getBindGroupLayout)
    GPUBindGroupLayout getBindGroupLayout(unsigned long index);
};

