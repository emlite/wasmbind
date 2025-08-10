#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUCanvasToneMapping
class GPUCanvasToneMapping : public emlite::Val {
  explicit GPUCanvasToneMapping(Handle h) noexcept;
public:
    static GPUCanvasToneMapping take_ownership(Handle h) noexcept;
    explicit GPUCanvasToneMapping(const emlite::Val &val) noexcept;
    GPUCanvasToneMapping() noexcept;
    [[nodiscard]] GPUCanvasToneMapping clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] GPUCanvasToneMappingMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const GPUCanvasToneMappingMode& value);
};

} // namespace webbind