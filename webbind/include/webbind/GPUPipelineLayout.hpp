#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUPipelineLayout class.
/// [`GPUPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineLayout)
class GPUPipelineLayout : public emlite::Val {
    explicit GPUPipelineLayout(Handle h) noexcept;

public:
    explicit GPUPipelineLayout(const emlite::Val &val) noexcept;
    static GPUPipelineLayout take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUPipelineLayout clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUPipelineLayout.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineLayout/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUPipelineLayout.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineLayout/label)
    void label(const jsbind::String& value);
};

